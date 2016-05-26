// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Docflow/RecipientSignatureDocflow.proto

#ifndef PROTOBUF_Docflow_2fRecipientSignatureDocflow_2eproto__INCLUDED
#define PROTOBUF_Docflow_2fRecipientSignatureDocflow_2eproto__INCLUDED

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
#include "Timestamp.pb.h"
#include "Docflow/Attachment.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Docflow {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Docflow_2fRecipientSignatureDocflow_2eproto();
void protobuf_AssignDesc_Docflow_2fRecipientSignatureDocflow_2eproto();
void protobuf_ShutdownFile_Docflow_2fRecipientSignatureDocflow_2eproto();

class RecipientSignatureDocflow;

// ===================================================================

class RecipientSignatureDocflow : public ::google::protobuf::Message {
 public:
  RecipientSignatureDocflow();
  virtual ~RecipientSignatureDocflow();

  RecipientSignatureDocflow(const RecipientSignatureDocflow& from);

  inline RecipientSignatureDocflow& operator=(const RecipientSignatureDocflow& from) {
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
  static const RecipientSignatureDocflow& default_instance();

  void Swap(RecipientSignatureDocflow* other);

  // implements Message ----------------------------------------------

  RecipientSignatureDocflow* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RecipientSignatureDocflow& from);
  void MergeFrom(const RecipientSignatureDocflow& from);
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

  // optional bool IsFinished = 1;
  inline bool has_isfinished() const;
  inline void clear_isfinished();
  static const int kIsFinishedFieldNumber = 1;
  inline bool isfinished() const;
  inline void set_isfinished(bool value);

  // optional .Diadoc.Api.Proto.Docflow.Signature RecipientSignature = 2;
  inline bool has_recipientsignature() const;
  inline void clear_recipientsignature();
  static const int kRecipientSignatureFieldNumber = 2;
  inline const ::Diadoc::Api::Proto::Docflow::Signature& recipientsignature() const;
  inline ::Diadoc::Api::Proto::Docflow::Signature* mutable_recipientsignature();
  inline ::Diadoc::Api::Proto::Docflow::Signature* release_recipientsignature();
  inline void set_allocated_recipientsignature(::Diadoc::Api::Proto::Docflow::Signature* recipientsignature);

  // optional .Diadoc.Api.Proto.Timestamp DeliveryTimestamp = 3;
  inline bool has_deliverytimestamp() const;
  inline void clear_deliverytimestamp();
  static const int kDeliveryTimestampFieldNumber = 3;
  inline const ::Diadoc::Api::Proto::Timestamp& deliverytimestamp() const;
  inline ::Diadoc::Api::Proto::Timestamp* mutable_deliverytimestamp();
  inline ::Diadoc::Api::Proto::Timestamp* release_deliverytimestamp();
  inline void set_allocated_deliverytimestamp(::Diadoc::Api::Proto::Timestamp* deliverytimestamp);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Docflow.RecipientSignatureDocflow)
 private:
  inline void set_has_isfinished();
  inline void clear_has_isfinished();
  inline void set_has_recipientsignature();
  inline void clear_has_recipientsignature();
  inline void set_has_deliverytimestamp();
  inline void clear_has_deliverytimestamp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::Diadoc::Api::Proto::Docflow::Signature* recipientsignature_;
  ::Diadoc::Api::Proto::Timestamp* deliverytimestamp_;
  bool isfinished_;
  friend void  protobuf_AddDesc_Docflow_2fRecipientSignatureDocflow_2eproto();
  friend void protobuf_AssignDesc_Docflow_2fRecipientSignatureDocflow_2eproto();
  friend void protobuf_ShutdownFile_Docflow_2fRecipientSignatureDocflow_2eproto();

  void InitAsDefaultInstance();
  static RecipientSignatureDocflow* default_instance_;
};
// ===================================================================


// ===================================================================

// RecipientSignatureDocflow

// optional bool IsFinished = 1;
inline bool RecipientSignatureDocflow::has_isfinished() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RecipientSignatureDocflow::set_has_isfinished() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RecipientSignatureDocflow::clear_has_isfinished() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RecipientSignatureDocflow::clear_isfinished() {
  isfinished_ = false;
  clear_has_isfinished();
}
inline bool RecipientSignatureDocflow::isfinished() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Docflow.RecipientSignatureDocflow.IsFinished)
  return isfinished_;
}
inline void RecipientSignatureDocflow::set_isfinished(bool value) {
  set_has_isfinished();
  isfinished_ = value;
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Docflow.RecipientSignatureDocflow.IsFinished)
}

// optional .Diadoc.Api.Proto.Docflow.Signature RecipientSignature = 2;
inline bool RecipientSignatureDocflow::has_recipientsignature() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RecipientSignatureDocflow::set_has_recipientsignature() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RecipientSignatureDocflow::clear_has_recipientsignature() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RecipientSignatureDocflow::clear_recipientsignature() {
  if (recipientsignature_ != NULL) recipientsignature_->::Diadoc::Api::Proto::Docflow::Signature::Clear();
  clear_has_recipientsignature();
}
inline const ::Diadoc::Api::Proto::Docflow::Signature& RecipientSignatureDocflow::recipientsignature() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Docflow.RecipientSignatureDocflow.RecipientSignature)
  return recipientsignature_ != NULL ? *recipientsignature_ : *default_instance_->recipientsignature_;
}
inline ::Diadoc::Api::Proto::Docflow::Signature* RecipientSignatureDocflow::mutable_recipientsignature() {
  set_has_recipientsignature();
  if (recipientsignature_ == NULL) recipientsignature_ = new ::Diadoc::Api::Proto::Docflow::Signature;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Docflow.RecipientSignatureDocflow.RecipientSignature)
  return recipientsignature_;
}
inline ::Diadoc::Api::Proto::Docflow::Signature* RecipientSignatureDocflow::release_recipientsignature() {
  clear_has_recipientsignature();
  ::Diadoc::Api::Proto::Docflow::Signature* temp = recipientsignature_;
  recipientsignature_ = NULL;
  return temp;
}
inline void RecipientSignatureDocflow::set_allocated_recipientsignature(::Diadoc::Api::Proto::Docflow::Signature* recipientsignature) {
  delete recipientsignature_;
  recipientsignature_ = recipientsignature;
  if (recipientsignature) {
    set_has_recipientsignature();
  } else {
    clear_has_recipientsignature();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Docflow.RecipientSignatureDocflow.RecipientSignature)
}

// optional .Diadoc.Api.Proto.Timestamp DeliveryTimestamp = 3;
inline bool RecipientSignatureDocflow::has_deliverytimestamp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RecipientSignatureDocflow::set_has_deliverytimestamp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RecipientSignatureDocflow::clear_has_deliverytimestamp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RecipientSignatureDocflow::clear_deliverytimestamp() {
  if (deliverytimestamp_ != NULL) deliverytimestamp_->::Diadoc::Api::Proto::Timestamp::Clear();
  clear_has_deliverytimestamp();
}
inline const ::Diadoc::Api::Proto::Timestamp& RecipientSignatureDocflow::deliverytimestamp() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Docflow.RecipientSignatureDocflow.DeliveryTimestamp)
  return deliverytimestamp_ != NULL ? *deliverytimestamp_ : *default_instance_->deliverytimestamp_;
}
inline ::Diadoc::Api::Proto::Timestamp* RecipientSignatureDocflow::mutable_deliverytimestamp() {
  set_has_deliverytimestamp();
  if (deliverytimestamp_ == NULL) deliverytimestamp_ = new ::Diadoc::Api::Proto::Timestamp;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Docflow.RecipientSignatureDocflow.DeliveryTimestamp)
  return deliverytimestamp_;
}
inline ::Diadoc::Api::Proto::Timestamp* RecipientSignatureDocflow::release_deliverytimestamp() {
  clear_has_deliverytimestamp();
  ::Diadoc::Api::Proto::Timestamp* temp = deliverytimestamp_;
  deliverytimestamp_ = NULL;
  return temp;
}
inline void RecipientSignatureDocflow::set_allocated_deliverytimestamp(::Diadoc::Api::Proto::Timestamp* deliverytimestamp) {
  delete deliverytimestamp_;
  deliverytimestamp_ = deliverytimestamp;
  if (deliverytimestamp) {
    set_has_deliverytimestamp();
  } else {
    clear_has_deliverytimestamp();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Docflow.RecipientSignatureDocflow.DeliveryTimestamp)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Docflow
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

#endif  // PROTOBUF_Docflow_2fRecipientSignatureDocflow_2eproto__INCLUDED
