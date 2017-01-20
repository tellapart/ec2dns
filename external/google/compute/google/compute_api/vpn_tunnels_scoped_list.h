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
#ifndef  GOOGLE_COMPUTE_API_VPN_TUNNELS_SCOPED_LIST_H_
#define  GOOGLE_COMPUTE_API_VPN_TUNNELS_SCOPED_LIST_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/compute_api/vpn_tunnel.h"

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
class VpnTunnelsScopedList : public client::JsonCppData {
 public:
  /**
   * Informational warning which replaces the list of addresses when the list is
   * empty.
   *
   * @ingroup DataObject
   */
  class VpnTunnelsScopedListWarning : public client::JsonCppData {
   public:
    /**
     * No description provided.
     *
     * @ingroup DataObject
     */
    class VpnTunnelsScopedListWarningData : public client::JsonCppData {
     public:
      /**
       * Creates a new default instance.
       *
       * @return Ownership is passed back to the caller.
       */
      static VpnTunnelsScopedListWarningData* New();

      /**
       * Standard constructor for an immutable data object instance.
       *
       * @param[in] storage  The underlying data storage for this instance.
       */
      explicit VpnTunnelsScopedListWarningData(const Json::Value& storage);

      /**
       * Standard constructor for a mutable data object instance.
       *
       * @param[in] storage  The underlying data storage for this instance.
       */
      explicit VpnTunnelsScopedListWarningData(Json::Value* storage);

      /**
       * Standard destructor.
       */
      virtual ~VpnTunnelsScopedListWarningData();

      /**
       * Returns a string denoting the type of this data object.
       *
       * @return
       * <code>google_compute_api::VpnTunnelsScopedListWarningData</code>
       */
      const StringPiece GetTypeName() const {
        return StringPiece("google_compute_api::VpnTunnelsScopedListWarningData");
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
      void operator=(const VpnTunnelsScopedListWarningData&);
    };  // VpnTunnelsScopedListWarningData
    /**
     * Creates a new default instance.
     *
     * @return Ownership is passed back to the caller.
     */
    static VpnTunnelsScopedListWarning* New();

    /**
     * Standard constructor for an immutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit VpnTunnelsScopedListWarning(const Json::Value& storage);

    /**
     * Standard constructor for a mutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit VpnTunnelsScopedListWarning(Json::Value* storage);

    /**
     * Standard destructor.
     */
    virtual ~VpnTunnelsScopedListWarning();

    /**
     * Returns a string denoting the type of this data object.
     *
     * @return <code>google_compute_api::VpnTunnelsScopedListWarning</code>
     */
    const StringPiece GetTypeName() const {
      return StringPiece("google_compute_api::VpnTunnelsScopedListWarning");
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
    const client::JsonCppArray<VpnTunnelsScopedListWarningData > get_data() const {
       const Json::Value& storage = Storage("data");
      return client::JsonValueToCppValueHelper<client::JsonCppArray<VpnTunnelsScopedListWarningData > >(storage);
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
    client::JsonCppArray<VpnTunnelsScopedListWarningData > mutable_data() {
      Json::Value* storage = MutableStorage("data");
      return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<VpnTunnelsScopedListWarningData > >(storage);
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
    void operator=(const VpnTunnelsScopedListWarning&);
  };  // VpnTunnelsScopedListWarning
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static VpnTunnelsScopedList* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VpnTunnelsScopedList(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VpnTunnelsScopedList(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~VpnTunnelsScopedList();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::VpnTunnelsScopedList</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::VpnTunnelsScopedList");
  }

  /**
   * Determine if the '<code>vpnTunnels</code>' attribute was set.
   *
   * @return true if the '<code>vpnTunnels</code>' attribute was set.
   */
  bool has_vpn_tunnels() const {
    return Storage().isMember("vpnTunnels");
  }

  /**
   * Clears the '<code>vpnTunnels</code>' attribute.
   */
  void clear_vpn_tunnels() {
    MutableStorage()->removeMember("vpnTunnels");
  }


  /**
   * Get a reference to the value of the '<code>vpnTunnels</code>' attribute.
   */
  const client::JsonCppArray<VpnTunnel > get_vpn_tunnels() const;

  /**
   * Gets a reference to a mutable value of the '<code>vpnTunnels</code>'
   * property.
   *
   * List of vpn tunnels contained in this scope.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<VpnTunnel > mutable_vpnTunnels();

  /**
   * Determine if the '<code>warning</code>' attribute was set.
   *
   * @return true if the '<code>warning</code>' attribute was set.
   */
  bool has_warning() const {
    return Storage().isMember("warning");
  }

  /**
   * Clears the '<code>warning</code>' attribute.
   */
  void clear_warning() {
    MutableStorage()->removeMember("warning");
  }


  /**
   * Get a reference to the value of the '<code>warning</code>' attribute.
   */
  const VpnTunnelsScopedListWarning get_warning() const {
     const Json::Value& storage = Storage("warning");
    return client::JsonValueToCppValueHelper<VpnTunnelsScopedListWarning >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>warning</code>' property.
   *
   * Informational warning which replaces the list of addresses when the list is
   * empty.
   *
   * @return The result can be modified to change the attribute value.
   */
  VpnTunnelsScopedListWarning mutable_warning() {
    Json::Value* storage = MutableStorage("warning");
    return client::JsonValueToMutableCppValueHelper<VpnTunnelsScopedListWarning >(storage);
  }

 private:
  void operator=(const VpnTunnelsScopedList&);
};  // VpnTunnelsScopedList
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_VPN_TUNNELS_SCOPED_LIST_H_
