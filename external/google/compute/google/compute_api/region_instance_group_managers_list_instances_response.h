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
#ifndef  GOOGLE_COMPUTE_API_REGION_INSTANCE_GROUP_MANAGERS_LIST_INSTANCES_RESPONSE_H_
#define  GOOGLE_COMPUTE_API_REGION_INSTANCE_GROUP_MANAGERS_LIST_INSTANCES_RESPONSE_H_

#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/compute_api/managed_instance.h"

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
class RegionInstanceGroupManagersListInstancesResponse : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static RegionInstanceGroupManagersListInstancesResponse* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit RegionInstanceGroupManagersListInstancesResponse(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit RegionInstanceGroupManagersListInstancesResponse(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~RegionInstanceGroupManagersListInstancesResponse();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::RegionInstanceGroupManagersListInstancesR
   * esponse</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::RegionInstanceGroupManagersListInstancesResponse");
  }

  /**
   * Determine if the '<code>managedInstances</code>' attribute was set.
   *
   * @return true if the '<code>managedInstances</code>' attribute was set.
   */
  bool has_managed_instances() const {
    return Storage().isMember("managedInstances");
  }

  /**
   * Clears the '<code>managedInstances</code>' attribute.
   */
  void clear_managed_instances() {
    MutableStorage()->removeMember("managedInstances");
  }


  /**
   * Get a reference to the value of the '<code>managedInstances</code>'
   * attribute.
   */
  const client::JsonCppArray<ManagedInstance > get_managed_instances() const;

  /**
   * Gets a reference to a mutable value of the '<code>managedInstances</code>'
   * property.
   *
   * List of managed instances.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<ManagedInstance > mutable_managedInstances();

 private:
  void operator=(const RegionInstanceGroupManagersListInstancesResponse&);
};  // RegionInstanceGroupManagersListInstancesResponse
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_REGION_INSTANCE_GROUP_MANAGERS_LIST_INSTANCES_RESPONSE_H_
