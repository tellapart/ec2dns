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
#ifndef  GOOGLE_COMPUTE_API_DISK_H_
#define  GOOGLE_COMPUTE_API_DISK_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/compute_api/customer_encryption_key.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_compute_api {
using namespace googleapis;

/**
 * A Disk resource.
 *
 * @ingroup DataObject
 */
class Disk : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Disk* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Disk(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Disk(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Disk();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_compute_api::Disk</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_compute_api::Disk");
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
   * [Output Only] Creation timestamp in RFC3339 text format.
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
   * Determine if the '<code>diskEncryptionKey</code>' attribute was set.
   *
   * @return true if the '<code>diskEncryptionKey</code>' attribute was set.
   */
  bool has_disk_encryption_key() const {
    return Storage().isMember("diskEncryptionKey");
  }

  /**
   * Clears the '<code>diskEncryptionKey</code>' attribute.
   */
  void clear_disk_encryption_key() {
    MutableStorage()->removeMember("diskEncryptionKey");
  }


  /**
   * Get a reference to the value of the '<code>diskEncryptionKey</code>'
   * attribute.
   */
  const CustomerEncryptionKey get_disk_encryption_key() const;

  /**
   * Gets a reference to a mutable value of the '<code>diskEncryptionKey</code>'
   * property.
   *
   * Encrypts the disk using a customer-supplied encryption key.
   *
   * After you encrypt a disk with a customer-supplied key, you must provide the
   * same key if you use the disk later (e.g. to create a disk snapshot or an
   * image, or to attach the disk to a virtual machine).
   *
   * Customer-supplied encryption keys do not protect access to metadata of the
   * disk.
   *
   * If you do not provide an encryption key when creating the disk, then the
   * disk will be encrypted using an automatically generated key and you do not
   * need to provide a key to use the disk later.
   *
   * @return The result can be modified to change the attribute value.
   */
  CustomerEncryptionKey mutable_diskEncryptionKey();

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
   * [Output Only] Type of the resource. Always compute#disk for disks.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>lastAttachTimestamp</code>' attribute was set.
   *
   * @return true if the '<code>lastAttachTimestamp</code>' attribute was set.
   */
  bool has_last_attach_timestamp() const {
    return Storage().isMember("lastAttachTimestamp");
  }

  /**
   * Clears the '<code>lastAttachTimestamp</code>' attribute.
   */
  void clear_last_attach_timestamp() {
    MutableStorage()->removeMember("lastAttachTimestamp");
  }


  /**
   * Get the value of the '<code>lastAttachTimestamp</code>' attribute.
   */
  const StringPiece get_last_attach_timestamp() const {
    const Json::Value& v = Storage("lastAttachTimestamp");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>lastAttachTimestamp</code>' attribute.
   *
   * [Output Only] Last attach timestamp in RFC3339 text format.
   *
   * @param[in] value The new value.
   */
  void set_last_attach_timestamp(const StringPiece& value) {
    *MutableStorage("lastAttachTimestamp") = value.data();
  }

  /**
   * Determine if the '<code>lastDetachTimestamp</code>' attribute was set.
   *
   * @return true if the '<code>lastDetachTimestamp</code>' attribute was set.
   */
  bool has_last_detach_timestamp() const {
    return Storage().isMember("lastDetachTimestamp");
  }

  /**
   * Clears the '<code>lastDetachTimestamp</code>' attribute.
   */
  void clear_last_detach_timestamp() {
    MutableStorage()->removeMember("lastDetachTimestamp");
  }


  /**
   * Get the value of the '<code>lastDetachTimestamp</code>' attribute.
   */
  const StringPiece get_last_detach_timestamp() const {
    const Json::Value& v = Storage("lastDetachTimestamp");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>lastDetachTimestamp</code>' attribute.
   *
   * [Output Only] Last detach timestamp in RFC3339 text format.
   *
   * @param[in] value The new value.
   */
  void set_last_detach_timestamp(const StringPiece& value) {
    *MutableStorage("lastDetachTimestamp") = value.data();
  }

  /**
   * Determine if the '<code>licenses</code>' attribute was set.
   *
   * @return true if the '<code>licenses</code>' attribute was set.
   */
  bool has_licenses() const {
    return Storage().isMember("licenses");
  }

  /**
   * Clears the '<code>licenses</code>' attribute.
   */
  void clear_licenses() {
    MutableStorage()->removeMember("licenses");
  }


  /**
   * Get a reference to the value of the '<code>licenses</code>' attribute.
   */
  const client::JsonCppArray<string > get_licenses() const {
     const Json::Value& storage = Storage("licenses");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>licenses</code>'
   * property.
   *
   * Any applicable publicly visible licenses.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_licenses() {
    Json::Value* storage = MutableStorage("licenses");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
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
   * Determine if the '<code>options</code>' attribute was set.
   *
   * @return true if the '<code>options</code>' attribute was set.
   */
  bool has_options() const {
    return Storage().isMember("options");
  }

  /**
   * Clears the '<code>options</code>' attribute.
   */
  void clear_options() {
    MutableStorage()->removeMember("options");
  }


  /**
   * Get the value of the '<code>options</code>' attribute.
   */
  const StringPiece get_options() const {
    const Json::Value& v = Storage("options");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>options</code>' attribute.
   *
   * Internal use only.
   *
   * @param[in] value The new value.
   */
  void set_options(const StringPiece& value) {
    *MutableStorage("options") = value.data();
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
   * [Output Only] Server-defined fully-qualified URL for this resource.
   *
   * @param[in] value The new value.
   */
  void set_self_link(const StringPiece& value) {
    *MutableStorage("selfLink") = value.data();
  }

  /**
   * Determine if the '<code>sizeGb</code>' attribute was set.
   *
   * @return true if the '<code>sizeGb</code>' attribute was set.
   */
  bool has_size_gb() const {
    return Storage().isMember("sizeGb");
  }

  /**
   * Clears the '<code>sizeGb</code>' attribute.
   */
  void clear_size_gb() {
    MutableStorage()->removeMember("sizeGb");
  }


  /**
   * Get the value of the '<code>sizeGb</code>' attribute.
   */
  int64 get_size_gb() const {
    const Json::Value& storage = Storage("sizeGb");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>sizeGb</code>' attribute.
   *
   * Size of the persistent disk, specified in GB. You can specify this field
   * when creating a persistent disk using the sourceImage or sourceSnapshot
   * parameter, or specify it alone to create an empty persistent disk.
   *
   * If you specify this field along with sourceImage or sourceSnapshot, the
   * value of sizeGb must not be less than the size of the sourceImage or the
   * size of the snapshot.
   *
   * @param[in] value The new value.
   */
  void set_size_gb(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("sizeGb"));
  }

  /**
   * Determine if the '<code>sourceImage</code>' attribute was set.
   *
   * @return true if the '<code>sourceImage</code>' attribute was set.
   */
  bool has_source_image() const {
    return Storage().isMember("sourceImage");
  }

  /**
   * Clears the '<code>sourceImage</code>' attribute.
   */
  void clear_source_image() {
    MutableStorage()->removeMember("sourceImage");
  }


  /**
   * Get the value of the '<code>sourceImage</code>' attribute.
   */
  const StringPiece get_source_image() const {
    const Json::Value& v = Storage("sourceImage");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>sourceImage</code>' attribute.
   *
   * <dl>
   * <dt>family/debian
   * <dd>8 to use the latest Debian 8 image:.
   * <dt>projects/debian-cloud/global/images/family/debian
   * <dd>8.
   * </dl>
   *
   *
   * projects/debian-cloud/global/images/debian-8-jessie-vYYYYMMDD
   *
   * To create a disk with a private image that you created, specify the image
   * name in the following format:
   *
   * global/images/my-private-image
   *
   *
   * You can also specify a private image by its image family, which returns the
   * latest version of the image in that family. Replace the image name with
   * family/family-name:
   *
   * global/images/family/my-private-family.
   *
   * @param[in] value The new value.
   */
  void set_source_image(const StringPiece& value) {
    *MutableStorage("sourceImage") = value.data();
  }

  /**
   * Determine if the '<code>sourceImageEncryptionKey</code>' attribute was set.
   *
   * @return true if the '<code>sourceImageEncryptionKey</code>' attribute was
   * set.
   */
  bool has_source_image_encryption_key() const {
    return Storage().isMember("sourceImageEncryptionKey");
  }

  /**
   * Clears the '<code>sourceImageEncryptionKey</code>' attribute.
   */
  void clear_source_image_encryption_key() {
    MutableStorage()->removeMember("sourceImageEncryptionKey");
  }


  /**
   * Get a reference to the value of the '<code>sourceImageEncryptionKey</code>'
   * attribute.
   */
  const CustomerEncryptionKey get_source_image_encryption_key() const;

  /**
   * Gets a reference to a mutable value of the
   * '<code>sourceImageEncryptionKey</code>' property.
   *
   * The customer-supplied encryption key of the source image. Required if the
   * source image is protected by a customer-supplied encryption key.
   *
   * @return The result can be modified to change the attribute value.
   */
  CustomerEncryptionKey mutable_sourceImageEncryptionKey();

  /**
   * Determine if the '<code>sourceImageId</code>' attribute was set.
   *
   * @return true if the '<code>sourceImageId</code>' attribute was set.
   */
  bool has_source_image_id() const {
    return Storage().isMember("sourceImageId");
  }

  /**
   * Clears the '<code>sourceImageId</code>' attribute.
   */
  void clear_source_image_id() {
    MutableStorage()->removeMember("sourceImageId");
  }


  /**
   * Get the value of the '<code>sourceImageId</code>' attribute.
   */
  const StringPiece get_source_image_id() const {
    const Json::Value& v = Storage("sourceImageId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>sourceImageId</code>' attribute.
   *
   * [Output Only] The ID value of the image used to create this disk. This
   * value identifies the exact image that was used to create this persistent
   * disk. For example, if you created the persistent disk from an image that
   * was later deleted and recreated under the same name, the source image ID
   * would identify the exact version of the image that was used.
   *
   * @param[in] value The new value.
   */
  void set_source_image_id(const StringPiece& value) {
    *MutableStorage("sourceImageId") = value.data();
  }

  /**
   * Determine if the '<code>sourceSnapshot</code>' attribute was set.
   *
   * @return true if the '<code>sourceSnapshot</code>' attribute was set.
   */
  bool has_source_snapshot() const {
    return Storage().isMember("sourceSnapshot");
  }

  /**
   * Clears the '<code>sourceSnapshot</code>' attribute.
   */
  void clear_source_snapshot() {
    MutableStorage()->removeMember("sourceSnapshot");
  }


  /**
   * Get the value of the '<code>sourceSnapshot</code>' attribute.
   */
  const StringPiece get_source_snapshot() const {
    const Json::Value& v = Storage("sourceSnapshot");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>sourceSnapshot</code>' attribute.
   *
   * The source snapshot used to create this disk. You can provide this as a
   * partial or full URL to the resource. For example, the following are valid
   * values:
   * - https://www.googleapis.com/compute/v1/projects/project/global/snapshots/s
   * napshot
   * - projects/project/global/snapshots/snapshot
   * - global/snapshots/snapshot.
   *
   * @param[in] value The new value.
   */
  void set_source_snapshot(const StringPiece& value) {
    *MutableStorage("sourceSnapshot") = value.data();
  }

  /**
   * Determine if the '<code>sourceSnapshotEncryptionKey</code>' attribute was
   * set.
   *
   * @return true if the '<code>sourceSnapshotEncryptionKey</code>' attribute
   * was set.
   */
  bool has_source_snapshot_encryption_key() const {
    return Storage().isMember("sourceSnapshotEncryptionKey");
  }

  /**
   * Clears the '<code>sourceSnapshotEncryptionKey</code>' attribute.
   */
  void clear_source_snapshot_encryption_key() {
    MutableStorage()->removeMember("sourceSnapshotEncryptionKey");
  }


  /**
   * Get a reference to the value of the
   * '<code>sourceSnapshotEncryptionKey</code>' attribute.
   */
  const CustomerEncryptionKey get_source_snapshot_encryption_key() const;

  /**
   * Gets a reference to a mutable value of the
   * '<code>sourceSnapshotEncryptionKey</code>' property.
   *
   * The customer-supplied encryption key of the source snapshot. Required if
   * the source snapshot is protected by a customer-supplied encryption key.
   *
   * @return The result can be modified to change the attribute value.
   */
  CustomerEncryptionKey mutable_sourceSnapshotEncryptionKey();

  /**
   * Determine if the '<code>sourceSnapshotId</code>' attribute was set.
   *
   * @return true if the '<code>sourceSnapshotId</code>' attribute was set.
   */
  bool has_source_snapshot_id() const {
    return Storage().isMember("sourceSnapshotId");
  }

  /**
   * Clears the '<code>sourceSnapshotId</code>' attribute.
   */
  void clear_source_snapshot_id() {
    MutableStorage()->removeMember("sourceSnapshotId");
  }


  /**
   * Get the value of the '<code>sourceSnapshotId</code>' attribute.
   */
  const StringPiece get_source_snapshot_id() const {
    const Json::Value& v = Storage("sourceSnapshotId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>sourceSnapshotId</code>' attribute.
   *
   * [Output Only] The unique ID of the snapshot used to create this disk. This
   * value identifies the exact snapshot that was used to create this persistent
   * disk. For example, if you created the persistent disk from a snapshot that
   * was later deleted and recreated under the same name, the source snapshot ID
   * would identify the exact version of the snapshot that was used.
   *
   * @param[in] value The new value.
   */
  void set_source_snapshot_id(const StringPiece& value) {
    *MutableStorage("sourceSnapshotId") = value.data();
  }

  /**
   * Determine if the '<code>status</code>' attribute was set.
   *
   * @return true if the '<code>status</code>' attribute was set.
   */
  bool has_status() const {
    return Storage().isMember("status");
  }

  /**
   * Clears the '<code>status</code>' attribute.
   */
  void clear_status() {
    MutableStorage()->removeMember("status");
  }


  /**
   * Get the value of the '<code>status</code>' attribute.
   */
  const StringPiece get_status() const {
    const Json::Value& v = Storage("status");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>status</code>' attribute.
   *
   * [Output Only] The status of disk creation.
   *
   * @param[in] value The new value.
   */
  void set_status(const StringPiece& value) {
    *MutableStorage("status") = value.data();
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
   * URL of the disk type resource describing which disk type to use to create
   * the disk. Provide this when creating the disk.
   *
   * @param[in] value The new value.
   */
  void set_type(const StringPiece& value) {
    *MutableStorage("type") = value.data();
  }

  /**
   * Determine if the '<code>users</code>' attribute was set.
   *
   * @return true if the '<code>users</code>' attribute was set.
   */
  bool has_users() const {
    return Storage().isMember("users");
  }

  /**
   * Clears the '<code>users</code>' attribute.
   */
  void clear_users() {
    MutableStorage()->removeMember("users");
  }


  /**
   * Get a reference to the value of the '<code>users</code>' attribute.
   */
  const client::JsonCppArray<string > get_users() const {
     const Json::Value& storage = Storage("users");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>users</code>' property.
   *
   * [Output Only] Links to the users of the disk (attached instances) in form:
   * project/zones/zone/instances/instance.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_users() {
    Json::Value* storage = MutableStorage("users");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Determine if the '<code>zone</code>' attribute was set.
   *
   * @return true if the '<code>zone</code>' attribute was set.
   */
  bool has_zone() const {
    return Storage().isMember("zone");
  }

  /**
   * Clears the '<code>zone</code>' attribute.
   */
  void clear_zone() {
    MutableStorage()->removeMember("zone");
  }


  /**
   * Get the value of the '<code>zone</code>' attribute.
   */
  const StringPiece get_zone() const {
    const Json::Value& v = Storage("zone");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>zone</code>' attribute.
   *
   * [Output Only] URL of the zone where the disk resides.
   *
   * @param[in] value The new value.
   */
  void set_zone(const StringPiece& value) {
    *MutableStorage("zone") = value.data();
  }

 private:
  void operator=(const Disk&);
};  // Disk
}  // namespace google_compute_api
#endif  // GOOGLE_COMPUTE_API_DISK_H_
