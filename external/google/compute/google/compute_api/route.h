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
#ifndef  GOOGLE_COMPUTE_API_ROUTE_H_
#define  GOOGLE_COMPUTE_API_ROUTE_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_compute_api {
using namespace googleapis;

/**
 * Represents a Route resource. A route specifies how certain packets should be
 * handled by the network. Routes are associated with instances by tags and the
 * set of routes for a particular instance is called its routing table.
 *
 * For each packet leaving a instance, the system searches that instance's
 * routing table for a single best matching route. Routes match packets by
 * destination IP address, preferring smaller or more specific ranges over
 * larger ones. If there is a tie, the system selects the route with the
 * smallest priority value. If there is still a tie, it uses the layer three and
 * four packet headers to select just one of the remaining matching routes. The
 * packet is then forwarded as specified by the nextHop field of the winning
 * route - either to another instance destination, a instance gateway or a
 * Google Compute Engine-operated gateway.
 *
 * Packets that do not match any route in the sending instance's routing table
 * are dropped.
 *
 * @ingroup DataObject
 */
class Route : public client::JsonCppData {
 public:
  /**
   * No description provided.
   *
   * @ingroup DataObject
   */
  class RouteWarnings : public client::JsonCppData {
   public:
    /**
     * No description provided.
     *
     * @ingroup DataObject
     */
    class RouteWarningsData : public client::JsonCppData {
     public:
      /**
       * Creates a new default instance.
       *
       * @return Ownership is passed back to the caller.
       */
      static RouteWarningsData* New();

      /**
       * Standard constructor for an immutable data object instance.
       *
       * @param[in] storage  The underlying data storage for this instance.
       */
      explicit RouteWarningsData(const Json::Value& storage);

      /**
       * Standard constructor for a mutable data object instance.
       *
       * @param[in] storage  The underlying data storage for this instance.
       */
      explicit RouteWarningsData(Json::Value* storage);

      /**
       * Standard destructor.
       */
      virtual ~RouteWarningsData();

      /**
       * Returns a string denoting the type of this data object.
       *
       * @return <code>google_compute_api::RouteWarningsData</code>
       */
      const StringPiece GetTypeName() const {
        return StringPiece("google_compute_api::RouteWarningsData");
      }

      /**
       * Determine if the '<code>key</code>' attribute was set.
       *
       * @return true if the '<code>key</code>' attribute was set.
       */
      bool has_key() const {
        return Storage().isMember("key");
      }

      /**
       * Clears the '<code>key</code>' attribute.
       */
      void clear_key() {
        MutableStorage()->removeMember("key");
      }


      /**
       * Get the value of the '<code>key</code>' attribute.
       */
      const StringPiece get_key() const {
        const Json::Value& v = Storage("key");
        if (v == Json::Value::null) return StringPiece("");
        return StringPiece(v.asCString());
      }

      /**
       * Change the '<code>key</code>' attribute.
       *
       * [Output Only] A key that provides more detail on the warning being
       * returned. For example, for warnings where there are no results in a
       * list request for a particular zone, this key might be scope and the key
       * value might be the zone name. Other examples might be a key indicating
       * a deprecated resource and a suggested replacement, or a warning about
       * invalid network settings (for example, if an instance attempts to
       * perform IP forwarding but is not enabled for IP forwarding).
       *
       * @param[in] value The new value.
       */
      void set_key(const StringPiece& value) {
        *MutableStorage("key") = value.data();
      }

      /**
       * Determine if the '<code>value</code>' attribute was set.
       *
       * @return true if the '<code>value</code>' attribute was set.
       */
      bool has_value() const {
        return Storage().isMember("value");
      }

      /**
       * Clears the '<code>value</code>' attribute.
       */
      void clear_value() {
        MutableStorage()->removeMember("value");
      }


      /**
       * Get the value of the '<code>value</code>' attribute.
       */
      const StringPiece get_value() const {
        const Json::Value& v = Storage("value");
        if (v == Json::Value::null) return StringPiece("");
        return StringPiece(v.asCString());
      }

      /**
       * Change the '<code>value</code>' attribute.
       *
       * [Output Only] A warning data value corresponding to the key.
       *
       * @param[in] value The new value.
       */
      void set_value(const StringPiece& value) {
        *MutableStorage("value") = value.data();
      }

     private:
      void operator=(const RouteWarningsData&);
    };  // RouteWarningsData
    /**
     * Creates a new default instance.
     *
     * @return Ownership is passed back to the caller.
     */
    static RouteWarnings* New();

    /**
     * Standard constructor for an immutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit RouteWarnings(const Json::Value& storage);

    /**
     * Standard constructor for a mutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit RouteWarnings(Json::Value* storage);

    /**
     * Standard destructor.
     */
    virtual ~RouteWarnings();

    /**
     * Returns a string denoting the type of this data object.
     *
     * @return <code>google_compute_api::RouteWarnings</code>
     */
    const StringPiece GetTypeName() const {
      return StringPiece("google_compute_api::RouteWarnings");
    }

    /**
     * Determine if the '<code>code</code>' attribute was set.
     *
     * @return true if the '<code>code</code>' attribute was set.
     */
    bool has_code() const {
      return Storage().isMember("code");
    }

    /**
     * Clears the '<code>code</code>' attribute.
     */
    void clear_code() {
      MutableStorage()->removeMember("code");
    }


    /**
     * Get the value of the '<code>code</code>' attribute.
     */
    const StringPiece get_code() const {
      const Json::Value& v = Storage("code");
      if (v == Json::Value::null) return StringPiece("");
      return StringPiece(v.asCString());
    }

    /**
     * Change the '<code>code</code>' attribute.
     *
     * [Output Only] A warning code, if applicable. For example, Compute Engine
     * returns NO_RESULTS_ON_PAGE if there are no results in the response.
     *
     * @param[in] value The new value.
     */
    void set_code(const StringPiece& value) {
      *MutableStorage("code") = value.data();
    }

    /**
     * Determine if the '<code>data</code>' attribute was set.
     *
     * @return true if the '<code>data</code>' attribute was set.
     */
    bool has_data() const {
      return Storage().isMember("data");
    }

    /**
     * Clears the '<code>data</code>' attribute.
     */
    void clear_data() {
      MutableStorage()->removeMember("data");
    }


    /**
     * Get a reference to the value of the '<code>data</code>' attribute.
     */
    const client::JsonCppArray<RouteWarningsData > get_data() const {
       const Json::Value& storage = Storage("data");
      return client::JsonValueToCppValueHelper<client::JsonCppArray<RouteWarningsData > >(storage);
    }

    /**
     * Gets a reference to a mutable value of the '<code>data</code>' property.
     *
     * [Output Only] Metadata about this warning in key: value format. For
     * example:
     * "data": [ { "key": "scope", "value": "zones/us-east1-d" }.
     *
     * @return The result can be modified to change the attribute value.
     */
    client::JsonCppArray<RouteWarningsData > mutable_data() {
      Json::Value* storage = MutableStorage("data");
      return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<RouteWarningsData > >(storage);
    }

    /**
     * Determine if the '<code>message</code>' attribute was set.
     *
     * @return true if the '<code>message</code>' attribute was set.
     */
    bool has_message() const {
      return Storage().isMember("message");
    }

    /**
     * Clears the '<code>message</code>' attribute.
     */
    void clear_message() {
      MutableStorage()->removeMember("message");
    }


    /**
     * Get the value of the '<code>message</code>' attribute.
     */
    const StringPiece get_message() const {
      const Json::Value& v = Storage("message");
      if (v == Json::Value::null) return StringPiece("");
      return StringPiece(v.asCString());
    }

    /**
     * Change the '<code>message</code>' attribute.
     *
     * [Output Only] A human-readable description of the warning code.
     *
     * @param[in] value The new value.
     */
    void set_message(const StringPiece& value) {
      *MutableStorage("message") = value.data();
    }

   private:
    void operator=(const RouteWarnings&);
  };  // RouteWarnings
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Route* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Route(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Route(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Route();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::Route</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::Route");
  }

  /**
   * Determine if the '<code>creationTimestamp</code>' attribute was set.
   *
   * @return true if the '<code>creationTimestamp</code>' attribute was set.
   */
  bool has_creation_timestamp() const {
    return Storage().isMember("creationTimestamp");
  }

  /**
   * Clears the '<code>creationTimestamp</code>' attribute.
   */
  void clear_creation_timestamp() {
    MutableStorage()->removeMember("creationTimestamp");
  }


  /**
   * Get the value of the '<code>creationTimestamp</code>' attribute.
   */
  const StringPiece get_creation_timestamp() const {
    const Json::Value& v = Storage("creationTimestamp");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>creationTimestamp</code>' attribute.
   *
   * [Output Only] Creation timestamp in RFC3339 text format.
   *
   * @param[in] value The new value.
   */
  void set_creation_timestamp(const StringPiece& value) {
    *MutableStorage("creationTimestamp") = value.data();
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
   * An optional description of this resource. Provide this property when you
   * create the resource.
   *
   * @param[in] value The new value.
   */
  void set_description(const StringPiece& value) {
    *MutableStorage("description") = value.data();
  }

  /**
   * Determine if the '<code>destRange</code>' attribute was set.
   *
   * @return true if the '<code>destRange</code>' attribute was set.
   */
  bool has_dest_range() const {
    return Storage().isMember("destRange");
  }

  /**
   * Clears the '<code>destRange</code>' attribute.
   */
  void clear_dest_range() {
    MutableStorage()->removeMember("destRange");
  }


  /**
   * Get the value of the '<code>destRange</code>' attribute.
   */
  const StringPiece get_dest_range() const {
    const Json::Value& v = Storage("destRange");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>destRange</code>' attribute.
   *
   * The destination range of outgoing packets that this route applies to. Only
   * IPv4 is supported.
   *
   * @param[in] value The new value.
   */
  void set_dest_range(const StringPiece& value) {
    *MutableStorage("destRange") = value.data();
  }

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  uint64 get_id() const {
    const Json::Value& storage = Storage("id");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * [Output Only] The unique identifier for the resource. This identifier is
   * defined by the server.
   *
   * @param[in] value The new value.
   */
  void set_id(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("id"));
  }

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
   * [Output Only] Type of this resource. Always compute#routes for Route
   * resources.
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
   * Name of the resource. Provided by the client when the resource is created.
   * The name must be 1-63 characters long, and comply with RFC1035.
   * Specifically, the name must be 1-63 characters long and match the regular
   * expression [a-z]([-a-z0-9]*[a-z0-9])? which means the first character must
   * be a lowercase letter, and all following characters must be a dash,
   * lowercase letter, or digit, except the last character, which cannot be a
   * dash.
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
   * Fully-qualified URL of the network that this route applies to.
   *
   * @param[in] value The new value.
   */
  void set_network(const StringPiece& value) {
    *MutableStorage("network") = value.data();
  }

  /**
   * Determine if the '<code>nextHopGateway</code>' attribute was set.
   *
   * @return true if the '<code>nextHopGateway</code>' attribute was set.
   */
  bool has_next_hop_gateway() const {
    return Storage().isMember("nextHopGateway");
  }

  /**
   * Clears the '<code>nextHopGateway</code>' attribute.
   */
  void clear_next_hop_gateway() {
    MutableStorage()->removeMember("nextHopGateway");
  }


  /**
   * Get the value of the '<code>nextHopGateway</code>' attribute.
   */
  const StringPiece get_next_hop_gateway() const {
    const Json::Value& v = Storage("nextHopGateway");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>nextHopGateway</code>' attribute.
   *
   * The URL to a gateway that should handle matching packets. You can only
   * specify the internet gateway using a full or partial valid URL:
   * projects//global/gateways/default-internet-gateway.
   *
   * @param[in] value The new value.
   */
  void set_next_hop_gateway(const StringPiece& value) {
    *MutableStorage("nextHopGateway") = value.data();
  }

  /**
   * Determine if the '<code>nextHopInstance</code>' attribute was set.
   *
   * @return true if the '<code>nextHopInstance</code>' attribute was set.
   */
  bool has_next_hop_instance() const {
    return Storage().isMember("nextHopInstance");
  }

  /**
   * Clears the '<code>nextHopInstance</code>' attribute.
   */
  void clear_next_hop_instance() {
    MutableStorage()->removeMember("nextHopInstance");
  }


  /**
   * Get the value of the '<code>nextHopInstance</code>' attribute.
   */
  const StringPiece get_next_hop_instance() const {
    const Json::Value& v = Storage("nextHopInstance");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>nextHopInstance</code>' attribute.
   *
   * The URL to an instance that should handle matching packets. You can specify
   * this as a full or partial URL. For example:
   * https://www.googleapis.com/compute/v1/projects/project/zones/zone/instances
   * /.
   *
   * @param[in] value The new value.
   */
  void set_next_hop_instance(const StringPiece& value) {
    *MutableStorage("nextHopInstance") = value.data();
  }

  /**
   * Determine if the '<code>nextHopIp</code>' attribute was set.
   *
   * @return true if the '<code>nextHopIp</code>' attribute was set.
   */
  bool has_next_hop_ip() const {
    return Storage().isMember("nextHopIp");
  }

  /**
   * Clears the '<code>nextHopIp</code>' attribute.
   */
  void clear_next_hop_ip() {
    MutableStorage()->removeMember("nextHopIp");
  }


  /**
   * Get the value of the '<code>nextHopIp</code>' attribute.
   */
  const StringPiece get_next_hop_ip() const {
    const Json::Value& v = Storage("nextHopIp");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>nextHopIp</code>' attribute.
   *
   * The network IP address of an instance that should handle matching packets.
   * Only IPv4 is supported.
   *
   * @param[in] value The new value.
   */
  void set_next_hop_ip(const StringPiece& value) {
    *MutableStorage("nextHopIp") = value.data();
  }

  /**
   * Determine if the '<code>nextHopNetwork</code>' attribute was set.
   *
   * @return true if the '<code>nextHopNetwork</code>' attribute was set.
   */
  bool has_next_hop_network() const {
    return Storage().isMember("nextHopNetwork");
  }

  /**
   * Clears the '<code>nextHopNetwork</code>' attribute.
   */
  void clear_next_hop_network() {
    MutableStorage()->removeMember("nextHopNetwork");
  }


  /**
   * Get the value of the '<code>nextHopNetwork</code>' attribute.
   */
  const StringPiece get_next_hop_network() const {
    const Json::Value& v = Storage("nextHopNetwork");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>nextHopNetwork</code>' attribute.
   *
   * The URL of the local network if it should handle matching packets.
   *
   * @param[in] value The new value.
   */
  void set_next_hop_network(const StringPiece& value) {
    *MutableStorage("nextHopNetwork") = value.data();
  }

  /**
   * Determine if the '<code>nextHopVpnTunnel</code>' attribute was set.
   *
   * @return true if the '<code>nextHopVpnTunnel</code>' attribute was set.
   */
  bool has_next_hop_vpn_tunnel() const {
    return Storage().isMember("nextHopVpnTunnel");
  }

  /**
   * Clears the '<code>nextHopVpnTunnel</code>' attribute.
   */
  void clear_next_hop_vpn_tunnel() {
    MutableStorage()->removeMember("nextHopVpnTunnel");
  }


  /**
   * Get the value of the '<code>nextHopVpnTunnel</code>' attribute.
   */
  const StringPiece get_next_hop_vpn_tunnel() const {
    const Json::Value& v = Storage("nextHopVpnTunnel");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>nextHopVpnTunnel</code>' attribute.
   *
   * The URL to a VpnTunnel that should handle matching packets.
   *
   * @param[in] value The new value.
   */
  void set_next_hop_vpn_tunnel(const StringPiece& value) {
    *MutableStorage("nextHopVpnTunnel") = value.data();
  }

  /**
   * Determine if the '<code>priority</code>' attribute was set.
   *
   * @return true if the '<code>priority</code>' attribute was set.
   */
  bool has_priority() const {
    return Storage().isMember("priority");
  }

  /**
   * Clears the '<code>priority</code>' attribute.
   */
  void clear_priority() {
    MutableStorage()->removeMember("priority");
  }


  /**
   * Get the value of the '<code>priority</code>' attribute.
   */
  uint32 get_priority() const {
    const Json::Value& storage = Storage("priority");
    return client::JsonValueToCppValueHelper<uint32 >(storage);
  }

  /**
   * Change the '<code>priority</code>' attribute.
   *
   * The priority of this route. Priority is used to break ties in cases where
   * there is more than one matching route of equal prefix length. In the case
   * of two routes with equal prefix length, the one with the lowest-numbered
   * priority value wins. Default value is 1000. Valid range is 0 through 65535.
   *
   * @param[in] value The new value.
   */
  void set_priority(uint32 value) {
    client::SetJsonValueFromCppValueHelper<uint32 >(
      value, MutableStorage("priority"));
  }

  /**
   * Determine if the '<code>selfLink</code>' attribute was set.
   *
   * @return true if the '<code>selfLink</code>' attribute was set.
   */
  bool has_self_link() const {
    return Storage().isMember("selfLink");
  }

  /**
   * Clears the '<code>selfLink</code>' attribute.
   */
  void clear_self_link() {
    MutableStorage()->removeMember("selfLink");
  }


  /**
   * Get the value of the '<code>selfLink</code>' attribute.
   */
  const StringPiece get_self_link() const {
    const Json::Value& v = Storage("selfLink");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>selfLink</code>' attribute.
   *
   * [Output Only] Server-defined fully-qualified URL for this resource.
   *
   * @param[in] value The new value.
   */
  void set_self_link(const StringPiece& value) {
    *MutableStorage("selfLink") = value.data();
  }

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
  const client::JsonCppArray<string > get_tags() const {
     const Json::Value& storage = Storage("tags");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>tags</code>' property.
   *
   * A list of instance tags to which this route applies.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_tags() {
    Json::Value* storage = MutableStorage("tags");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Determine if the '<code>warnings</code>' attribute was set.
   *
   * @return true if the '<code>warnings</code>' attribute was set.
   */
  bool has_warnings() const {
    return Storage().isMember("warnings");
  }

  /**
   * Clears the '<code>warnings</code>' attribute.
   */
  void clear_warnings() {
    MutableStorage()->removeMember("warnings");
  }


  /**
   * Get a reference to the value of the '<code>warnings</code>' attribute.
   */
  const client::JsonCppArray<RouteWarnings > get_warnings() const {
     const Json::Value& storage = Storage("warnings");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<RouteWarnings > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>warnings</code>'
   * property.
   *
   * [Output Only] If potential misconfigurations are detected for this route,
   * this field will be populated with warning messages.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<RouteWarnings > mutable_warnings() {
    Json::Value* storage = MutableStorage("warnings");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<RouteWarnings > >(storage);
  }

 private:
  void operator=(const Route&);
};  // Route
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_ROUTE_H_