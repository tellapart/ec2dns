// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1
//   Build date: 2017-01-11 18:31:16 UTC
//   on: 2017-01-18, 05:15:31 UTC
//   C++ generator version: 0.1.4

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Compute Engine API (compute/v1)
// Generated from:
//   Version: v1
//   Revision: 133
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.4
#ifndef  GOOGLE_COMPUTE_API_AUTOSCALING_POLICY_H_
#define  GOOGLE_COMPUTE_API_AUTOSCALING_POLICY_H_

#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/compute_api/autoscaling_policy_cpu_utilization.h"
#include "google/compute_api/autoscaling_policy_custom_metric_utilization.h"
#include "google/compute_api/autoscaling_policy_load_balancing_utilization.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_compute_api {
using namespace googleapis;

/**
 * Cloud Autoscaler policy.
 *
 * @ingroup DataObject
 */
class AutoscalingPolicy : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static AutoscalingPolicy* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit AutoscalingPolicy(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit AutoscalingPolicy(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~AutoscalingPolicy();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::AutoscalingPolicy</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::AutoscalingPolicy");
  }

  /**
   * Determine if the '<code>coolDownPeriodSec</code>' attribute was set.
   *
   * @return true if the '<code>coolDownPeriodSec</code>' attribute was set.
   */
  bool has_cool_down_period_sec() const {
    return Storage().isMember("coolDownPeriodSec");
  }

  /**
   * Clears the '<code>coolDownPeriodSec</code>' attribute.
   */
  void clear_cool_down_period_sec() {
    MutableStorage()->removeMember("coolDownPeriodSec");
  }


  /**
   * Get the value of the '<code>coolDownPeriodSec</code>' attribute.
   */
  int32 get_cool_down_period_sec() const {
    const Json::Value& storage = Storage("coolDownPeriodSec");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>coolDownPeriodSec</code>' attribute.
   *
   * The number of seconds that the autoscaler should wait before it starts
   * collecting information from a new instance. This prevents the autoscaler
   * from collecting information when the instance is initializing, during which
   * the collected usage would not be reliable. The default time autoscaler
   * waits is 60 seconds.
   *
   * Virtual machine initialization times might vary because of numerous
   * factors. We recommend that you test how long an instance may take to
   * initialize. To do this, create an instance and time the startup process.
   *
   * @param[in] value The new value.
   */
  void set_cool_down_period_sec(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("coolDownPeriodSec"));
  }

  /**
   * Determine if the '<code>cpuUtilization</code>' attribute was set.
   *
   * @return true if the '<code>cpuUtilization</code>' attribute was set.
   */
  bool has_cpu_utilization() const {
    return Storage().isMember("cpuUtilization");
  }

  /**
   * Clears the '<code>cpuUtilization</code>' attribute.
   */
  void clear_cpu_utilization() {
    MutableStorage()->removeMember("cpuUtilization");
  }


  /**
   * Get a reference to the value of the '<code>cpuUtilization</code>'
   * attribute.
   */
  const AutoscalingPolicyCpuUtilization get_cpu_utilization() const;

  /**
   * Gets a reference to a mutable value of the '<code>cpuUtilization</code>'
   * property.
   *
   * Defines the CPU utilization policy that allows the autoscaler to scale
   * based on the average CPU utilization of a managed instance group.
   *
   * @return The result can be modified to change the attribute value.
   */
  AutoscalingPolicyCpuUtilization mutable_cpuUtilization();

  /**
   * Determine if the '<code>customMetricUtilizations</code>' attribute was set.
   *
   * @return true if the '<code>customMetricUtilizations</code>' attribute was
   * set.
   */
  bool has_custom_metric_utilizations() const {
    return Storage().isMember("customMetricUtilizations");
  }

  /**
   * Clears the '<code>customMetricUtilizations</code>' attribute.
   */
  void clear_custom_metric_utilizations() {
    MutableStorage()->removeMember("customMetricUtilizations");
  }


  /**
   * Get a reference to the value of the '<code>customMetricUtilizations</code>'
   * attribute.
   */
  const client::JsonCppArray<AutoscalingPolicyCustomMetricUtilization > get_custom_metric_utilizations() const;

  /**
   * Gets a reference to a mutable value of the
   * '<code>customMetricUtilizations</code>' property.
   *
   * Configuration parameters of autoscaling based on a custom metric.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<AutoscalingPolicyCustomMetricUtilization > mutable_customMetricUtilizations();

  /**
   * Determine if the '<code>loadBalancingUtilization</code>' attribute was set.
   *
   * @return true if the '<code>loadBalancingUtilization</code>' attribute was
   * set.
   */
  bool has_load_balancing_utilization() const {
    return Storage().isMember("loadBalancingUtilization");
  }

  /**
   * Clears the '<code>loadBalancingUtilization</code>' attribute.
   */
  void clear_load_balancing_utilization() {
    MutableStorage()->removeMember("loadBalancingUtilization");
  }


  /**
   * Get a reference to the value of the '<code>loadBalancingUtilization</code>'
   * attribute.
   */
  const AutoscalingPolicyLoadBalancingUtilization get_load_balancing_utilization() const;

  /**
   * Gets a reference to a mutable value of the
   * '<code>loadBalancingUtilization</code>' property.
   *
   * Configuration parameters of autoscaling based on load balancer.
   *
   * @return The result can be modified to change the attribute value.
   */
  AutoscalingPolicyLoadBalancingUtilization mutable_loadBalancingUtilization();

  /**
   * Determine if the '<code>maxNumReplicas</code>' attribute was set.
   *
   * @return true if the '<code>maxNumReplicas</code>' attribute was set.
   */
  bool has_max_num_replicas() const {
    return Storage().isMember("maxNumReplicas");
  }

  /**
   * Clears the '<code>maxNumReplicas</code>' attribute.
   */
  void clear_max_num_replicas() {
    MutableStorage()->removeMember("maxNumReplicas");
  }


  /**
   * Get the value of the '<code>maxNumReplicas</code>' attribute.
   */
  int32 get_max_num_replicas() const {
    const Json::Value& storage = Storage("maxNumReplicas");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>maxNumReplicas</code>' attribute.
   *
   * The maximum number of instances that the autoscaler can scale up to. This
   * is required when creating or updating an autoscaler. The maximum number of
   * replicas should not be lower than minimal number of replicas.
   *
   * @param[in] value The new value.
   */
  void set_max_num_replicas(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("maxNumReplicas"));
  }

  /**
   * Determine if the '<code>minNumReplicas</code>' attribute was set.
   *
   * @return true if the '<code>minNumReplicas</code>' attribute was set.
   */
  bool has_min_num_replicas() const {
    return Storage().isMember("minNumReplicas");
  }

  /**
   * Clears the '<code>minNumReplicas</code>' attribute.
   */
  void clear_min_num_replicas() {
    MutableStorage()->removeMember("minNumReplicas");
  }


  /**
   * Get the value of the '<code>minNumReplicas</code>' attribute.
   */
  int32 get_min_num_replicas() const {
    const Json::Value& storage = Storage("minNumReplicas");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>minNumReplicas</code>' attribute.
   *
   * The minimum number of replicas that the autoscaler can scale down to. This
   * cannot be less than 0. If not provided, autoscaler will choose a default
   * value depending on maximum number of instances allowed.
   *
   * @param[in] value The new value.
   */
  void set_min_num_replicas(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("minNumReplicas"));
  }

 private:
  void operator=(const AutoscalingPolicy&);
};  // AutoscalingPolicy
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_AUTOSCALING_POLICY_H_
