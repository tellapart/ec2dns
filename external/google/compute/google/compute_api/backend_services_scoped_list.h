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
#ifndef  GOOGLE_COMPUTE_API_BACKEND_SERVICES_SCOPED_LIST_H_
#define  GOOGLE_COMPUTE_API_BACKEND_SERVICES_SCOPED_LIST_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/compute_api/backend_service.h"

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
class BackendServicesScopedList : public client::JsonCppData {
 public:
  /**
   * Informational warning which replaces the list of backend services when the
   * list is empty.
   *
   * @ingroup DataObject
   */
  class BackendServicesScopedListWarning : public client::JsonCppData {
   public:
    /**
     * No description provided.
     *
     * @ingroup DataObject
     */
    class BackendServicesScopedListWarningData : public client::JsonCppData {
     public:
      /**
       * Creates a new default instance.
       *
       * @return Ownership is passed back to the caller.
       */
      static BackendServicesScopedListWarningData* New();

      /**
       * Standard constructor for an immutable data object instance.
       *
       * @param[in] storage  The underlying data storage for this instance.
       */
      explicit BackendServicesScopedListWarningData(const Json::Value& storage);

      /**
       * Standard constructor for a mutable data object instance.
       *
       * @param[in] storage  The underlying data storage for this instance.
       */
      explicit BackendServicesScopedListWarningData(Json::Value* storage);

      /**
       * Standard destructor.
       */
      virtual ~BackendServicesScopedListWarningData();

      /**
       * Returns a string denoting the type of this data object.
       *
       * @return
       * <code>google_compute_api::BackendServicesScopedListWarningData</code>
       */
      const StringPiece GetTypeName() const {
        return StringPiece("google_compute_api::BackendServicesScopedListWarningData");
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
      void operator=(const BackendServicesScopedListWarningData&);
    };  // BackendServicesScopedListWarningData
    /**
     * Creates a new default instance.
     *
     * @return Ownership is passed back to the caller.
     */
    static BackendServicesScopedListWarning* New();

    /**
     * Standard constructor for an immutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit BackendServicesScopedListWarning(const Json::Value& storage);

    /**
     * Standard constructor for a mutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit BackendServicesScopedListWarning(Json::Value* storage);

    /**
     * Standard destructor.
     */
    virtual ~BackendServicesScopedListWarning();

    /**
     * Returns a string denoting the type of this data object.
     *
     * @return <code>google_compute_api::BackendServicesScopedListWarning</code>
     */
    const StringPiece GetTypeName() const {
      return StringPiece("google_compute_api::BackendServicesScopedListWarning");
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
    const client::JsonCppArray<BackendServicesScopedListWarningData > get_data() const {
       const Json::Value& storage = Storage("data");
      return client::JsonValueToCppValueHelper<client::JsonCppArray<BackendServicesScopedListWarningData > >(storage);
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
    client::JsonCppArray<BackendServicesScopedListWarningData > mutable_data() {
      Json::Value* storage = MutableStorage("data");
      return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<BackendServicesScopedListWarningData > >(storage);
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
    void operator=(const BackendServicesScopedListWarning&);
  };  // BackendServicesScopedListWarning
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static BackendServicesScopedList* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit BackendServicesScopedList(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit BackendServicesScopedList(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~BackendServicesScopedList();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::BackendServicesScopedList</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::BackendServicesScopedList");
  }

  /**
   * Determine if the '<code>backendServices</code>' attribute was set.
   *
   * @return true if the '<code>backendServices</code>' attribute was set.
   */
  bool has_backend_services() const {
    return Storage().isMember("backendServices");
  }

  /**
   * Clears the '<code>backendServices</code>' attribute.
   */
  void clear_backend_services() {
    MutableStorage()->removeMember("backendServices");
  }


  /**
   * Get a reference to the value of the '<code>backendServices</code>'
   * attribute.
   */
  const client::JsonCppArray<BackendService > get_backend_services() const;

  /**
   * Gets a reference to a mutable value of the '<code>backendServices</code>'
   * property.
   *
   * List of BackendServices contained in this scope.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<BackendService > mutable_backendServices();

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
  const BackendServicesScopedListWarning get_warning() const {
     const Json::Value& storage = Storage("warning");
    return client::JsonValueToCppValueHelper<BackendServicesScopedListWarning >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>warning</code>' property.
   *
   * Informational warning which replaces the list of backend services when the
   * list is empty.
   *
   * @return The result can be modified to change the attribute value.
   */
  BackendServicesScopedListWarning mutable_warning() {
    Json::Value* storage = MutableStorage("warning");
    return client::JsonValueToMutableCppValueHelper<BackendServicesScopedListWarning >(storage);
  }

 private:
  void operator=(const BackendServicesScopedList&);
};  // BackendServicesScopedList
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_BACKEND_SERVICES_SCOPED_LIST_H_
