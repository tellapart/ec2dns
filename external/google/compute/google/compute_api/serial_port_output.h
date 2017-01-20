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
#ifndef  GOOGLE_COMPUTE_API_SERIAL_PORT_OUTPUT_H_
#define  GOOGLE_COMPUTE_API_SERIAL_PORT_OUTPUT_H_

#include <string>
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
 * An instance's serial console output.
 *
 * @ingroup DataObject
 */
class SerialPortOutput : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static SerialPortOutput* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit SerialPortOutput(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit SerialPortOutput(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~SerialPortOutput();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::SerialPortOutput</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::SerialPortOutput");
  }

  /**
   * Determine if the '<code>contents</code>' attribute was set.
   *
   * @return true if the '<code>contents</code>' attribute was set.
   */
  bool has_contents() const {
    return Storage().isMember("contents");
  }

  /**
   * Clears the '<code>contents</code>' attribute.
   */
  void clear_contents() {
    MutableStorage()->removeMember("contents");
  }


  /**
   * Get the value of the '<code>contents</code>' attribute.
   */
  const StringPiece get_contents() const {
    const Json::Value& v = Storage("contents");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>contents</code>' attribute.
   *
   * [Output Only] The contents of the console output.
   *
   * @param[in] value The new value.
   */
  void set_contents(const StringPiece& value) {
    *MutableStorage("contents") = value.data();
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
   * [Output Only] Type of the resource. Always compute#serialPortOutput for
   * serial port output.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>next</code>' attribute was set.
   *
   * @return true if the '<code>next</code>' attribute was set.
   */
  bool has_next() const {
    return Storage().isMember("next");
  }

  /**
   * Clears the '<code>next</code>' attribute.
   */
  void clear_next() {
    MutableStorage()->removeMember("next");
  }


  /**
   * Get the value of the '<code>next</code>' attribute.
   */
  int64 get_next() const {
    const Json::Value& storage = Storage("next");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>next</code>' attribute.
   *
   * [Output Only] The position of the next byte of content from the serial
   * console output. Use this value in the next request as the start parameter.
   *
   * @param[in] value The new value.
   */
  void set_next(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("next"));
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

  /**
   * Determine if the '<code>start</code>' attribute was set.
   *
   * @return true if the '<code>start</code>' attribute was set.
   */
  bool has_start() const {
    return Storage().isMember("start");
  }

  /**
   * Clears the '<code>start</code>' attribute.
   */
  void clear_start() {
    MutableStorage()->removeMember("start");
  }


  /**
   * Get the value of the '<code>start</code>' attribute.
   */
  int64 get_start() const {
    const Json::Value& storage = Storage("start");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>start</code>' attribute.
   *
   * [Output Only] The starting byte position of the output that was returned.
   * This should match the start parameter sent with the request. If the serial
   * console output exceeds the size of the buffer, older output will be
   * overwritten by newer content and the start values will be mismatched.
   *
   * @param[in] value The new value.
   */
  void set_start(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("start"));
  }

 private:
  void operator=(const SerialPortOutput&);
};  // SerialPortOutput
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_SERIAL_PORT_OUTPUT_H_
