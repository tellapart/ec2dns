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
#ifndef  GOOGLE_COMPUTE_API_BACKEND_SERVICE_AGGREGATED_LIST_H_
#define  GOOGLE_COMPUTE_API_BACKEND_SERVICE_AGGREGATED_LIST_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/compute_api/backend_services_scoped_list.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_compute_api {
using namespace googleapis;

/**
 * Contains a list of BackendServicesScopedList.
 *
 * @ingroup DataObject
 */
class BackendServiceAggregatedList : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static BackendServiceAggregatedList* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit BackendServiceAggregatedList(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit BackendServiceAggregatedList(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~BackendServiceAggregatedList();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::BackendServiceAggregatedList</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::BackendServiceAggregatedList");
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
  const StringPiece get_id() const {
    const Json::Value& v = Storage("id");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * [Output Only] Unique identifier for the resource; defined by the server.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
  }

  /**
   * Determine if the '<code>items</code>' attribute was set.
   *
   * @return true if the '<code>items</code>' attribute was set.
   */
  bool has_items() const {
    return Storage().isMember("items");
  }

  /**
   * Clears the '<code>items</code>' attribute.
   */
  void clear_items() {
    MutableStorage()->removeMember("items");
  }


  /**
   * Get a reference to the value of the '<code>items</code>' attribute.
   */
  const client::JsonCppAssociativeArray<BackendServicesScopedList > get_items() const;

  /**
   * Gets a reference to a mutable value of the '<code>items</code>' property.
   *
   * A map of scoped BackendService lists.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppAssociativeArray<BackendServicesScopedList > mutable_items();

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
   * Determine if the '<code>nextPageToken</code>' attribute was set.
   *
   * @return true if the '<code>nextPageToken</code>' attribute was set.
   */
  bool has_next_page_token() const {
    return Storage().isMember("nextPageToken");
  }

  /**
   * Clears the '<code>nextPageToken</code>' attribute.
   */
  void clear_next_page_token() {
    MutableStorage()->removeMember("nextPageToken");
  }


  /**
   * Get the value of the '<code>nextPageToken</code>' attribute.
   */
  const StringPiece get_next_page_token() const {
    const Json::Value& v = Storage("nextPageToken");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>nextPageToken</code>' attribute.
   *
   * [Output Only] A token used to continue a truncated list request.
   *
   * @param[in] value The new value.
   */
  void set_next_page_token(const StringPiece& value) {
    *MutableStorage("nextPageToken") = value.data();
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
   * [Output Only] Server-defined URL for this resource.
   *
   * @param[in] value The new value.
   */
  void set_self_link(const StringPiece& value) {
    *MutableStorage("selfLink") = value.data();
  }

 private:
  void operator=(const BackendServiceAggregatedList&);
};  // BackendServiceAggregatedList
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_BACKEND_SERVICE_AGGREGATED_LIST_H_
