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
#ifndef  GOOGLE_COMPUTE_API_PATH_MATCHER_H_
#define  GOOGLE_COMPUTE_API_PATH_MATCHER_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/compute_api/path_rule.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_compute_api {
using namespace googleapis;

/**
 * A matcher for the path portion of the URL. The BackendService from the
 * longest-matched rule will serve the URL. If no rule was matched, the default
 * service will be used.
 *
 * @ingroup DataObject
 */
class PathMatcher : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static PathMatcher* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit PathMatcher(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit PathMatcher(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~PathMatcher();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::PathMatcher</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::PathMatcher");
  }

  /**
   * Determine if the '<code>defaultService</code>' attribute was set.
   *
   * @return true if the '<code>defaultService</code>' attribute was set.
   */
  bool has_default_service() const {
    return Storage().isMember("defaultService");
  }

  /**
   * Clears the '<code>defaultService</code>' attribute.
   */
  void clear_default_service() {
    MutableStorage()->removeMember("defaultService");
  }


  /**
   * Get the value of the '<code>defaultService</code>' attribute.
   */
  const StringPiece get_default_service() const {
    const Json::Value& v = Storage("defaultService");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>defaultService</code>' attribute.
   *
   * The full or partial URL to the BackendService resource. This will be used
   * if none of the pathRules defined by this PathMatcher is matched by the
   * URL's path portion. For example, the following are all valid URLs to a
   * BackendService resource:
   * - https://www.googleapis.com/compute/v1/projects/project/global/backendServ
   * ices/backendService
   * - compute/v1/projects/project/global/backendServices/backendService
   * - global/backendServices/backendService.
   *
   * @param[in] value The new value.
   */
  void set_default_service(const StringPiece& value) {
    *MutableStorage("defaultService") = value.data();
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
   * The name to which this PathMatcher is referred by the HostRule.
   *
   * @param[in] value The new value.
   */
  void set_name(const StringPiece& value) {
    *MutableStorage("name") = value.data();
  }

  /**
   * Determine if the '<code>pathRules</code>' attribute was set.
   *
   * @return true if the '<code>pathRules</code>' attribute was set.
   */
  bool has_path_rules() const {
    return Storage().isMember("pathRules");
  }

  /**
   * Clears the '<code>pathRules</code>' attribute.
   */
  void clear_path_rules() {
    MutableStorage()->removeMember("pathRules");
  }


  /**
   * Get a reference to the value of the '<code>pathRules</code>' attribute.
   */
  const client::JsonCppArray<PathRule > get_path_rules() const;

  /**
   * Gets a reference to a mutable value of the '<code>pathRules</code>'
   * property.
   *
   * The list of path rules.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<PathRule > mutable_pathRules();

 private:
  void operator=(const PathMatcher&);
};  // PathMatcher
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_PATH_MATCHER_H_
