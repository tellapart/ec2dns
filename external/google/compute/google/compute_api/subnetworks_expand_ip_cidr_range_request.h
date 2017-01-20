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
#ifndef  GOOGLE_COMPUTE_API_SUBNETWORKS_EXPAND_IP_CIDR_RANGE_REQUEST_H_
#define  GOOGLE_COMPUTE_API_SUBNETWORKS_EXPAND_IP_CIDR_RANGE_REQUEST_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_compute_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class SubnetworksExpandIpCidrRangeRequest : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static SubnetworksExpandIpCidrRangeRequest* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit SubnetworksExpandIpCidrRangeRequest(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit SubnetworksExpandIpCidrRangeRequest(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~SubnetworksExpandIpCidrRangeRequest();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return
   * <code>google_compute_api::SubnetworksExpandIpCidrRangeRequest</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::SubnetworksExpandIpCidrRangeRequest");
  }

  /**
   * Determine if the '<code>ipCidrRange</code>' attribute was set.
   *
   * @return true if the '<code>ipCidrRange</code>' attribute was set.
   */
  bool has_ip_cidr_range() const {
    return Storage().isMember("ipCidrRange");
  }

  /**
   * Clears the '<code>ipCidrRange</code>' attribute.
   */
  void clear_ip_cidr_range() {
    MutableStorage()->removeMember("ipCidrRange");
  }


  /**
   * Get the value of the '<code>ipCidrRange</code>' attribute.
   */
  const StringPiece get_ip_cidr_range() const {
    const Json::Value& v = Storage("ipCidrRange");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>ipCidrRange</code>' attribute.
   *
   * The IP (in CIDR format or netmask) of internal addresses that are legal on
   * this Subnetwork. This range should be disjoint from other subnetworks
   * within this network. This range can only be larger than (i.e. a superset
   * of) the range previously defined before the update.
   *
   * @param[in] value The new value.
   */
  void set_ip_cidr_range(const StringPiece& value) {
    *MutableStorage("ipCidrRange") = value.data();
  }

 private:
  void operator=(const SubnetworksExpandIpCidrRangeRequest&);
};  // SubnetworksExpandIpCidrRangeRequest
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_SUBNETWORKS_EXPAND_IP_CIDR_RANGE_REQUEST_H_
