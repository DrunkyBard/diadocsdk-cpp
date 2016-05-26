// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Docflow/UnilateralDocflow.proto

#ifndef PROTOBUF_Docflow_2fUnilateralDocflow_2eproto__INCLUDED
#define PROTOBUF_Docflow_2fUnilateralDocflow_2eproto__INCLUDED

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
#include "Docflow/ReceiptDocflow.pb.h"
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Docflow {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_Docflow_2fUnilateralDocflow_2eproto();
void protobuf_AssignDesc_Docflow_2fUnilateralDocflow_2eproto();
void protobuf_ShutdownFile_Docflow_2fUnilateralDocflow_2eproto();

class UnilateralDocflow;

// ===================================================================

class UnilateralDocflow : public ::google::protobuf::Message {
 public:
  UnilateralDocflow();
  virtual ~UnilateralDocflow();

  UnilateralDocflow(const UnilateralDocflow& from);

  inline UnilateralDocflow& operator=(const UnilateralDocflow& from) {
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
  static const UnilateralDocflow& default_instance();

  void Swap(UnilateralDocflow* other);

  // implements Message ----------------------------------------------

  UnilateralDocflow* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UnilateralDocflow& from);
  void MergeFrom(const UnilateralDocflow& from);
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

  // optional .Diadoc.Api.Proto.Docflow.ReceiptDocflow ReceiptDocflow = 2;
  inline bool has_receiptdocflow() const;
  inline void clear_receiptdocflow();
  static const int kReceiptDocflowFieldNumber = 2;
  inline const ::Diadoc::Api::Proto::Docflow::ReceiptDocflow& receiptdocflow() const;
  inline ::Diadoc::Api::Proto::Docflow::ReceiptDocflow* mutable_receiptdocflow();
  inline ::Diadoc::Api::Proto::Docflow::ReceiptDocflow* release_receiptdocflow();
  inline void set_allocated_receiptdocflow(::Diadoc::Api::Proto::Docflow::ReceiptDocflow* receiptdocflow);

  // optional bool IsReceiptRequested = 3;
  inline bool has_isreceiptrequested() const;
  inline void clear_isreceiptrequested();
  static const int kIsReceiptRequestedFieldNumber = 3;
  inline bool isreceiptrequested() const;
  inline void set_isreceiptrequested(bool value);

  // optional bool CanDocumentBeReceipted = 4;
  inline bool has_candocumentbereceipted() const;
  inline void clear_candocumentbereceipted();
  static const int kCanDocumentBeReceiptedFieldNumber = 4;
  inline bool candocumentbereceipted() const;
  inline void set_candocumentbereceipted(bool value);

  // optional bool CanDocumentBeSignedBySender = 5;
  inline bool has_candocumentbesignedbysender() const;
  inline void clear_candocumentbesignedbysender();
  static const int kCanDocumentBeSignedBySenderFieldNumber = 5;
  inline bool candocumentbesignedbysender() const;
  inline void set_candocumentbesignedbysender(bool value);

  // @@protoc_insertion_point(class_scope:Diadoc.Api.Proto.Docflow.UnilateralDocflow)
 private:
  inline void set_has_isfinished();
  inline void clear_has_isfinished();
  inline void set_has_receiptdocflow();
  inline void clear_has_receiptdocflow();
  inline void set_has_isreceiptrequested();
  inline void clear_has_isreceiptrequested();
  inline void set_has_candocumentbereceipted();
  inline void clear_has_candocumentbereceipted();
  inline void set_has_candocumentbesignedbysender();
  inline void clear_has_candocumentbesignedbysender();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::Diadoc::Api::Proto::Docflow::ReceiptDocflow* receiptdocflow_;
  bool isfinished_;
  bool isreceiptrequested_;
  bool candocumentbereceipted_;
  bool candocumentbesignedbysender_;
  friend void  protobuf_AddDesc_Docflow_2fUnilateralDocflow_2eproto();
  friend void protobuf_AssignDesc_Docflow_2fUnilateralDocflow_2eproto();
  friend void protobuf_ShutdownFile_Docflow_2fUnilateralDocflow_2eproto();

  void InitAsDefaultInstance();
  static UnilateralDocflow* default_instance_;
};
// ===================================================================


// ===================================================================

// UnilateralDocflow

// optional bool IsFinished = 1;
inline bool UnilateralDocflow::has_isfinished() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UnilateralDocflow::set_has_isfinished() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UnilateralDocflow::clear_has_isfinished() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UnilateralDocflow::clear_isfinished() {
  isfinished_ = false;
  clear_has_isfinished();
}
inline bool UnilateralDocflow::isfinished() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Docflow.UnilateralDocflow.IsFinished)
  return isfinished_;
}
inline void UnilateralDocflow::set_isfinished(bool value) {
  set_has_isfinished();
  isfinished_ = value;
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Docflow.UnilateralDocflow.IsFinished)
}

// optional .Diadoc.Api.Proto.Docflow.ReceiptDocflow ReceiptDocflow = 2;
inline bool UnilateralDocflow::has_receiptdocflow() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UnilateralDocflow::set_has_receiptdocflow() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UnilateralDocflow::clear_has_receiptdocflow() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UnilateralDocflow::clear_receiptdocflow() {
  if (receiptdocflow_ != NULL) receiptdocflow_->::Diadoc::Api::Proto::Docflow::ReceiptDocflow::Clear();
  clear_has_receiptdocflow();
}
inline const ::Diadoc::Api::Proto::Docflow::ReceiptDocflow& UnilateralDocflow::receiptdocflow() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Docflow.UnilateralDocflow.ReceiptDocflow)
  return receiptdocflow_ != NULL ? *receiptdocflow_ : *default_instance_->receiptdocflow_;
}
inline ::Diadoc::Api::Proto::Docflow::ReceiptDocflow* UnilateralDocflow::mutable_receiptdocflow() {
  set_has_receiptdocflow();
  if (receiptdocflow_ == NULL) receiptdocflow_ = new ::Diadoc::Api::Proto::Docflow::ReceiptDocflow;
  // @@protoc_insertion_point(field_mutable:Diadoc.Api.Proto.Docflow.UnilateralDocflow.ReceiptDocflow)
  return receiptdocflow_;
}
inline ::Diadoc::Api::Proto::Docflow::ReceiptDocflow* UnilateralDocflow::release_receiptdocflow() {
  clear_has_receiptdocflow();
  ::Diadoc::Api::Proto::Docflow::ReceiptDocflow* temp = receiptdocflow_;
  receiptdocflow_ = NULL;
  return temp;
}
inline void UnilateralDocflow::set_allocated_receiptdocflow(::Diadoc::Api::Proto::Docflow::ReceiptDocflow* receiptdocflow) {
  delete receiptdocflow_;
  receiptdocflow_ = receiptdocflow;
  if (receiptdocflow) {
    set_has_receiptdocflow();
  } else {
    clear_has_receiptdocflow();
  }
  // @@protoc_insertion_point(field_set_allocated:Diadoc.Api.Proto.Docflow.UnilateralDocflow.ReceiptDocflow)
}

// optional bool IsReceiptRequested = 3;
inline bool UnilateralDocflow::has_isreceiptrequested() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UnilateralDocflow::set_has_isreceiptrequested() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UnilateralDocflow::clear_has_isreceiptrequested() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UnilateralDocflow::clear_isreceiptrequested() {
  isreceiptrequested_ = false;
  clear_has_isreceiptrequested();
}
inline bool UnilateralDocflow::isreceiptrequested() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Docflow.UnilateralDocflow.IsReceiptRequested)
  return isreceiptrequested_;
}
inline void UnilateralDocflow::set_isreceiptrequested(bool value) {
  set_has_isreceiptrequested();
  isreceiptrequested_ = value;
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Docflow.UnilateralDocflow.IsReceiptRequested)
}

// optional bool CanDocumentBeReceipted = 4;
inline bool UnilateralDocflow::has_candocumentbereceipted() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void UnilateralDocflow::set_has_candocumentbereceipted() {
  _has_bits_[0] |= 0x00000008u;
}
inline void UnilateralDocflow::clear_has_candocumentbereceipted() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void UnilateralDocflow::clear_candocumentbereceipted() {
  candocumentbereceipted_ = false;
  clear_has_candocumentbereceipted();
}
inline bool UnilateralDocflow::candocumentbereceipted() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Docflow.UnilateralDocflow.CanDocumentBeReceipted)
  return candocumentbereceipted_;
}
inline void UnilateralDocflow::set_candocumentbereceipted(bool value) {
  set_has_candocumentbereceipted();
  candocumentbereceipted_ = value;
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Docflow.UnilateralDocflow.CanDocumentBeReceipted)
}

// optional bool CanDocumentBeSignedBySender = 5;
inline bool UnilateralDocflow::has_candocumentbesignedbysender() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void UnilateralDocflow::set_has_candocumentbesignedbysender() {
  _has_bits_[0] |= 0x00000010u;
}
inline void UnilateralDocflow::clear_has_candocumentbesignedbysender() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void UnilateralDocflow::clear_candocumentbesignedbysender() {
  candocumentbesignedbysender_ = false;
  clear_has_candocumentbesignedbysender();
}
inline bool UnilateralDocflow::candocumentbesignedbysender() const {
  // @@protoc_insertion_point(field_get:Diadoc.Api.Proto.Docflow.UnilateralDocflow.CanDocumentBeSignedBySender)
  return candocumentbesignedbysender_;
}
inline void UnilateralDocflow::set_candocumentbesignedbysender(bool value) {
  set_has_candocumentbesignedbysender();
  candocumentbesignedbysender_ = value;
  // @@protoc_insertion_point(field_set:Diadoc.Api.Proto.Docflow.UnilateralDocflow.CanDocumentBeSignedBySender)
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

#endif  // PROTOBUF_Docflow_2fUnilateralDocflow_2eproto__INCLUDED
