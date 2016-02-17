#include "gtest/gtest.h"

#include "Ec2DnsClient.h"
#include "mocks/MockEC2Client.h"

using namespace testing;
using namespace Aws::EC2;

void _logcb(int, const char*, ...) {
  return;
}

Model::DescribeInstancesOutcome _GetExpectedResponse() {
  return Model::DescribeInstancesOutcome(
      Model::DescribeInstancesResponse().AddReservations(
          Model::Reservation().AddInstances(
              Model::Instance()
                  .WithPrivateIpAddress("10.1.2.3")
                  .WithPlacement(Model::Placement().WithAvailabilityZone("us-east-1a"))
                  .WithInstanceId("i-1234567")
          ))
  );
}

TEST(TestEc2DnsClient, TestEc2DnsClientResolveIp) {
  auto ptr = std::make_shared<MockEC2Client>();
  EXPECT_CALL(*ptr, DescribeInstances(_))
      .WillOnce(Return(_GetExpectedResponse()));

  Ec2DnsClient dnsClient(&_logcb, ptr, "test-zone", Ec2DnsConfig(), std::make_shared<StatsReceiver>());
  std::string ip;
  bool ret = dnsClient.TryResolveIp("i-1234567", "127.0.0.1", &ip);
  ASSERT_TRUE(ret);
  ASSERT_EQ(ip, "10.1.2.3");
}

TEST(TestEc2DnsClient, TestEc2DnsClientResolveHostname) {
  auto ptr = std::make_shared<MockEC2Client>();
  EXPECT_CALL(*ptr, DescribeInstances(_))
      .WillOnce(Return(_GetExpectedResponse()));

  Ec2DnsClient dnsClient(&_logcb, ptr, "test-zone", Ec2DnsConfig(), std::make_shared<StatsReceiver>());
  std::string hostname;
  bool ret = dnsClient.TryResolveHostname("10.1.2.3", "127.0.0.1", &hostname);
  ASSERT_TRUE(ret);
  ASSERT_EQ(hostname, "ue1a-tcd-1234567.test-zone.");
}