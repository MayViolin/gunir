// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: column_metadata.proto

#ifndef PROTOBUF_column_5fmetadata_2eproto__INCLUDED
#define PROTOBUF_column_5fmetadata_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace gunir {
namespace io {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_column_5fmetadata_2eproto();
void protobuf_AssignDesc_column_5fmetadata_2eproto();
void protobuf_ShutdownFile_column_5fmetadata_2eproto();

class ColumnStaticInfo;
class ColumnDynamicInfo;
class ColumnMetaData;

enum ColumnType {
  TYPE_UNDEFINED = 1,
  TYPE_INT32 = 2,
  TYPE_INT64 = 3,
  TYPE_UINT32 = 4,
  TYPE_UINT64 = 5,
  TYPE_SINT32 = 6,
  TYPE_SINT64 = 7,
  TYPE_FIXED32 = 8,
  TYPE_FIXED64 = 9,
  TYPE_SFIXED32 = 10,
  TYPE_SFIXED64 = 11,
  TYPE_FLOAT = 12,
  TYPE_DOUBLE = 13,
  TYPE_BOOL = 14,
  TYPE_STRING = 15,
  TYPE_BYTES = 16
};
bool ColumnType_IsValid(int value);
const ColumnType ColumnType_MIN = TYPE_UNDEFINED;
const ColumnType ColumnType_MAX = TYPE_BYTES;
const int ColumnType_ARRAYSIZE = ColumnType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ColumnType_descriptor();
inline const ::std::string& ColumnType_Name(ColumnType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ColumnType_descriptor(), value);
}
inline bool ColumnType_Parse(
    const ::std::string& name, ColumnType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ColumnType>(
    ColumnType_descriptor(), name, value);
}
// ===================================================================

class ColumnStaticInfo : public ::google::protobuf::Message {
 public:
  ColumnStaticInfo();
  virtual ~ColumnStaticInfo();
  
  ColumnStaticInfo(const ColumnStaticInfo& from);
  
  inline ColumnStaticInfo& operator=(const ColumnStaticInfo& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ColumnStaticInfo& default_instance();
  
  void Swap(ColumnStaticInfo* other);
  
  // implements Message ----------------------------------------------
  
  ColumnStaticInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ColumnStaticInfo& from);
  void MergeFrom(const ColumnStaticInfo& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint32 column_index = 1;
  inline bool has_column_index() const;
  inline void clear_column_index();
  static const int kColumnIndexFieldNumber = 1;
  inline ::google::protobuf::uint32 column_index() const;
  inline void set_column_index(::google::protobuf::uint32 value);
  
  // required string column_name = 2;
  inline bool has_column_name() const;
  inline void clear_column_name();
  static const int kColumnNameFieldNumber = 2;
  inline const ::std::string& column_name() const;
  inline void set_column_name(const ::std::string& value);
  inline void set_column_name(const char* value);
  inline void set_column_name(const char* value, size_t size);
  inline ::std::string* mutable_column_name();
  inline ::std::string* release_column_name();
  
  // required .gunir.io.ColumnType column_type = 3;
  inline bool has_column_type() const;
  inline void clear_column_type();
  static const int kColumnTypeFieldNumber = 3;
  inline gunir::io::ColumnType column_type() const;
  inline void set_column_type(gunir::io::ColumnType value);
  
  // required uint32 max_repetition_level = 4;
  inline bool has_max_repetition_level() const;
  inline void clear_max_repetition_level();
  static const int kMaxRepetitionLevelFieldNumber = 4;
  inline ::google::protobuf::uint32 max_repetition_level() const;
  inline void set_max_repetition_level(::google::protobuf::uint32 value);
  
  // required uint32 max_definition_level = 5;
  inline bool has_max_definition_level() const;
  inline void clear_max_definition_level();
  static const int kMaxDefinitionLevelFieldNumber = 5;
  inline ::google::protobuf::uint32 max_definition_level() const;
  inline void set_max_definition_level(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:gunir.io.ColumnStaticInfo)
 private:
  inline void set_has_column_index();
  inline void clear_has_column_index();
  inline void set_has_column_name();
  inline void clear_has_column_name();
  inline void set_has_column_type();
  inline void clear_has_column_type();
  inline void set_has_max_repetition_level();
  inline void clear_has_max_repetition_level();
  inline void set_has_max_definition_level();
  inline void clear_has_max_definition_level();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* column_name_;
  ::google::protobuf::uint32 column_index_;
  int column_type_;
  ::google::protobuf::uint32 max_repetition_level_;
  ::google::protobuf::uint32 max_definition_level_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];
  
  friend void  protobuf_AddDesc_column_5fmetadata_2eproto();
  friend void protobuf_AssignDesc_column_5fmetadata_2eproto();
  friend void protobuf_ShutdownFile_column_5fmetadata_2eproto();
  
  void InitAsDefaultInstance();
  static ColumnStaticInfo* default_instance_;
};
// -------------------------------------------------------------------

class ColumnDynamicInfo : public ::google::protobuf::Message {
 public:
  ColumnDynamicInfo();
  virtual ~ColumnDynamicInfo();
  
  ColumnDynamicInfo(const ColumnDynamicInfo& from);
  
  inline ColumnDynamicInfo& operator=(const ColumnDynamicInfo& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ColumnDynamicInfo& default_instance();
  
  void Swap(ColumnDynamicInfo* other);
  
  // implements Message ----------------------------------------------
  
  ColumnDynamicInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ColumnDynamicInfo& from);
  void MergeFrom(const ColumnDynamicInfo& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required fixed64 start_position = 1;
  inline bool has_start_position() const;
  inline void clear_start_position();
  static const int kStartPositionFieldNumber = 1;
  inline ::google::protobuf::uint64 start_position() const;
  inline void set_start_position(::google::protobuf::uint64 value);
  
  // required fixed32 length = 2;
  inline bool has_length() const;
  inline void clear_length();
  static const int kLengthFieldNumber = 2;
  inline ::google::protobuf::uint32 length() const;
  inline void set_length(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:gunir.io.ColumnDynamicInfo)
 private:
  inline void set_has_start_position();
  inline void clear_has_start_position();
  inline void set_has_length();
  inline void clear_has_length();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::uint64 start_position_;
  ::google::protobuf::uint32 length_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_column_5fmetadata_2eproto();
  friend void protobuf_AssignDesc_column_5fmetadata_2eproto();
  friend void protobuf_ShutdownFile_column_5fmetadata_2eproto();
  
  void InitAsDefaultInstance();
  static ColumnDynamicInfo* default_instance_;
};
// -------------------------------------------------------------------

class ColumnMetaData : public ::google::protobuf::Message {
 public:
  ColumnMetaData();
  virtual ~ColumnMetaData();
  
  ColumnMetaData(const ColumnMetaData& from);
  
  inline ColumnMetaData& operator=(const ColumnMetaData& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ColumnMetaData& default_instance();
  
  void Swap(ColumnMetaData* other);
  
  // implements Message ----------------------------------------------
  
  ColumnMetaData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ColumnMetaData& from);
  void MergeFrom(const ColumnMetaData& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required .gunir.io.ColumnStaticInfo static_info = 1;
  inline bool has_static_info() const;
  inline void clear_static_info();
  static const int kStaticInfoFieldNumber = 1;
  inline const ::gunir::io::ColumnStaticInfo& static_info() const;
  inline ::gunir::io::ColumnStaticInfo* mutable_static_info();
  inline ::gunir::io::ColumnStaticInfo* release_static_info();
  
  // required .gunir.io.ColumnDynamicInfo dynamic_info = 2;
  inline bool has_dynamic_info() const;
  inline void clear_dynamic_info();
  static const int kDynamicInfoFieldNumber = 2;
  inline const ::gunir::io::ColumnDynamicInfo& dynamic_info() const;
  inline ::gunir::io::ColumnDynamicInfo* mutable_dynamic_info();
  inline ::gunir::io::ColumnDynamicInfo* release_dynamic_info();
  
  // @@protoc_insertion_point(class_scope:gunir.io.ColumnMetaData)
 private:
  inline void set_has_static_info();
  inline void clear_has_static_info();
  inline void set_has_dynamic_info();
  inline void clear_has_dynamic_info();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::gunir::io::ColumnStaticInfo* static_info_;
  ::gunir::io::ColumnDynamicInfo* dynamic_info_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_column_5fmetadata_2eproto();
  friend void protobuf_AssignDesc_column_5fmetadata_2eproto();
  friend void protobuf_ShutdownFile_column_5fmetadata_2eproto();
  
  void InitAsDefaultInstance();
  static ColumnMetaData* default_instance_;
};
// ===================================================================


// ===================================================================

// ColumnStaticInfo

// required uint32 column_index = 1;
inline bool ColumnStaticInfo::has_column_index() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ColumnStaticInfo::set_has_column_index() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ColumnStaticInfo::clear_has_column_index() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ColumnStaticInfo::clear_column_index() {
  column_index_ = 0u;
  clear_has_column_index();
}
inline ::google::protobuf::uint32 ColumnStaticInfo::column_index() const {
  return column_index_;
}
inline void ColumnStaticInfo::set_column_index(::google::protobuf::uint32 value) {
  set_has_column_index();
  column_index_ = value;
}

// required string column_name = 2;
inline bool ColumnStaticInfo::has_column_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ColumnStaticInfo::set_has_column_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ColumnStaticInfo::clear_has_column_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ColumnStaticInfo::clear_column_name() {
  if (column_name_ != &::google::protobuf::internal::kEmptyString) {
    column_name_->clear();
  }
  clear_has_column_name();
}
inline const ::std::string& ColumnStaticInfo::column_name() const {
  return *column_name_;
}
inline void ColumnStaticInfo::set_column_name(const ::std::string& value) {
  set_has_column_name();
  if (column_name_ == &::google::protobuf::internal::kEmptyString) {
    column_name_ = new ::std::string;
  }
  column_name_->assign(value);
}
inline void ColumnStaticInfo::set_column_name(const char* value) {
  set_has_column_name();
  if (column_name_ == &::google::protobuf::internal::kEmptyString) {
    column_name_ = new ::std::string;
  }
  column_name_->assign(value);
}
inline void ColumnStaticInfo::set_column_name(const char* value, size_t size) {
  set_has_column_name();
  if (column_name_ == &::google::protobuf::internal::kEmptyString) {
    column_name_ = new ::std::string;
  }
  column_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ColumnStaticInfo::mutable_column_name() {
  set_has_column_name();
  if (column_name_ == &::google::protobuf::internal::kEmptyString) {
    column_name_ = new ::std::string;
  }
  return column_name_;
}
inline ::std::string* ColumnStaticInfo::release_column_name() {
  clear_has_column_name();
  if (column_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = column_name_;
    column_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required .gunir.io.ColumnType column_type = 3;
inline bool ColumnStaticInfo::has_column_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ColumnStaticInfo::set_has_column_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ColumnStaticInfo::clear_has_column_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ColumnStaticInfo::clear_column_type() {
  column_type_ = 1;
  clear_has_column_type();
}
inline gunir::io::ColumnType ColumnStaticInfo::column_type() const {
  return static_cast< gunir::io::ColumnType >(column_type_);
}
inline void ColumnStaticInfo::set_column_type(gunir::io::ColumnType value) {
  GOOGLE_DCHECK(gunir::io::ColumnType_IsValid(value));
  set_has_column_type();
  column_type_ = value;
}

// required uint32 max_repetition_level = 4;
inline bool ColumnStaticInfo::has_max_repetition_level() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ColumnStaticInfo::set_has_max_repetition_level() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ColumnStaticInfo::clear_has_max_repetition_level() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ColumnStaticInfo::clear_max_repetition_level() {
  max_repetition_level_ = 0u;
  clear_has_max_repetition_level();
}
inline ::google::protobuf::uint32 ColumnStaticInfo::max_repetition_level() const {
  return max_repetition_level_;
}
inline void ColumnStaticInfo::set_max_repetition_level(::google::protobuf::uint32 value) {
  set_has_max_repetition_level();
  max_repetition_level_ = value;
}

// required uint32 max_definition_level = 5;
inline bool ColumnStaticInfo::has_max_definition_level() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ColumnStaticInfo::set_has_max_definition_level() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ColumnStaticInfo::clear_has_max_definition_level() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ColumnStaticInfo::clear_max_definition_level() {
  max_definition_level_ = 0u;
  clear_has_max_definition_level();
}
inline ::google::protobuf::uint32 ColumnStaticInfo::max_definition_level() const {
  return max_definition_level_;
}
inline void ColumnStaticInfo::set_max_definition_level(::google::protobuf::uint32 value) {
  set_has_max_definition_level();
  max_definition_level_ = value;
}

// -------------------------------------------------------------------

// ColumnDynamicInfo

// required fixed64 start_position = 1;
inline bool ColumnDynamicInfo::has_start_position() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ColumnDynamicInfo::set_has_start_position() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ColumnDynamicInfo::clear_has_start_position() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ColumnDynamicInfo::clear_start_position() {
  start_position_ = GOOGLE_ULONGLONG(0);
  clear_has_start_position();
}
inline ::google::protobuf::uint64 ColumnDynamicInfo::start_position() const {
  return start_position_;
}
inline void ColumnDynamicInfo::set_start_position(::google::protobuf::uint64 value) {
  set_has_start_position();
  start_position_ = value;
}

// required fixed32 length = 2;
inline bool ColumnDynamicInfo::has_length() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ColumnDynamicInfo::set_has_length() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ColumnDynamicInfo::clear_has_length() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ColumnDynamicInfo::clear_length() {
  length_ = 0u;
  clear_has_length();
}
inline ::google::protobuf::uint32 ColumnDynamicInfo::length() const {
  return length_;
}
inline void ColumnDynamicInfo::set_length(::google::protobuf::uint32 value) {
  set_has_length();
  length_ = value;
}

// -------------------------------------------------------------------

// ColumnMetaData

// required .gunir.io.ColumnStaticInfo static_info = 1;
inline bool ColumnMetaData::has_static_info() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ColumnMetaData::set_has_static_info() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ColumnMetaData::clear_has_static_info() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ColumnMetaData::clear_static_info() {
  if (static_info_ != NULL) static_info_->::gunir::io::ColumnStaticInfo::Clear();
  clear_has_static_info();
}
inline const ::gunir::io::ColumnStaticInfo& ColumnMetaData::static_info() const {
  return static_info_ != NULL ? *static_info_ : *default_instance_->static_info_;
}
inline ::gunir::io::ColumnStaticInfo* ColumnMetaData::mutable_static_info() {
  set_has_static_info();
  if (static_info_ == NULL) static_info_ = new ::gunir::io::ColumnStaticInfo;
  return static_info_;
}
inline ::gunir::io::ColumnStaticInfo* ColumnMetaData::release_static_info() {
  clear_has_static_info();
  ::gunir::io::ColumnStaticInfo* temp = static_info_;
  static_info_ = NULL;
  return temp;
}

// required .gunir.io.ColumnDynamicInfo dynamic_info = 2;
inline bool ColumnMetaData::has_dynamic_info() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ColumnMetaData::set_has_dynamic_info() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ColumnMetaData::clear_has_dynamic_info() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ColumnMetaData::clear_dynamic_info() {
  if (dynamic_info_ != NULL) dynamic_info_->::gunir::io::ColumnDynamicInfo::Clear();
  clear_has_dynamic_info();
}
inline const ::gunir::io::ColumnDynamicInfo& ColumnMetaData::dynamic_info() const {
  return dynamic_info_ != NULL ? *dynamic_info_ : *default_instance_->dynamic_info_;
}
inline ::gunir::io::ColumnDynamicInfo* ColumnMetaData::mutable_dynamic_info() {
  set_has_dynamic_info();
  if (dynamic_info_ == NULL) dynamic_info_ = new ::gunir::io::ColumnDynamicInfo;
  return dynamic_info_;
}
inline ::gunir::io::ColumnDynamicInfo* ColumnMetaData::release_dynamic_info() {
  clear_has_dynamic_info();
  ::gunir::io::ColumnDynamicInfo* temp = dynamic_info_;
  dynamic_info_ = NULL;
  return temp;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace io
}  // namespace gunir

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< gunir::io::ColumnType>() {
  return gunir::io::ColumnType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_column_5fmetadata_2eproto__INCLUDED
