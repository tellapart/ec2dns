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
#ifndef  GOOGLE_COMPUTE_API_TARGET_SSL_PROXIES_SET_PROXY_HEADER_REQUEST_H_
#define  GOOGLE_COMPUTE_API_TARGET_SSL_PROXIES_SET_PROXY_HEADER_REQUEST_H_

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
class TargetSslProxiesSetProxyHeaderRequest : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static TargetSslProxiesSetProxyHeaderRequest* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit TargetSslProxiesSetProxyHeaderRequest(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit TargetSslProxiesSetProxyHeaderRequest(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~TargetSslProxiesSetProxyHeaderRequest();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return
   * <code>google_compute_api::TargetSslProxiesSetProxyHeaderRequest</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::TargetSslProxiesSetProxyHeaderRequest");
  }

  /**
   * Determine if the '<code>proxyHeader</code>' attribute was set.
   *
   * @return true if the '<code>proxyHeader</code>' attribute was set.
   */
  bool has_proxy_header() const {
    return Storage().isMember("proxyHeader");
  }

  /**
   * Clears the '<code>proxyHeader</code>' attribute.
   */
  void clear_proxy_header() {
    MutableStorage()->removeMember("proxyHeader");
  }


  /**
   * Get the value of the '<code>proxyHeader</code>' attribute.
   */
  const StringPiece get_proxy_header() const {
    const Json::Value& v = Storage("proxyHeader");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>proxyHeader</code>' attribute.
   *
   * The new type of proxy header to append before sending data to the backend.
   * NONE or PROXY_V1 are allowed.
   *
   * @param[in] value The new value.
   */
  void set_proxy_header(const StringPiece& value) {
    *MutableStorage("proxyHeader") = value.data();
  }

 private:
  void operator=(const TargetSslProxiesSetProxyHeaderRequest&);
};  // TargetSslProxiesSetProxyHeaderRequest
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_TARGET_SSL_PROXIES_SET_PROXY_HEADER_REQUEST_H_
