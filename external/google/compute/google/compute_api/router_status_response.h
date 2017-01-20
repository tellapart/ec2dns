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
#ifndef  GOOGLE_COMPUTE_API_ROUTER_STATUS_RESPONSE_H_
#define  GOOGLE_COMPUTE_API_ROUTER_STATUS_RESPONSE_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/compute_api/router_status.h"

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
class RouterStatusResponse : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static RouterStatusResponse* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit RouterStatusResponse(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit RouterStatusResponse(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~RouterStatusResponse();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::RouterStatusResponse</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::RouterStatusResponse");
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
   * Type of resource.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>result</code>' attribute was set.
   *
   * @return true if the '<code>result</code>' attribute was set.
   */
  bool has_result() const {
    return Storage().isMember("result");
  }

  /**
   * Clears the '<code>result</code>' attribute.
   */
  void clear_result() {
    MutableStorage()->removeMember("result");
  }


  /**
   * Get a reference to the value of the '<code>result</code>' attribute.
   */
  const RouterStatus get_result() const;

  /**
   * Gets a reference to a mutable value of the '<code>result</code>' property.
   * @return The result can be modified to change the attribute value.
   */
  RouterStatus mutable_result();

 private:
  void operator=(const RouterStatusResponse&);
};  // RouterStatusResponse
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_ROUTER_STATUS_RESPONSE_H_
