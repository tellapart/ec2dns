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
#ifndef  GOOGLE_COMPUTE_API_PROJECT_H_
#define  GOOGLE_COMPUTE_API_PROJECT_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/compute_api/metadata.h"
#include "google/compute_api/quota.h"
#include "google/compute_api/usage_export_location.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_compute_api {
using namespace googleapis;

/**
 * A Project resource. Projects can only be created in the Google Cloud Platform
 * Console. Unless marked otherwise, values can only be modified in the console.
 *
 * @ingroup DataObject
 */
class Project : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Project* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Project(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Project(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Project();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::Project</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::Project");
  }

  /**
   * Determine if the '<code>commonInstanceMetadata</code>' attribute was set.
   *
   * @return true if the '<code>commonInstanceMetadata</code>' attribute was
   * set.
   */
  bool has_common_instance_metadata() const {
    return Storage().isMember("commonInstanceMetadata");
  }

  /**
   * Clears the '<code>commonInstanceMetadata</code>' attribute.
   */
  void clear_common_instance_metadata() {
    MutableStorage()->removeMember("commonInstanceMetadata");
  }


  /**
   * Get a reference to the value of the '<code>commonInstanceMetadata</code>'
   * attribute.
   */
  const Metadata get_common_instance_metadata() const;

  /**
   * Gets a reference to a mutable value of the
   * '<code>commonInstanceMetadata</code>' property.
   *
   * Metadata key/value pairs available to all instances contained in this
   * project. See Custom metadata for more information.
   *
   * @return The result can be modified to change the attribute value.
   */
  Metadata mutable_commonInstanceMetadata();

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
   * Determine if the '<code>defaultServiceAccount</code>' attribute was set.
   *
   * @return true if the '<code>defaultServiceAccount</code>' attribute was set.
   */
  bool has_default_service_account() const {
    return Storage().isMember("defaultServiceAccount");
  }

  /**
   * Clears the '<code>defaultServiceAccount</code>' attribute.
   */
  void clear_default_service_account() {
    MutableStorage()->removeMember("defaultServiceAccount");
  }


  /**
   * Get the value of the '<code>defaultServiceAccount</code>' attribute.
   */
  const StringPiece get_default_service_account() const {
    const Json::Value& v = Storage("defaultServiceAccount");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>defaultServiceAccount</code>' attribute.
   *
   * [Output Only] Default service account used by VMs running in this project.
   *
   * @param[in] value The new value.
   */
  void set_default_service_account(const StringPiece& value) {
    *MutableStorage("defaultServiceAccount") = value.data();
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
   * An optional textual description of the resource.
   *
   * @param[in] value The new value.
   */
  void set_description(const StringPiece& value) {
    *MutableStorage("description") = value.data();
  }

  /**
   * Determine if the '<code>enabledFeatures</code>' attribute was set.
   *
   * @return true if the '<code>enabledFeatures</code>' attribute was set.
   */
  bool has_enabled_features() const {
    return Storage().isMember("enabledFeatures");
  }

  /**
   * Clears the '<code>enabledFeatures</code>' attribute.
   */
  void clear_enabled_features() {
    MutableStorage()->removeMember("enabledFeatures");
  }


  /**
   * Get a reference to the value of the '<code>enabledFeatures</code>'
   * attribute.
   */
  const client::JsonCppArray<string > get_enabled_features() const {
     const Json::Value& storage = Storage("enabledFeatures");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>enabledFeatures</code>'
   * property.
   *
   * Restricted features enabled for use on this project.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_enabledFeatures() {
    Json::Value* storage = MutableStorage("enabledFeatures");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
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
   * defined by the server. This is not the project ID, and is just a unique ID
   * used by Compute Engine to identify resources.
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
   * [Output Only] Type of the resource. Always compute#project for projects.
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
   * The project ID. For example: my-example-project. Use the project ID to make
   * requests to Compute Engine.
   *
   * @param[in] value The new value.
   */
  void set_name(const StringPiece& value) {
    *MutableStorage("name") = value.data();
  }

  /**
   * Determine if the '<code>quotas</code>' attribute was set.
   *
   * @return true if the '<code>quotas</code>' attribute was set.
   */
  bool has_quotas() const {
    return Storage().isMember("quotas");
  }

  /**
   * Clears the '<code>quotas</code>' attribute.
   */
  void clear_quotas() {
    MutableStorage()->removeMember("quotas");
  }


  /**
   * Get a reference to the value of the '<code>quotas</code>' attribute.
   */
  const client::JsonCppArray<Quota > get_quotas() const;

  /**
   * Gets a reference to a mutable value of the '<code>quotas</code>' property.
   *
   * [Output Only] Quotas assigned to this project.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<Quota > mutable_quotas();

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
   * [Output Only] Server-defined URL for the resource.
   *
   * @param[in] value The new value.
   */
  void set_self_link(const StringPiece& value) {
    *MutableStorage("selfLink") = value.data();
  }

  /**
   * Determine if the '<code>usageExportLocation</code>' attribute was set.
   *
   * @return true if the '<code>usageExportLocation</code>' attribute was set.
   */
  bool has_usage_export_location() const {
    return Storage().isMember("usageExportLocation");
  }

  /**
   * Clears the '<code>usageExportLocation</code>' attribute.
   */
  void clear_usage_export_location() {
    MutableStorage()->removeMember("usageExportLocation");
  }


  /**
   * Get a reference to the value of the '<code>usageExportLocation</code>'
   * attribute.
   */
  const UsageExportLocation get_usage_export_location() const;

  /**
   * Gets a reference to a mutable value of the
   * '<code>usageExportLocation</code>' property.
   *
   * The naming prefix for daily usage reports and the Google Cloud Storage
   * bucket where they are stored.
   *
   * @return The result can be modified to change the attribute value.
   */
  UsageExportLocation mutable_usageExportLocation();

 private:
  void operator=(const Project&);
};  // Project
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_PROJECT_H_
