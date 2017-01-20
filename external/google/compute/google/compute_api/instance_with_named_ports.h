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
#ifndef  GOOGLE_COMPUTE_API_INSTANCE_WITH_NAMED_PORTS_H_
#define  GOOGLE_COMPUTE_API_INSTANCE_WITH_NAMED_PORTS_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/compute_api/named_port.h"

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
class InstanceWithNamedPorts : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static InstanceWithNamedPorts* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit InstanceWithNamedPorts(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit InstanceWithNamedPorts(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~InstanceWithNamedPorts();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::InstanceWithNamedPorts</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::InstanceWithNamedPorts");
  }

  /**
   * Determine if the '<code>instance</code>' attribute was set.
   *
   * @return true if the '<code>instance</code>' attribute was set.
   */
  bool has_instance() const {
    return Storage().isMember("instance");
  }

  /**
   * Clears the '<code>instance</code>' attribute.
   */
  void clear_instance() {
    MutableStorage()->removeMember("instance");
  }


  /**
   * Get the value of the '<code>instance</code>' attribute.
   */
  const StringPiece get_instance() const {
    const Json::Value& v = Storage("instance");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>instance</code>' attribute.
   *
   * [Output Only] The URL of the instance.
   *
   * @param[in] value The new value.
   */
  void set_instance(const StringPiece& value) {
    *MutableStorage("instance") = value.data();
  }

  /**
   * Determine if the '<code>namedPorts</code>' attribute was set.
   *
   * @return true if the '<code>namedPorts</code>' attribute was set.
   */
  bool has_named_ports() const {
    return Storage().isMember("namedPorts");
  }

  /**
   * Clears the '<code>namedPorts</code>' attribute.
   */
  void clear_named_ports() {
    MutableStorage()->removeMember("namedPorts");
  }


  /**
   * Get a reference to the value of the '<code>namedPorts</code>' attribute.
   */
  const client::JsonCppArray<NamedPort > get_named_ports() const;

  /**
   * Gets a reference to a mutable value of the '<code>namedPorts</code>'
   * property.
   *
   * [Output Only] The named ports that belong to this instance group.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<NamedPort > mutable_namedPorts();

  /**
   * Determine if the '<code>status</code>' attribute was set.
   *
   * @return true if the '<code>status</code>' attribute was set.
   */
  bool has_status() const {
    return Storage().isMember("status");
  }

  /**
   * Clears the '<code>status</code>' attribute.
   */
  void clear_status() {
    MutableStorage()->removeMember("status");
  }


  /**
   * Get the value of the '<code>status</code>' attribute.
   */
  const StringPiece get_status() const {
    const Json::Value& v = Storage("status");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>status</code>' attribute.
   *
   * [Output Only] The status of the instance.
   *
   * @param[in] value The new value.
   */
  void set_status(const StringPiece& value) {
    *MutableStorage("status") = value.data();
  }

 private:
  void operator=(const InstanceWithNamedPorts&);
};  // InstanceWithNamedPorts
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_INSTANCE_WITH_NAMED_PORTS_H_
