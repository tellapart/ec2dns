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
#ifndef  GOOGLE_COMPUTE_API_HEALTH_CHECK_H_
#define  GOOGLE_COMPUTE_API_HEALTH_CHECK_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/compute_api/httph_ealth_check.h"
#include "google/compute_api/httpsh_ealth_check.h"
#include "google/compute_api/sslh_ealth_check.h"
#include "google/compute_api/tcph_ealth_check.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_compute_api {
using namespace googleapis;

/**
 * An HealthCheck resource. This resource defines a template for how individual
 * virtual machines should be checked for health, via one of the supported
 * protocols.
 *
 * @ingroup DataObject
 */
class HealthCheck : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static HealthCheck* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit HealthCheck(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit HealthCheck(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~HealthCheck();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::HealthCheck</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::HealthCheck");
  }

  /**
   * Determine if the '<code>checkIntervalSec</code>' attribute was set.
   *
   * @return true if the '<code>checkIntervalSec</code>' attribute was set.
   */
  bool has_check_interval_sec() const {
    return Storage().isMember("checkIntervalSec");
  }

  /**
   * Clears the '<code>checkIntervalSec</code>' attribute.
   */
  void clear_check_interval_sec() {
    MutableStorage()->removeMember("checkIntervalSec");
  }


  /**
   * Get the value of the '<code>checkIntervalSec</code>' attribute.
   */
  int32 get_check_interval_sec() const {
    const Json::Value& storage = Storage("checkIntervalSec");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>checkIntervalSec</code>' attribute.
   *
   * How often (in seconds) to send a health check. The default value is 5
   * seconds.
   *
   * @param[in] value The new value.
   */
  void set_check_interval_sec(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("checkIntervalSec"));
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
   * [Output Only] Creation timestamp in 3339 text format.
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
   * Determine if the '<code>healthyThreshold</code>' attribute was set.
   *
   * @return true if the '<code>healthyThreshold</code>' attribute was set.
   */
  bool has_healthy_threshold() const {
    return Storage().isMember("healthyThreshold");
  }

  /**
   * Clears the '<code>healthyThreshold</code>' attribute.
   */
  void clear_healthy_threshold() {
    MutableStorage()->removeMember("healthyThreshold");
  }


  /**
   * Get the value of the '<code>healthyThreshold</code>' attribute.
   */
  int32 get_healthy_threshold() const {
    const Json::Value& storage = Storage("healthyThreshold");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>healthyThreshold</code>' attribute.
   *
   * A so-far unhealthy instance will be marked healthy after this many
   * consecutive successes. The default value is 2.
   *
   * @param[in] value The new value.
   */
  void set_healthy_threshold(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("healthyThreshold"));
  }

  /**
   * Determine if the '<code>httpHealthCheck</code>' attribute was set.
   *
   * @return true if the '<code>httpHealthCheck</code>' attribute was set.
   */
  bool has_http_health_check() const {
    return Storage().isMember("httpHealthCheck");
  }

  /**
   * Clears the '<code>httpHealthCheck</code>' attribute.
   */
  void clear_http_health_check() {
    MutableStorage()->removeMember("httpHealthCheck");
  }


  /**
   * Get a reference to the value of the '<code>httpHealthCheck</code>'
   * attribute.
   */
  const HTTPHealthCheck get_http_health_check() const;

  /**
   * Gets a reference to a mutable value of the '<code>httpHealthCheck</code>'
   * property.
   * @return The result can be modified to change the attribute value.
   */
  HTTPHealthCheck mutable_httpHealthCheck();

  /**
   * Determine if the '<code>httpsHealthCheck</code>' attribute was set.
   *
   * @return true if the '<code>httpsHealthCheck</code>' attribute was set.
   */
  bool has_https_health_check() const {
    return Storage().isMember("httpsHealthCheck");
  }

  /**
   * Clears the '<code>httpsHealthCheck</code>' attribute.
   */
  void clear_https_health_check() {
    MutableStorage()->removeMember("httpsHealthCheck");
  }


  /**
   * Get a reference to the value of the '<code>httpsHealthCheck</code>'
   * attribute.
   */
  const HTTPSHealthCheck get_https_health_check() const;

  /**
   * Gets a reference to a mutable value of the '<code>httpsHealthCheck</code>'
   * property.
   * @return The result can be modified to change the attribute value.
   */
  HTTPSHealthCheck mutable_httpsHealthCheck();

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
   * Type of the resource.
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
   * Determine if the '<code>sslHealthCheck</code>' attribute was set.
   *
   * @return true if the '<code>sslHealthCheck</code>' attribute was set.
   */
  bool has_ssl_health_check() const {
    return Storage().isMember("sslHealthCheck");
  }

  /**
   * Clears the '<code>sslHealthCheck</code>' attribute.
   */
  void clear_ssl_health_check() {
    MutableStorage()->removeMember("sslHealthCheck");
  }


  /**
   * Get a reference to the value of the '<code>sslHealthCheck</code>'
   * attribute.
   */
  const SSLHealthCheck get_ssl_health_check() const;

  /**
   * Gets a reference to a mutable value of the '<code>sslHealthCheck</code>'
   * property.
   * @return The result can be modified to change the attribute value.
   */
  SSLHealthCheck mutable_sslHealthCheck();

  /**
   * Determine if the '<code>tcpHealthCheck</code>' attribute was set.
   *
   * @return true if the '<code>tcpHealthCheck</code>' attribute was set.
   */
  bool has_tcp_health_check() const {
    return Storage().isMember("tcpHealthCheck");
  }

  /**
   * Clears the '<code>tcpHealthCheck</code>' attribute.
   */
  void clear_tcp_health_check() {
    MutableStorage()->removeMember("tcpHealthCheck");
  }


  /**
   * Get a reference to the value of the '<code>tcpHealthCheck</code>'
   * attribute.
   */
  const TCPHealthCheck get_tcp_health_check() const;

  /**
   * Gets a reference to a mutable value of the '<code>tcpHealthCheck</code>'
   * property.
   * @return The result can be modified to change the attribute value.
   */
  TCPHealthCheck mutable_tcpHealthCheck();

  /**
   * Determine if the '<code>timeoutSec</code>' attribute was set.
   *
   * @return true if the '<code>timeoutSec</code>' attribute was set.
   */
  bool has_timeout_sec() const {
    return Storage().isMember("timeoutSec");
  }

  /**
   * Clears the '<code>timeoutSec</code>' attribute.
   */
  void clear_timeout_sec() {
    MutableStorage()->removeMember("timeoutSec");
  }


  /**
   * Get the value of the '<code>timeoutSec</code>' attribute.
   */
  int32 get_timeout_sec() const {
    const Json::Value& storage = Storage("timeoutSec");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>timeoutSec</code>' attribute.
   *
   * How long (in seconds) to wait before claiming failure. The default value is
   * 5 seconds. It is invalid for timeoutSec to have greater value than
   * checkIntervalSec.
   *
   * @param[in] value The new value.
   */
  void set_timeout_sec(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("timeoutSec"));
  }

  /**
   * Determine if the '<code>type</code>' attribute was set.
   *
   * @return true if the '<code>type</code>' attribute was set.
   */
  bool has_type() const {
    return Storage().isMember("type");
  }

  /**
   * Clears the '<code>type</code>' attribute.
   */
  void clear_type() {
    MutableStorage()->removeMember("type");
  }


  /**
   * Get the value of the '<code>type</code>' attribute.
   */
  const StringPiece get_type() const {
    const Json::Value& v = Storage("type");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>type</code>' attribute.
   *
   * Specifies the type of the healthCheck, either TCP, SSL, HTTP or HTTPS. If
   * not specified, the default is TCP. Exactly one of the protocol-specific
   * health check field must be specified, which must match type field.
   *
   * @param[in] value The new value.
   */
  void set_type(const StringPiece& value) {
    *MutableStorage("type") = value.data();
  }

  /**
   * Determine if the '<code>unhealthyThreshold</code>' attribute was set.
   *
   * @return true if the '<code>unhealthyThreshold</code>' attribute was set.
   */
  bool has_unhealthy_threshold() const {
    return Storage().isMember("unhealthyThreshold");
  }

  /**
   * Clears the '<code>unhealthyThreshold</code>' attribute.
   */
  void clear_unhealthy_threshold() {
    MutableStorage()->removeMember("unhealthyThreshold");
  }


  /**
   * Get the value of the '<code>unhealthyThreshold</code>' attribute.
   */
  int32 get_unhealthy_threshold() const {
    const Json::Value& storage = Storage("unhealthyThreshold");
    return client::JsonValueToCppValueHelper<int32 >(storage);
  }

  /**
   * Change the '<code>unhealthyThreshold</code>' attribute.
   *
   * A so-far healthy instance will be marked unhealthy after this many
   * consecutive failures. The default value is 2.
   *
   * @param[in] value The new value.
   */
  void set_unhealthy_threshold(int32 value) {
    client::SetJsonValueFromCppValueHelper<int32 >(
      value, MutableStorage("unhealthyThreshold"));
  }

 private:
  void operator=(const HealthCheck&);
};  // HealthCheck
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_HEALTH_CHECK_H_
