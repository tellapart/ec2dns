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
#ifndef  GOOGLE_COMPUTE_API_INSTANCE_PROPERTIES_H_
#define  GOOGLE_COMPUTE_API_INSTANCE_PROPERTIES_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/compute_api/attached_disk.h"
#include "google/compute_api/metadata.h"
#include "google/compute_api/network_interface.h"
#include "google/compute_api/scheduling.h"
#include "google/compute_api/service_account.h"
#include "google/compute_api/tags.h"

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
class InstanceProperties : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static InstanceProperties* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit InstanceProperties(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit InstanceProperties(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~InstanceProperties();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::InstanceProperties</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::InstanceProperties");
  }

  /**
   * Determine if the '<code>canIpForward</code>' attribute was set.
   *
   * @return true if the '<code>canIpForward</code>' attribute was set.
   */
  bool has_can_ip_forward() const {
    return Storage().isMember("canIpForward");
  }

  /**
   * Clears the '<code>canIpForward</code>' attribute.
   */
  void clear_can_ip_forward() {
    MutableStorage()->removeMember("canIpForward");
  }


  /**
   * Get the value of the '<code>canIpForward</code>' attribute.
   */
  bool get_can_ip_forward() const {
    const Json::Value& storage = Storage("canIpForward");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>canIpForward</code>' attribute.
   *
   * Enables instances created based on this template to send packets with
   * source IP addresses other than their own and receive packets with
   * destination IP addresses other than their own. If these instances will be
   * used as an IP gateway or it will be set as the next-hop in a Route
   * resource, specify true. If unsure, leave this set to false. See the Enable
   * IP forwarding for instances documentation for more information.
   *
   * @param[in] value The new value.
   */
  void set_can_ip_forward(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("canIpForward"));
  }

  /**
   * Determine if the '<code>description</code>' attribute was set.
   *
   * @return true if the '<code>description</code>' attribute was set.
   */
  bool has_description() const {
    return Storage().isMember("description");
  }

  /**
   * Clears the '<code>description</code>' attribute.
   */
  void clear_description() {
    MutableStorage()->removeMember("description");
  }


  /**
   * Get the value of the '<code>description</code>' attribute.
   */
  const StringPiece get_description() const {
    const Json::Value& v = Storage("description");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>description</code>' attribute.
   *
   * An optional text description for the instances that are created from this
   * instance template.
   *
   * @param[in] value The new value.
   */
  void set_description(const StringPiece& value) {
    *MutableStorage("description") = value.data();
  }

  /**
   * Determine if the '<code>disks</code>' attribute was set.
   *
   * @return true if the '<code>disks</code>' attribute was set.
   */
  bool has_disks() const {
    return Storage().isMember("disks");
  }

  /**
   * Clears the '<code>disks</code>' attribute.
   */
  void clear_disks() {
    MutableStorage()->removeMember("disks");
  }


  /**
   * Get a reference to the value of the '<code>disks</code>' attribute.
   */
  const client::JsonCppArray<AttachedDisk > get_disks() const;

  /**
   * Gets a reference to a mutable value of the '<code>disks</code>' property.
   *
   * An array of disks that are associated with the instances that are created
   * from this template.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<AttachedDisk > mutable_disks();

  /**
   * Determine if the '<code>machineType</code>' attribute was set.
   *
   * @return true if the '<code>machineType</code>' attribute was set.
   */
  bool has_machine_type() const {
    return Storage().isMember("machineType");
  }

  /**
   * Clears the '<code>machineType</code>' attribute.
   */
  void clear_machine_type() {
    MutableStorage()->removeMember("machineType");
  }


  /**
   * Get the value of the '<code>machineType</code>' attribute.
   */
  const StringPiece get_machine_type() const {
    const Json::Value& v = Storage("machineType");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>machineType</code>' attribute.
   *
   * The machine type to use for instances that are created from this template.
   *
   * @param[in] value The new value.
   */
  void set_machine_type(const StringPiece& value) {
    *MutableStorage("machineType") = value.data();
  }

  /**
   * Determine if the '<code>metadata</code>' attribute was set.
   *
   * @return true if the '<code>metadata</code>' attribute was set.
   */
  bool has_metadata() const {
    return Storage().isMember("metadata");
  }

  /**
   * Clears the '<code>metadata</code>' attribute.
   */
  void clear_metadata() {
    MutableStorage()->removeMember("metadata");
  }


  /**
   * Get a reference to the value of the '<code>metadata</code>' attribute.
   */
  const Metadata get_metadata() const;

  /**
   * Gets a reference to a mutable value of the '<code>metadata</code>'
   * property.
   *
   * The metadata key/value pairs to assign to instances that are created from
   * this template. These pairs can consist of custom metadata or predefined
   * keys. See Project and instance metadata for more information.
   *
   * @return The result can be modified to change the attribute value.
   */
  Metadata mutable_metadata();

  /**
   * Determine if the '<code>networkInterfaces</code>' attribute was set.
   *
   * @return true if the '<code>networkInterfaces</code>' attribute was set.
   */
  bool has_network_interfaces() const {
    return Storage().isMember("networkInterfaces");
  }

  /**
   * Clears the '<code>networkInterfaces</code>' attribute.
   */
  void clear_network_interfaces() {
    MutableStorage()->removeMember("networkInterfaces");
  }


  /**
   * Get a reference to the value of the '<code>networkInterfaces</code>'
   * attribute.
   */
  const client::JsonCppArray<NetworkInterface > get_network_interfaces() const;

  /**
   * Gets a reference to a mutable value of the '<code>networkInterfaces</code>'
   * property.
   *
   * An array of network access configurations for this interface.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<NetworkInterface > mutable_networkInterfaces();

  /**
   * Determine if the '<code>scheduling</code>' attribute was set.
   *
   * @return true if the '<code>scheduling</code>' attribute was set.
   */
  bool has_scheduling() const {
    return Storage().isMember("scheduling");
  }

  /**
   * Clears the '<code>scheduling</code>' attribute.
   */
  void clear_scheduling() {
    MutableStorage()->removeMember("scheduling");
  }


  /**
   * Get a reference to the value of the '<code>scheduling</code>' attribute.
   */
  const Scheduling get_scheduling() const;

  /**
   * Gets a reference to a mutable value of the '<code>scheduling</code>'
   * property.
   *
   * Specifies the scheduling options for the instances that are created from
   * this template.
   *
   * @return The result can be modified to change the attribute value.
   */
  Scheduling mutable_scheduling();

  /**
   * Determine if the '<code>serviceAccounts</code>' attribute was set.
   *
   * @return true if the '<code>serviceAccounts</code>' attribute was set.
   */
  bool has_service_accounts() const {
    return Storage().isMember("serviceAccounts");
  }

  /**
   * Clears the '<code>serviceAccounts</code>' attribute.
   */
  void clear_service_accounts() {
    MutableStorage()->removeMember("serviceAccounts");
  }


  /**
   * Get a reference to the value of the '<code>serviceAccounts</code>'
   * attribute.
   */
  const client::JsonCppArray<ServiceAccount > get_service_accounts() const;

  /**
   * Gets a reference to a mutable value of the '<code>serviceAccounts</code>'
   * property.
   *
   * A list of service accounts with specified scopes. Access tokens for these
   * service accounts are available to the instances that are created from this
   * template. Use metadata queries to obtain the access tokens for these
   * instances.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<ServiceAccount > mutable_serviceAccounts();

  /**
   * Determine if the '<code>tags</code>' attribute was set.
   *
   * @return true if the '<code>tags</code>' attribute was set.
   */
  bool has_tags() const {
    return Storage().isMember("tags");
  }

  /**
   * Clears the '<code>tags</code>' attribute.
   */
  void clear_tags() {
    MutableStorage()->removeMember("tags");
  }


  /**
   * Get a reference to the value of the '<code>tags</code>' attribute.
   */
  const Tags get_tags() const;

  /**
   * Gets a reference to a mutable value of the '<code>tags</code>' property.
   *
   * A list of tags to apply to the instances that are created from this
   * template. The tags identify valid sources or targets for network firewalls.
   * The setTags method can modify this list of tags. Each tag within the list
   * must comply with RFC1035.
   *
   * @return The result can be modified to change the attribute value.
   */
  Tags mutable_tags();

 private:
  void operator=(const InstanceProperties&);
};  // InstanceProperties
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_INSTANCE_PROPERTIES_H_