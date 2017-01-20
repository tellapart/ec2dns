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
// Description:
//   Creates and runs virtual machines on Google Cloud Platform.
// Classes:
//   TargetHttpsProxy
// Documentation:
//   https://developers.google.com/compute/docs/reference/latest/

#include "google/compute_api/target_https_proxy.h"
#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_compute_api {
using namespace googleapis;


// Object factory method (static).
TargetHttpsProxy* TargetHttpsProxy::New() {
  return new client::JsonCppCapsule<TargetHttpsProxy>;
}

// Standard immutable constructor.
TargetHttpsProxy::TargetHttpsProxy(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
TargetHttpsProxy::TargetHttpsProxy(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
TargetHttpsProxy::~TargetHttpsProxy() {
}
}  // namespace google_compute_api