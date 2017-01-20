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
#ifndef  GOOGLE_COMPUTE_API_NETWORK_INTERFACE_H_
#define  GOOGLE_COMPUTE_API_NETWORK_INTERFACE_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/compute_api/access_config.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_compute_api {
using namespace googleapis;

/**
 * A network interface resource attached to an instance.
 *
 * @ingroup DataObject
 */
class NetworkInterface : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static NetworkInterface* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit NetworkInterface(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit NetworkInterface(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~NetworkInterface();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::NetworkInterface</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::NetworkInterface");
  }

  /**
   * Determine if the '<code>accessConfigs</code>' attribute was set.
   *
   * @return true if the '<code>accessConfigs</code>' attribute was set.
   */
  bool has_access_configs() const {
    return Storage().isMember("accessConfigs");
  }

  /**
   * Clears the '<code>accessConfigs</code>' attribute.
   */
  void clear_access_configs() {
    MutableStorage()->removeMember("accessConfigs");
  }


  /**
   * Get a reference to the value of the '<code>accessConfigs</code>' attribute.
   */
  const client::JsonCppArray<AccessConfig > get_access_configs() const;

  /**
   * Gets a reference to a mutable value of the '<code>accessConfigs</code>'
   * property.
   *
   * An array of configurations for this interface. Currently, only one access
   * config, ONE_TO_ONE_NAT, is supported. If there are no accessConfigs
   * specified, then this instance will have no external internet access.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<AccessConfig > mutable_accessConfigs();

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * [Output Only] Type of the resource. Always compute#networkInterface for
   * network interfaces.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>name</code>' attribute was set.
   *
   * @return true if the '<code>name</code>' attribute was set.
   */
  bool has_name() const {
    return Storage().isMember("name");
  }

  /**
   * Clears the '<code>name</code>' attribute.
   */
  void clear_name() {
    MutableStorage()->removeMember("name");
  }


  /**
   * Get the value of the '<code>name</code>' attribute.
   */
  const StringPiece get_name() const {
    const Json::Value& v = Storage("name");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>name</code>' attribute.
   *
   * [Output Only] The name of the network interface, generated by the server.
   * For network devices, these are eth0, eth1, etc.
   *
   * @param[in] value The new value.
   */
  void set_name(const StringPiece& value) {
    *MutableStorage("name") = value.data();
  }

  /**
   * Determine if the '<code>network</code>' attribute was set.
   *
   * @return true if the '<code>network</code>' attribute was set.
   */
  bool has_network() const {
    return Storage().isMember("network");
  }

  /**
   * Clears the '<code>network</code>' attribute.
   */
  void clear_network() {
    MutableStorage()->removeMember("network");
  }


  /**
   * Get the value of the '<code>network</code>' attribute.
   */
  const StringPiece get_network() const {
    const Json::Value& v = Storage("network");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>network</code>' attribute.
   *
   * URL of the network resource for this instance. This is required for
   * creating an instance but optional when creating a firewall rule. If not
   * specified when creating a firewall rule, the default network is used:
   *
   * global/networks/default
   *
   * If you specify this property, you can specify the network as a full or
   * partial URL. For example, the following are all valid URLs:
   * - https://www.googleapis.com/compute/v1/projects/project/global/networks/ne
   * twork
   * - projects/project/global/networks/network
   * - global/networks/default.
   *
   * @param[in] value The new value.
   */
  void set_network(const StringPiece& value) {
    *MutableStorage("network") = value.data();
  }

  /**
   * Determine if the '<code>networkIP</code>' attribute was set.
   *
   * @return true if the '<code>networkIP</code>' attribute was set.
   */
  bool has_network_ip() const {
    return Storage().isMember("networkIP");
  }

  /**
   * Clears the '<code>networkIP</code>' attribute.
   */
  void clear_network_ip() {
    MutableStorage()->removeMember("networkIP");
  }


  /**
   * Get the value of the '<code>networkIP</code>' attribute.
   */
  const StringPiece get_network_ip() const {
    const Json::Value& v = Storage("networkIP");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>networkIP</code>' attribute.
   *
   * An IPv4 internal network address to assign to the instance for this network
   * interface. If not specified by the user, an unused internal IP is assigned
   * by the system.
   *
   * @param[in] value The new value.
   */
  void set_network_ip(const StringPiece& value) {
    *MutableStorage("networkIP") = value.data();
  }

  /**
   * Determine if the '<code>subnetwork</code>' attribute was set.
   *
   * @return true if the '<code>subnetwork</code>' attribute was set.
   */
  bool has_subnetwork() const {
    return Storage().isMember("subnetwork");
  }

  /**
   * Clears the '<code>subnetwork</code>' attribute.
   */
  void clear_subnetwork() {
    MutableStorage()->removeMember("subnetwork");
  }


  /**
   * Get the value of the '<code>subnetwork</code>' attribute.
   */
  const StringPiece get_subnetwork() const {
    const Json::Value& v = Storage("subnetwork");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>subnetwork</code>' attribute.
   *
   * The URL of the Subnetwork resource for this instance. If the network
   * resource is in legacy mode, do not provide this property. If the network is
   * in auto subnet mode, providing the subnetwork is optional. If the network
   * is in custom subnet mode, then this field should be specified. If you
   * specify this property, you can specify the subnetwork as a full or partial
   * URL. For example, the following are all valid URLs:
   * - https://www.googleapis.com/compute/v1/projects/project/regions/region/sub
   * networks/subnetwork
   * - regions/region/subnetworks/subnetwork.
   *
   * @param[in] value The new value.
   */
  void set_subnetwork(const StringPiece& value) {
    *MutableStorage("subnetwork") = value.data();
  }

 private:
  void operator=(const NetworkInterface&);
};  // NetworkInterface
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_NETWORK_INTERFACE_H_
