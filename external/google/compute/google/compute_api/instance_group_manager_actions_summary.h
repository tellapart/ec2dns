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
#ifndef  GOOGLE_COMPUTE_API_INSTANCE_GROUP_MANAGER_ACTIONS_SUMMARY_H_
#define  GOOGLE_COMPUTE_API_INSTANCE_GROUP_MANAGER_ACTIONS_SUMMARY_H_

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
 * No description provided.
 *
 * @ingroup DataObject
 */
class InstanceGroupManagerActionsSummary : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static InstanceGroupManagerActionsSummary* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit InstanceGroupManagerActionsSummary(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit InstanceGroupManagerActionsSummary(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~InstanceGroupManagerActionsSummary();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::InstanceGroupManagerActionsSummary</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::InstanceGroupManagerActionsSummary");
  }

  /**
   * Determine if the '<code>abandoning</code>' attribute was set.
   *
   * @return true if the '<code>abandoning</code>' attribute was set.
   */
  bool has_abandoning() const {
    return Storage().isMember("abandoning");
  }

  /**
   * Clears the '<code>abandoning</code>' attribute.
   */
  void clear_abandoning() {
    MutableStorage()->removeMember("abandoning");
  }


  /**
   * Get the value of the '<code>abandoning</code>' attribute.
   */
  int32 get_abandoning() const {
    const Json::Value& storage = Storage("abandoning");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>abandoning</code>' attribute.
   *
   * [Output Only] The total number of instances in the managed instance group
   * that are scheduled to be abandoned. Abandoning an instance removes it from
   * the managed instance group without deleting it.
   *
   * @param[in] value The new value.
   */
  void set_abandoning(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("abandoning"));
  }

  /**
   * Determine if the '<code>creating</code>' attribute was set.
   *
   * @return true if the '<code>creating</code>' attribute was set.
   */
  bool has_creating() const {
    return Storage().isMember("creating");
  }

  /**
   * Clears the '<code>creating</code>' attribute.
   */
  void clear_creating() {
    MutableStorage()->removeMember("creating");
  }


  /**
   * Get the value of the '<code>creating</code>' attribute.
   */
  int32 get_creating() const {
    const Json::Value& storage = Storage("creating");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>creating</code>' attribute.
   *
   * [Output Only] The number of instances in the managed instance group that
   * are scheduled to be created or are currently being created. If the group
   * fails to create any of these instances, it tries again until it creates the
   * instance successfully.
   *
   * If you have disabled creation retries, this field will not be populated;
   * instead, the creatingWithoutRetries field will be populated.
   *
   * @param[in] value The new value.
   */
  void set_creating(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("creating"));
  }

  /**
   * Determine if the '<code>creatingWithoutRetries</code>' attribute was set.
   *
   * @return true if the '<code>creatingWithoutRetries</code>' attribute was
   * set.
   */
  bool has_creating_without_retries() const {
    return Storage().isMember("creatingWithoutRetries");
  }

  /**
   * Clears the '<code>creatingWithoutRetries</code>' attribute.
   */
  void clear_creating_without_retries() {
    MutableStorage()->removeMember("creatingWithoutRetries");
  }


  /**
   * Get the value of the '<code>creatingWithoutRetries</code>' attribute.
   */
  int32 get_creating_without_retries() const {
    const Json::Value& storage = Storage("creatingWithoutRetries");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>creatingWithoutRetries</code>' attribute.
   *
   * [Output Only] The number of instances that the managed instance group will
   * attempt to create. The group attempts to create each instance only once. If
   * the group fails to create any of these instances, it decreases the group's
   * targetSize value accordingly.
   *
   * @param[in] value The new value.
   */
  void set_creating_without_retries(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("creatingWithoutRetries"));
  }

  /**
   * Determine if the '<code>deleting</code>' attribute was set.
   *
   * @return true if the '<code>deleting</code>' attribute was set.
   */
  bool has_deleting() const {
    return Storage().isMember("deleting");
  }

  /**
   * Clears the '<code>deleting</code>' attribute.
   */
  void clear_deleting() {
    MutableStorage()->removeMember("deleting");
  }


  /**
   * Get the value of the '<code>deleting</code>' attribute.
   */
  int32 get_deleting() const {
    const Json::Value& storage = Storage("deleting");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>deleting</code>' attribute.
   *
   * [Output Only] The number of instances in the managed instance group that
   * are scheduled to be deleted or are currently being deleted.
   *
   * @param[in] value The new value.
   */
  void set_deleting(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("deleting"));
  }

  /**
   * Determine if the '<code>none</code>' attribute was set.
   *
   * @return true if the '<code>none</code>' attribute was set.
   */
  bool has_none() const {
    return Storage().isMember("none");
  }

  /**
   * Clears the '<code>none</code>' attribute.
   */
  void clear_none() {
    MutableStorage()->removeMember("none");
  }


  /**
   * Get the value of the '<code>none</code>' attribute.
   */
  int32 get_none() const {
    const Json::Value& storage = Storage("none");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>none</code>' attribute.
   *
   * [Output Only] The number of instances in the managed instance group that
   * are running and have no scheduled actions.
   *
   * @param[in] value The new value.
   */
  void set_none(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("none"));
  }

  /**
   * Determine if the '<code>recreating</code>' attribute was set.
   *
   * @return true if the '<code>recreating</code>' attribute was set.
   */
  bool has_recreating() const {
    return Storage().isMember("recreating");
  }

  /**
   * Clears the '<code>recreating</code>' attribute.
   */
  void clear_recreating() {
    MutableStorage()->removeMember("recreating");
  }


  /**
   * Get the value of the '<code>recreating</code>' attribute.
   */
  int32 get_recreating() const {
    const Json::Value& storage = Storage("recreating");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>recreating</code>' attribute.
   *
   * [Output Only] The number of instances in the managed instance group that
   * are scheduled to be recreated or are currently being being recreated.
   * Recreating an instance deletes the existing root persistent disk and
   * creates a new disk from the image that is defined in the instance template.
   *
   * @param[in] value The new value.
   */
  void set_recreating(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("recreating"));
  }

  /**
   * Determine if the '<code>refreshing</code>' attribute was set.
   *
   * @return true if the '<code>refreshing</code>' attribute was set.
   */
  bool has_refreshing() const {
    return Storage().isMember("refreshing");
  }

  /**
   * Clears the '<code>refreshing</code>' attribute.
   */
  void clear_refreshing() {
    MutableStorage()->removeMember("refreshing");
  }


  /**
   * Get the value of the '<code>refreshing</code>' attribute.
   */
  int32 get_refreshing() const {
    const Json::Value& storage = Storage("refreshing");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>refreshing</code>' attribute.
   *
   * [Output Only] The number of instances in the managed instance group that
   * are being reconfigured with properties that do not require a restart or a
   * recreate action. For example, setting or removing target pools for the
   * instance.
   *
   * @param[in] value The new value.
   */
  void set_refreshing(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("refreshing"));
  }

  /**
   * Determine if the '<code>restarting</code>' attribute was set.
   *
   * @return true if the '<code>restarting</code>' attribute was set.
   */
  bool has_restarting() const {
    return Storage().isMember("restarting");
  }

  /**
   * Clears the '<code>restarting</code>' attribute.
   */
  void clear_restarting() {
    MutableStorage()->removeMember("restarting");
  }


  /**
   * Get the value of the '<code>restarting</code>' attribute.
   */
  int32 get_restarting() const {
    const Json::Value& storage = Storage("restarting");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>restarting</code>' attribute.
   *
   * [Output Only] The number of instances in the managed instance group that
   * are scheduled to be restarted or are currently being restarted.
   *
   * @param[in] value The new value.
   */
  void set_restarting(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("restarting"));
  }

 private:
  void operator=(const InstanceGroupManagerActionsSummary&);
};  // InstanceGroupManagerActionsSummary
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_INSTANCE_GROUP_MANAGER_ACTIONS_SUMMARY_H_
