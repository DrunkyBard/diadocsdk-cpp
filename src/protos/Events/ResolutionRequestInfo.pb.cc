// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Events/ResolutionRequestInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Events/ResolutionRequestInfo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Diadoc {
namespace Api {
namespace Proto {
namespace Events {

namespace {

const ::google::protobuf::Descriptor* ResolutionRequestInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ResolutionRequestInfo_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* ResolutionRequestType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_Events_2fResolutionRequestInfo_2eproto() {
  protobuf_AddDesc_Events_2fResolutionRequestInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Events/ResolutionRequestInfo.proto");
  GOOGLE_CHECK(file != NULL);
  ResolutionRequestInfo_descriptor_ = file->message_type(0);
  static const int ResolutionRequestInfo_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResolutionRequestInfo, requesttype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResolutionRequestInfo, author_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResolutionRequestInfo, target_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResolutionRequestInfo, resolvedwith_),
  };
  ResolutionRequestInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ResolutionRequestInfo_descriptor_,
      ResolutionRequestInfo::default_instance_,
      ResolutionRequestInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResolutionRequestInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ResolutionRequestInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ResolutionRequestInfo));
  ResolutionRequestType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Events_2fResolutionRequestInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ResolutionRequestInfo_descriptor_, &ResolutionRequestInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Events_2fResolutionRequestInfo_2eproto() {
  delete ResolutionRequestInfo::default_instance_;
  delete ResolutionRequestInfo_reflection_;
}

void protobuf_AddDesc_Events_2fResolutionRequestInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Diadoc::Api::Proto::protobuf_AddDesc_ResolutionTarget_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\"Events/ResolutionRequestInfo.proto\022\027Di"
    "adoc.Api.Proto.Events\032\026ResolutionTarget."
    "proto\"\324\001\n\025ResolutionRequestInfo\022a\n\013Reque"
    "stType\030\001 \001(\0162..Diadoc.Api.Proto.Events.R"
    "esolutionRequestType:\034UnknownResolutionR"
    "equestType\022\016\n\006Author\030\002 \002(\t\0222\n\006Target\030\003 \001"
    "(\0132\".Diadoc.Api.Proto.ResolutionTarget\022\024"
    "\n\014ResolvedWith\030\004 \001(\t*\221\001\n\025ResolutionReque"
    "stType\022)\n\034UnknownResolutionRequestType\020\377"
    "\377\377\377\377\377\377\377\377\001\022\026\n\022ApprovementRequest\020\000\022\024\n\020Sig"
    "natureRequest\020\001\022\037\n\033ApprovementSignatureR"
    "equest\020\002", 448);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Events/ResolutionRequestInfo.proto", &protobuf_RegisterTypes);
  ResolutionRequestInfo::default_instance_ = new ResolutionRequestInfo();
  ResolutionRequestInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Events_2fResolutionRequestInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Events_2fResolutionRequestInfo_2eproto {
  StaticDescriptorInitializer_Events_2fResolutionRequestInfo_2eproto() {
    protobuf_AddDesc_Events_2fResolutionRequestInfo_2eproto();
  }
} static_descriptor_initializer_Events_2fResolutionRequestInfo_2eproto_;
const ::google::protobuf::EnumDescriptor* ResolutionRequestType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ResolutionRequestType_descriptor_;
}
bool ResolutionRequestType_IsValid(int value) {
  switch(value) {
    case -1:
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int ResolutionRequestInfo::kRequestTypeFieldNumber;
const int ResolutionRequestInfo::kAuthorFieldNumber;
const int ResolutionRequestInfo::kTargetFieldNumber;
const int ResolutionRequestInfo::kResolvedWithFieldNumber;
#endif  // !_MSC_VER

ResolutionRequestInfo::ResolutionRequestInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Diadoc.Api.Proto.Events.ResolutionRequestInfo)
}

void ResolutionRequestInfo::InitAsDefaultInstance() {
  target_ = const_cast< ::Diadoc::Api::Proto::ResolutionTarget*>(&::Diadoc::Api::Proto::ResolutionTarget::default_instance());
}

ResolutionRequestInfo::ResolutionRequestInfo(const ResolutionRequestInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Diadoc.Api.Proto.Events.ResolutionRequestInfo)
}

void ResolutionRequestInfo::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  requesttype_ = -1;
  author_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  target_ = NULL;
  resolvedwith_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ResolutionRequestInfo::~ResolutionRequestInfo() {
  // @@protoc_insertion_point(destructor:Diadoc.Api.Proto.Events.ResolutionRequestInfo)
  SharedDtor();
}

void ResolutionRequestInfo::SharedDtor() {
  if (author_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete author_;
  }
  if (resolvedwith_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete resolvedwith_;
  }
  if (this != default_instance_) {
    delete target_;
  }
}

void ResolutionRequestInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ResolutionRequestInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ResolutionRequestInfo_descriptor_;
}

const ResolutionRequestInfo& ResolutionRequestInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Events_2fResolutionRequestInfo_2eproto();
  return *default_instance_;
}

ResolutionRequestInfo* ResolutionRequestInfo::default_instance_ = NULL;

ResolutionRequestInfo* ResolutionRequestInfo::New() const {
  return new ResolutionRequestInfo;
}

void ResolutionRequestInfo::Clear() {
  if (_has_bits_[0 / 32] & 15) {
    requesttype_ = -1;
    if (has_author()) {
      if (author_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        author_->clear();
      }
    }
    if (has_target()) {
      if (target_ != NULL) target_->::Diadoc::Api::Proto::ResolutionTarget::Clear();
    }
    if (has_resolvedwith()) {
      if (resolvedwith_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        resolvedwith_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ResolutionRequestInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Diadoc.Api.Proto.Events.ResolutionRequestInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .Diadoc.Api.Proto.Events.ResolutionRequestType RequestType = 1 [default = UnknownResolutionRequestType];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Diadoc::Api::Proto::Events::ResolutionRequestType_IsValid(value)) {
            set_requesttype(static_cast< ::Diadoc::Api::Proto::Events::ResolutionRequestType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_Author;
        break;
      }

      // required string Author = 2;
      case 2: {
        if (tag == 18) {
         parse_Author:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_author()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->author().data(), this->author().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "author");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_Target;
        break;
      }

      // optional .Diadoc.Api.Proto.ResolutionTarget Target = 3;
      case 3: {
        if (tag == 26) {
         parse_Target:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_target()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_ResolvedWith;
        break;
      }

      // optional string ResolvedWith = 4;
      case 4: {
        if (tag == 34) {
         parse_ResolvedWith:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_resolvedwith()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->resolvedwith().data(), this->resolvedwith().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "resolvedwith");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Diadoc.Api.Proto.Events.ResolutionRequestInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Diadoc.Api.Proto.Events.ResolutionRequestInfo)
  return false;
#undef DO_
}

void ResolutionRequestInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Diadoc.Api.Proto.Events.ResolutionRequestInfo)
  // optional .Diadoc.Api.Proto.Events.ResolutionRequestType RequestType = 1 [default = UnknownResolutionRequestType];
  if (has_requesttype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->requesttype(), output);
  }

  // required string Author = 2;
  if (has_author()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->author().data(), this->author().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "author");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->author(), output);
  }

  // optional .Diadoc.Api.Proto.ResolutionTarget Target = 3;
  if (has_target()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->target(), output);
  }

  // optional string ResolvedWith = 4;
  if (has_resolvedwith()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->resolvedwith().data(), this->resolvedwith().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "resolvedwith");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->resolvedwith(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Diadoc.Api.Proto.Events.ResolutionRequestInfo)
}

::google::protobuf::uint8* ResolutionRequestInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Diadoc.Api.Proto.Events.ResolutionRequestInfo)
  // optional .Diadoc.Api.Proto.Events.ResolutionRequestType RequestType = 1 [default = UnknownResolutionRequestType];
  if (has_requesttype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->requesttype(), target);
  }

  // required string Author = 2;
  if (has_author()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->author().data(), this->author().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "author");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->author(), target);
  }

  // optional .Diadoc.Api.Proto.ResolutionTarget Target = 3;
  if (has_target()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->target(), target);
  }

  // optional string ResolvedWith = 4;
  if (has_resolvedwith()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->resolvedwith().data(), this->resolvedwith().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "resolvedwith");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->resolvedwith(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Diadoc.Api.Proto.Events.ResolutionRequestInfo)
  return target;
}

int ResolutionRequestInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .Diadoc.Api.Proto.Events.ResolutionRequestType RequestType = 1 [default = UnknownResolutionRequestType];
    if (has_requesttype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->requesttype());
    }

    // required string Author = 2;
    if (has_author()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->author());
    }

    // optional .Diadoc.Api.Proto.ResolutionTarget Target = 3;
    if (has_target()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->target());
    }

    // optional string ResolvedWith = 4;
    if (has_resolvedwith()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->resolvedwith());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ResolutionRequestInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ResolutionRequestInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ResolutionRequestInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ResolutionRequestInfo::MergeFrom(const ResolutionRequestInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_requesttype()) {
      set_requesttype(from.requesttype());
    }
    if (from.has_author()) {
      set_author(from.author());
    }
    if (from.has_target()) {
      mutable_target()->::Diadoc::Api::Proto::ResolutionTarget::MergeFrom(from.target());
    }
    if (from.has_resolvedwith()) {
      set_resolvedwith(from.resolvedwith());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ResolutionRequestInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResolutionRequestInfo::CopyFrom(const ResolutionRequestInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResolutionRequestInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;

  return true;
}

void ResolutionRequestInfo::Swap(ResolutionRequestInfo* other) {
  if (other != this) {
    std::swap(requesttype_, other->requesttype_);
    std::swap(author_, other->author_);
    std::swap(target_, other->target_);
    std::swap(resolvedwith_, other->resolvedwith_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ResolutionRequestInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ResolutionRequestInfo_descriptor_;
  metadata.reflection = ResolutionRequestInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Events
}  // namespace Proto
}  // namespace Api
}  // namespace Diadoc

// @@protoc_insertion_point(global_scope)
