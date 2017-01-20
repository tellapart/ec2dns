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
#ifndef  GOOGLE_COMPUTE_API_MANAGED_INSTANCE_LAST_ATTEMPT_H_
#define  GOOGLE_COMPUTE_API_MANAGED_INSTANCE_LAST_ATTEMPT_H_

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
class ManagedInstanceLastAttempt : public client::JsonCppData {
 public:
  /**
   * [Output Only] Encountered errors during the last attempt to create or
   * delete the instance.
   *
   * @ingroup DataObject
   */
  class ManagedInstanceLastAttemptErrors : public client::JsonCppData {
   public:
    /**
     * No description provided.
     *
     * @ingroup DataObject
     */
    class ManagedInstanceLastAttemptErrorsErrors : public client::JsonCppData {
     public:
      /**
       * Creates a new default instance.
       *
       * @return Ownership is passed back to the caller.
       */
      static ManagedInstanceLastAttemptErrorsErrors* New();

      /**
       * Standard constructor for an immutable data object instance.
       *
       * @param[in] storage  The underlying data storage for this instance.
       */
      explicit ManagedInstanceLastAttemptErrorsErrors(const Json::Value& storage);

      /**
       * Standard constructor for a mutable data object instance.
       *
       * @param[in] storage  The underlying data storage for this instance.
       */
      explicit ManagedInstanceLastAttemptErrorsErrors(Json::Value* storage);

      /**
       * Standard destructor.
       */
      virtual ~ManagedInstanceLastAttemptErrorsErrors();

      /**
       * Returns a string denoting the type of this data object.
       *
       * @return
       * <code>google_compute_api::ManagedInstanceLastAttemptErrorsErrors</code>
       */
      const StringPiece GetTypeName() const {
        return StringPiece("google_compute_api::ManagedInstanceLastAttemptErrorsErrors");
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
       * [Output Only] The error type identifier for this error.
       *
       * @param[in] value The new value.
       */
      void set_code(const StringPiece& value) {
        *MutableStorage("code") = value.data();
      }

      /**
       * Determine if the '<code>location</code>' attribute was set.
       *
       * @return true if the '<code>location</code>' attribute was set.
       */
      bool has_location() const {
        return Storage().isMember("location");
      }

      /**
       * Clears the '<code>location</code>' attribute.
       */
      void clear_location() {
        MutableStorage()->removeMember("location");
      }


      /**
       * Get the value of the '<code>location</code>' attribute.
       */
      const StringPiece get_location() const {
        const Json::Value& v = Storage("location");
        if (v == Json::Value::null) return StringPiece("");
        return StringPiece(v.asCString());
      }

      /**
       * Change the '<code>location</code>' attribute.
       *
       * [Output Only] Indicates the field in the request that caused the error.
       * This property is optional.
       *
       * @param[in] value The new value.
       */
      void set_location(const StringPiece& value) {
        *MutableStorage("location") = value.data();
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
       * [Output Only] An optional, human-readable error message.
       *
       * @param[in] value The new value.
       */
      void set_message(const StringPiece& value) {
        *MutableStorage("message") = value.data();
      }

     private:
      void operator=(const ManagedInstanceLastAttemptErrorsErrors&);
    };  // ManagedInstanceLastAttemptErrorsErrors
    /**
     * Creates a new default instance.
     *
     * @return Ownership is passed back to the caller.
     */
    static ManagedInstanceLastAttemptErrors* New();

    /**
     * Standard constructor for an immutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit ManagedInstanceLastAttemptErrors(const Json::Value& storage);

    /**
     * Standard constructor for a mutable data object instance.
     *
     * @param[in] storage  The underlying data storage for this instance.
     */
    explicit ManagedInstanceLastAttemptErrors(Json::Value* storage);

    /**
     * Standard destructor.
     */
    virtual ~ManagedInstanceLastAttemptErrors();

    /**
     * Returns a string denoting the type of this data object.
     *
     * @return <code>google_compute_api::ManagedInstanceLastAttemptErrors</code>
     */
    const StringPiece GetTypeName() const {
      return StringPiece("google_compute_api::ManagedInstanceLastAttemptErrors");
    }

    /**
     * Determine if the '<code>errors</code>' attribute was set.
     *
     * @return true if the '<code>errors</code>' attribute was set.
     */
    bool has_errors() const {
      return Storage().isMember("errors");
    }

    /**
     * Clears the '<code>errors</code>' attribute.
     */
    void clear_errors() {
      MutableStorage()->removeMember("errors");
    }


    /**
     * Get a reference to the value of the '<code>errors</code>' attribute.
     */
    const client::JsonCppArray<ManagedInstanceLastAttemptErrorsErrors > get_errors() const {
       const Json::Value& storage = Storage("errors");
      return client::JsonValueToCppValueHelper<client::JsonCppArray<ManagedInstanceLastAttemptErrorsErrors > >(storage);
    }

    /**
     * Gets a reference to a mutable value of the '<code>errors</code>'
     * property.
     *
     * [Output Only] The array of errors encountered while processing this
     * operation.
     *
     * @return The result can be modified to change the attribute value.
     */
    client::JsonCppArray<ManagedInstanceLastAttemptErrorsErrors > mutable_errors() {
      Json::Value* storage = MutableStorage("errors");
      return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<ManagedInstanceLastAttemptErrorsErrors > >(storage);
    }

   private:
    void operator=(const ManagedInstanceLastAttemptErrors&);
  };  // ManagedInstanceLastAttemptErrors
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ManagedInstanceLastAttempt* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ManagedInstanceLastAttempt(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ManagedInstanceLastAttempt(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ManagedInstanceLastAttempt();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::ManagedInstanceLastAttempt</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::ManagedInstanceLastAttempt");
  }

  /**
   * Determine if the '<code>errors</code>' attribute was set.
   *
   * @return true if the '<code>errors</code>' attribute was set.
   */
  bool has_errors() const {
    return Storage().isMember("errors");
  }

  /**
   * Clears the '<code>errors</code>' attribute.
   */
  void clear_errors() {
    MutableStorage()->removeMember("errors");
  }


  /**
   * Get a reference to the value of the '<code>errors</code>' attribute.
   */
  const ManagedInstanceLastAttemptErrors get_errors() const {
     const Json::Value& storage = Storage("errors");
    return client::JsonValueToCppValueHelper<ManagedInstanceLastAttemptErrors >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>errors</code>' property.
   *
   * [Output Only] Encountered errors during the last attempt to create or
   * delete the instance.
   *
   * @return The result can be modified to change the attribute value.
   */
  ManagedInstanceLastAttemptErrors mutable_errors() {
    Json::Value* storage = MutableStorage("errors");
    return client::JsonValueToMutableCppValueHelper<ManagedInstanceLastAttemptErrors >(storage);
  }

 private:
  void operator=(const ManagedInstanceLastAttempt&);
};  // ManagedInstanceLastAttempt
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_MANAGED_INSTANCE_LAST_ATTEMPT_H_
