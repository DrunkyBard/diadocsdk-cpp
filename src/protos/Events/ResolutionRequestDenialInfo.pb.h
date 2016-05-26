// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Events/ResolutionRequestDenialInfo.proto

#ifndef PROTOBUF_Events_2fResolutionRequestDenialInfo_2eproto__INCLUDED
#define PROTOBUF_Events_2fResolutionRequestDenialInfo_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Events {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Events_2fResolutionRequestDenialInfo_2eproto();
void protobuf_AssignDesc_Events_2fResolutionRequestDenialInfo_2eproto();
void protobuf_ShutdownFile_Events_2fResolutionRequestDenialInfo_2eproto();

class ResolutionRequestDenialInfo;

// ===================================================================

class ResolutionRequestDenialInfo : public ::google::protobuf::Message {
 public:
  ResolutionRequestDenialInfo();
  virtual ~ResolutionRequestDenialInfo();

  ResolutionRequestDenialInfo(const ResolutionRequestDenialInfo& from);

  inline ResolutionRequestDenialInfo& operator=(const ResolutionRequestDenialInfo& from) {
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
  static const ResolutionRequestDenialInfo& default_instance();

  void Swap(ResolutionRequestDenialInfo* other);

  // implements Message ----------------------------------------------

  ResolutionRequestDenialInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ResolutionRequestDenialInfo& from);
  void MergeFrom(const ResolutionRequestDenialInfo& from);
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

  // required string Author = 1;
  inline bool has_author() const;
  inline void clear_author();
  static const int kAuthorFieldNumber = 1;
  inline const ::std::string& author() const;
  inline void set_author(const ::std::string& value);
  inline void set_author(const char* value);
  inline void set_author(const char* value, size_t size);
  inline ::std::string* mutable_author();
  inline ::std::string* release_author();
  inline void set_allocated_author(::std::string* author);

  // optional string InitialRequestId = 2;
  inline bool has_initialrequestid() const;
  inline void clear_initialrequestid();
  static const int kInitialRequestIdFieldNumber = 2;
  inline const ::std::string& initialrequestid() const;
  inline void set_initialrequestid(const ::std::string& value);
  inline void set_initialrequestid(const char* value);
  inline void set_initialrequestid(const char* value, size_t size);
  inline ::std::string* mutable_initialrequestid();
  inline ::std::string* release_initialrequestid();
  inline void set_allocated_initialrequestid(::std::string* initialrequestid);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Events.ResolutionRequestDenialInfo)
 private:
  inline void set_has_author();
  inline void clear_has_author();
  inline void set_has_initialrequestid();
  inline void clear_has_initialrequestid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* author_;
  ::std::string* initialrequestid_;
  friend void  protobuf_AddDesc_Events_2fResolutionRequestDenialInfo_2eproto();
  friend void protobuf_AssignDesc_Events_2fResolutionRequestDenialInfo_2eproto();
  friend void protobuf_ShutdownFile_Events_2fResolutionRequestDenialInfo_2eproto();

  void InitAsDefaultInstance();
  static ResolutionRequestDenialInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// ResolutionRequestDenialInfo

// required string Author = 1;
inline bool ResolutionRequestDenialInfo::has_author() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ResolutionRequestDenialInfo::set_has_author() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ResolutionRequestDenialInfo::clear_has_author() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ResolutionRequestDenialInfo::clear_author() {
  if (author_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    author_->clear();
  }
  clear_has_author();
}
inline const ::std::string& ResolutionRequestDenialInfo::author() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Events.ResolutionRequestDenialInfo.Author)
  return *author_;
}
inline void ResolutionRequestDenialInfo::set_author(const ::std::string& value) {
  set_has_author();
  if (author_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    author_ = new ::std::string;
  }
  author_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Events.ResolutionRequestDenialInfo.Author)
}
inline void ResolutionRequestDenialInfo::set_author(const char* value) {
  set_has_author();
  if (author_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    author_ = new ::std::string;
  }
  author_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Events.ResolutionRequestDenialInfo.Author)
}
inline void ResolutionRequestDenialInfo::set_author(const char* value, size_t size) {
  set_has_author();
  if (author_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    author_ = new ::std::string;
  }
  author_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Events.ResolutionRequestDenialInfo.Author)
}
inline ::std::string* ResolutionRequestDenialInfo::mutable_author() {
  set_has_author();
  if (author_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    author_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Events.ResolutionRequestDenialInfo.Author)
  return author_;
}
inline ::std::string* ResolutionRequestDenialInfo::release_author() {
  clear_has_author();
  if (author_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = author_;
    author_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ResolutionRequestDenialInfo::set_allocated_author(::std::string* author) {
  if (author_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete author_;
  }
  if (author) {
    set_has_author();
    author_ = author;
  } else {
    clear_has_author();
    author_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Events.ResolutionRequestDenialInfo.Author)
}

// optional string InitialRequestId = 2;
inline bool ResolutionRequestDenialInfo::has_initialrequestid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ResolutionRequestDenialInfo::set_has_initialrequestid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ResolutionRequestDenialInfo::clear_has_initialrequestid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ResolutionRequestDenialInfo::clear_initialrequestid() {
  if (initialrequestid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    initialrequestid_->clear();
  }
  clear_has_initialrequestid();
}
inline const ::std::string& ResolutionRequestDenialInfo::initialrequestid() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Events.ResolutionRequestDenialInfo.InitialRequestId)
  return *initialrequestid_;
}
inline void ResolutionRequestDenialInfo::set_initialrequestid(const ::std::string& value) {
  set_has_initialrequestid();
  if (initialrequestid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    initialrequestid_ = new ::std::string;
  }
  initialrequestid_->assign(value);
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Events.ResolutionRequestDenialInfo.InitialRequestId)
}
inline void ResolutionRequestDenialInfo::set_initialrequestid(const char* value) {
  set_has_initialrequestid();
  if (initialrequestid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    initialrequestid_ = new ::std::string;
  }
  initialrequestid_->assign(value);
  // @@protoc_insertion_point(field_set_char:Diadoc.Api.Proto.Events.ResolutionRequestDenialInfo.InitialRequestId)
}
inline void ResolutionRequestDenialInfo::set_initialrequestid(const char* value, size_t size) {
  set_has_initialrequestid();
  if (initialrequestid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    initialrequestid_ = new ::std::string;
  }
  initialrequestid_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Diadoc.Api.Proto.Events.ResolutionRequestDenialInfo.InitialRequestId)
}
inline ::std::string* ResolutionRequestDenialInfo::mutable_initialrequestid() {
  set_has_initialrequestid();
  if (initialrequestid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    initialrequestid_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Events.ResolutionRequestDenialInfo.InitialRequestId)
  return initialrequestid_;
}
inline ::std::string* ResolutionRequestDenialInfo::release_initialrequestid() {
  clear_has_initialrequestid();
  if (initialrequestid_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = initialrequestid_;
    initialrequestid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void ResolutionRequestDenialInfo::set_allocated_initialrequestid(::std::string* initialrequestid) {
  if (initialrequestid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete initialrequestid_;
  }
  if (initialrequestid) {
    set_has_initialrequestid();
    initialrequestid_ = initialrequestid;
  } else {
    clear_has_initialrequestid();
    initialrequestid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Events.ResolutionRequestDenialInfo.InitialRequestId)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Events
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Events_2fResolutionRequestDenialInfo_2eproto__INCLUDED
