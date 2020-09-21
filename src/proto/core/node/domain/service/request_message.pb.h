// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/core/node/domain/service/request_message.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "proto/core/common/common_object.pb.h"
#include "proto/core/io/address.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto;
namespace syft {
namespace core {
namespace node {
namespace domain {
namespace service {
class RequestMessage;
class RequestMessageDefaultTypeInternal;
extern RequestMessageDefaultTypeInternal _RequestMessage_default_instance_;
}  // namespace service
}  // namespace domain
}  // namespace node
}  // namespace core
}  // namespace syft
PROTOBUF_NAMESPACE_OPEN
template<> ::syft::core::node::domain::service::RequestMessage* Arena::CreateMaybeMessage<::syft::core::node::domain::service::RequestMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace syft {
namespace core {
namespace node {
namespace domain {
namespace service {

// ===================================================================

class RequestMessage PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:syft.core.node.domain.service.RequestMessage) */ {
 public:
  inline RequestMessage() : RequestMessage(nullptr) {}
  virtual ~RequestMessage();

  RequestMessage(const RequestMessage& from);
  RequestMessage(RequestMessage&& from) noexcept
    : RequestMessage() {
    *this = ::std::move(from);
  }

  inline RequestMessage& operator=(const RequestMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline RequestMessage& operator=(RequestMessage&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RequestMessage& default_instance();

  static inline const RequestMessage* internal_default_instance() {
    return reinterpret_cast<const RequestMessage*>(
               &_RequestMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RequestMessage& a, RequestMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(RequestMessage* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RequestMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RequestMessage* New() const final {
    return CreateMaybeMessage<RequestMessage>(nullptr);
  }

  RequestMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RequestMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RequestMessage& from);
  void MergeFrom(const RequestMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RequestMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "syft.core.node.domain.service.RequestMessage";
  }
  protected:
  explicit RequestMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto);
    return ::descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRequestNameFieldNumber = 3,
    kRequestDescriptionFieldNumber = 4,
    kRequesterVerifyKeyFieldNumber = 7,
    kRequestIdFieldNumber = 1,
    kObjectIdFieldNumber = 2,
    kTargetAddressFieldNumber = 5,
    kOwnerAddressFieldNumber = 6,
  };
  // string request_name = 3;
  void clear_request_name();
  const std::string& request_name() const;
  void set_request_name(const std::string& value);
  void set_request_name(std::string&& value);
  void set_request_name(const char* value);
  void set_request_name(const char* value, size_t size);
  std::string* mutable_request_name();
  std::string* release_request_name();
  void set_allocated_request_name(std::string* request_name);
  private:
  const std::string& _internal_request_name() const;
  void _internal_set_request_name(const std::string& value);
  std::string* _internal_mutable_request_name();
  public:

  // string request_description = 4;
  void clear_request_description();
  const std::string& request_description() const;
  void set_request_description(const std::string& value);
  void set_request_description(std::string&& value);
  void set_request_description(const char* value);
  void set_request_description(const char* value, size_t size);
  std::string* mutable_request_description();
  std::string* release_request_description();
  void set_allocated_request_description(std::string* request_description);
  private:
  const std::string& _internal_request_description() const;
  void _internal_set_request_description(const std::string& value);
  std::string* _internal_mutable_request_description();
  public:

  // bytes requester_verify_key = 7;
  void clear_requester_verify_key();
  const std::string& requester_verify_key() const;
  void set_requester_verify_key(const std::string& value);
  void set_requester_verify_key(std::string&& value);
  void set_requester_verify_key(const char* value);
  void set_requester_verify_key(const void* value, size_t size);
  std::string* mutable_requester_verify_key();
  std::string* release_requester_verify_key();
  void set_allocated_requester_verify_key(std::string* requester_verify_key);
  private:
  const std::string& _internal_requester_verify_key() const;
  void _internal_set_requester_verify_key(const std::string& value);
  std::string* _internal_mutable_requester_verify_key();
  public:

  // .syft.core.common.UID request_id = 1;
  bool has_request_id() const;
  private:
  bool _internal_has_request_id() const;
  public:
  void clear_request_id();
  const ::syft::core::common::UID& request_id() const;
  ::syft::core::common::UID* release_request_id();
  ::syft::core::common::UID* mutable_request_id();
  void set_allocated_request_id(::syft::core::common::UID* request_id);
  private:
  const ::syft::core::common::UID& _internal_request_id() const;
  ::syft::core::common::UID* _internal_mutable_request_id();
  public:
  void unsafe_arena_set_allocated_request_id(
      ::syft::core::common::UID* request_id);
  ::syft::core::common::UID* unsafe_arena_release_request_id();

  // .syft.core.common.UID object_id = 2;
  bool has_object_id() const;
  private:
  bool _internal_has_object_id() const;
  public:
  void clear_object_id();
  const ::syft::core::common::UID& object_id() const;
  ::syft::core::common::UID* release_object_id();
  ::syft::core::common::UID* mutable_object_id();
  void set_allocated_object_id(::syft::core::common::UID* object_id);
  private:
  const ::syft::core::common::UID& _internal_object_id() const;
  ::syft::core::common::UID* _internal_mutable_object_id();
  public:
  void unsafe_arena_set_allocated_object_id(
      ::syft::core::common::UID* object_id);
  ::syft::core::common::UID* unsafe_arena_release_object_id();

  // .syft.core.io.Address target_address = 5;
  bool has_target_address() const;
  private:
  bool _internal_has_target_address() const;
  public:
  void clear_target_address();
  const ::syft::core::io::Address& target_address() const;
  ::syft::core::io::Address* release_target_address();
  ::syft::core::io::Address* mutable_target_address();
  void set_allocated_target_address(::syft::core::io::Address* target_address);
  private:
  const ::syft::core::io::Address& _internal_target_address() const;
  ::syft::core::io::Address* _internal_mutable_target_address();
  public:
  void unsafe_arena_set_allocated_target_address(
      ::syft::core::io::Address* target_address);
  ::syft::core::io::Address* unsafe_arena_release_target_address();

  // .syft.core.io.Address owner_address = 6;
  bool has_owner_address() const;
  private:
  bool _internal_has_owner_address() const;
  public:
  void clear_owner_address();
  const ::syft::core::io::Address& owner_address() const;
  ::syft::core::io::Address* release_owner_address();
  ::syft::core::io::Address* mutable_owner_address();
  void set_allocated_owner_address(::syft::core::io::Address* owner_address);
  private:
  const ::syft::core::io::Address& _internal_owner_address() const;
  ::syft::core::io::Address* _internal_mutable_owner_address();
  public:
  void unsafe_arena_set_allocated_owner_address(
      ::syft::core::io::Address* owner_address);
  ::syft::core::io::Address* unsafe_arena_release_owner_address();

  // @@protoc_insertion_point(class_scope:syft.core.node.domain.service.RequestMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr request_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr request_description_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr requester_verify_key_;
  ::syft::core::common::UID* request_id_;
  ::syft::core::common::UID* object_id_;
  ::syft::core::io::Address* target_address_;
  ::syft::core::io::Address* owner_address_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RequestMessage

// .syft.core.common.UID request_id = 1;
inline bool RequestMessage::_internal_has_request_id() const {
  return this != internal_default_instance() && request_id_ != nullptr;
}
inline bool RequestMessage::has_request_id() const {
  return _internal_has_request_id();
}
inline const ::syft::core::common::UID& RequestMessage::_internal_request_id() const {
  const ::syft::core::common::UID* p = request_id_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::common::UID&>(
      ::syft::core::common::_UID_default_instance_);
}
inline const ::syft::core::common::UID& RequestMessage::request_id() const {
  // @@protoc_insertion_point(field_get:syft.core.node.domain.service.RequestMessage.request_id)
  return _internal_request_id();
}
inline void RequestMessage::unsafe_arena_set_allocated_request_id(
    ::syft::core::common::UID* request_id) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(request_id_);
  }
  request_id_ = request_id;
  if (request_id) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.domain.service.RequestMessage.request_id)
}
inline ::syft::core::common::UID* RequestMessage::release_request_id() {
  
  ::syft::core::common::UID* temp = request_id_;
  request_id_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::common::UID* RequestMessage::unsafe_arena_release_request_id() {
  // @@protoc_insertion_point(field_release:syft.core.node.domain.service.RequestMessage.request_id)
  
  ::syft::core::common::UID* temp = request_id_;
  request_id_ = nullptr;
  return temp;
}
inline ::syft::core::common::UID* RequestMessage::_internal_mutable_request_id() {
  
  if (request_id_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::common::UID>(GetArena());
    request_id_ = p;
  }
  return request_id_;
}
inline ::syft::core::common::UID* RequestMessage::mutable_request_id() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.domain.service.RequestMessage.request_id)
  return _internal_mutable_request_id();
}
inline void RequestMessage::set_allocated_request_id(::syft::core::common::UID* request_id) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(request_id_);
  }
  if (request_id) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(request_id)->GetArena();
    if (message_arena != submessage_arena) {
      request_id = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, request_id, submessage_arena);
    }
    
  } else {
    
  }
  request_id_ = request_id;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.domain.service.RequestMessage.request_id)
}

// .syft.core.common.UID object_id = 2;
inline bool RequestMessage::_internal_has_object_id() const {
  return this != internal_default_instance() && object_id_ != nullptr;
}
inline bool RequestMessage::has_object_id() const {
  return _internal_has_object_id();
}
inline const ::syft::core::common::UID& RequestMessage::_internal_object_id() const {
  const ::syft::core::common::UID* p = object_id_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::common::UID&>(
      ::syft::core::common::_UID_default_instance_);
}
inline const ::syft::core::common::UID& RequestMessage::object_id() const {
  // @@protoc_insertion_point(field_get:syft.core.node.domain.service.RequestMessage.object_id)
  return _internal_object_id();
}
inline void RequestMessage::unsafe_arena_set_allocated_object_id(
    ::syft::core::common::UID* object_id) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(object_id_);
  }
  object_id_ = object_id;
  if (object_id) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.domain.service.RequestMessage.object_id)
}
inline ::syft::core::common::UID* RequestMessage::release_object_id() {
  
  ::syft::core::common::UID* temp = object_id_;
  object_id_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::common::UID* RequestMessage::unsafe_arena_release_object_id() {
  // @@protoc_insertion_point(field_release:syft.core.node.domain.service.RequestMessage.object_id)
  
  ::syft::core::common::UID* temp = object_id_;
  object_id_ = nullptr;
  return temp;
}
inline ::syft::core::common::UID* RequestMessage::_internal_mutable_object_id() {
  
  if (object_id_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::common::UID>(GetArena());
    object_id_ = p;
  }
  return object_id_;
}
inline ::syft::core::common::UID* RequestMessage::mutable_object_id() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.domain.service.RequestMessage.object_id)
  return _internal_mutable_object_id();
}
inline void RequestMessage::set_allocated_object_id(::syft::core::common::UID* object_id) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(object_id_);
  }
  if (object_id) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(object_id)->GetArena();
    if (message_arena != submessage_arena) {
      object_id = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, object_id, submessage_arena);
    }
    
  } else {
    
  }
  object_id_ = object_id;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.domain.service.RequestMessage.object_id)
}

// string request_name = 3;
inline void RequestMessage::clear_request_name() {
  request_name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& RequestMessage::request_name() const {
  // @@protoc_insertion_point(field_get:syft.core.node.domain.service.RequestMessage.request_name)
  return _internal_request_name();
}
inline void RequestMessage::set_request_name(const std::string& value) {
  _internal_set_request_name(value);
  // @@protoc_insertion_point(field_set:syft.core.node.domain.service.RequestMessage.request_name)
}
inline std::string* RequestMessage::mutable_request_name() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.domain.service.RequestMessage.request_name)
  return _internal_mutable_request_name();
}
inline const std::string& RequestMessage::_internal_request_name() const {
  return request_name_.Get();
}
inline void RequestMessage::_internal_set_request_name(const std::string& value) {
  
  request_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void RequestMessage::set_request_name(std::string&& value) {
  
  request_name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:syft.core.node.domain.service.RequestMessage.request_name)
}
inline void RequestMessage::set_request_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  request_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:syft.core.node.domain.service.RequestMessage.request_name)
}
inline void RequestMessage::set_request_name(const char* value,
    size_t size) {
  
  request_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:syft.core.node.domain.service.RequestMessage.request_name)
}
inline std::string* RequestMessage::_internal_mutable_request_name() {
  
  return request_name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* RequestMessage::release_request_name() {
  // @@protoc_insertion_point(field_release:syft.core.node.domain.service.RequestMessage.request_name)
  return request_name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void RequestMessage::set_allocated_request_name(std::string* request_name) {
  if (request_name != nullptr) {
    
  } else {
    
  }
  request_name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), request_name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.domain.service.RequestMessage.request_name)
}

// string request_description = 4;
inline void RequestMessage::clear_request_description() {
  request_description_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& RequestMessage::request_description() const {
  // @@protoc_insertion_point(field_get:syft.core.node.domain.service.RequestMessage.request_description)
  return _internal_request_description();
}
inline void RequestMessage::set_request_description(const std::string& value) {
  _internal_set_request_description(value);
  // @@protoc_insertion_point(field_set:syft.core.node.domain.service.RequestMessage.request_description)
}
inline std::string* RequestMessage::mutable_request_description() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.domain.service.RequestMessage.request_description)
  return _internal_mutable_request_description();
}
inline const std::string& RequestMessage::_internal_request_description() const {
  return request_description_.Get();
}
inline void RequestMessage::_internal_set_request_description(const std::string& value) {
  
  request_description_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void RequestMessage::set_request_description(std::string&& value) {
  
  request_description_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:syft.core.node.domain.service.RequestMessage.request_description)
}
inline void RequestMessage::set_request_description(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  request_description_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:syft.core.node.domain.service.RequestMessage.request_description)
}
inline void RequestMessage::set_request_description(const char* value,
    size_t size) {
  
  request_description_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:syft.core.node.domain.service.RequestMessage.request_description)
}
inline std::string* RequestMessage::_internal_mutable_request_description() {
  
  return request_description_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* RequestMessage::release_request_description() {
  // @@protoc_insertion_point(field_release:syft.core.node.domain.service.RequestMessage.request_description)
  return request_description_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void RequestMessage::set_allocated_request_description(std::string* request_description) {
  if (request_description != nullptr) {
    
  } else {
    
  }
  request_description_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), request_description,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.domain.service.RequestMessage.request_description)
}

// .syft.core.io.Address target_address = 5;
inline bool RequestMessage::_internal_has_target_address() const {
  return this != internal_default_instance() && target_address_ != nullptr;
}
inline bool RequestMessage::has_target_address() const {
  return _internal_has_target_address();
}
inline const ::syft::core::io::Address& RequestMessage::_internal_target_address() const {
  const ::syft::core::io::Address* p = target_address_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::io::Address&>(
      ::syft::core::io::_Address_default_instance_);
}
inline const ::syft::core::io::Address& RequestMessage::target_address() const {
  // @@protoc_insertion_point(field_get:syft.core.node.domain.service.RequestMessage.target_address)
  return _internal_target_address();
}
inline void RequestMessage::unsafe_arena_set_allocated_target_address(
    ::syft::core::io::Address* target_address) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(target_address_);
  }
  target_address_ = target_address;
  if (target_address) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.domain.service.RequestMessage.target_address)
}
inline ::syft::core::io::Address* RequestMessage::release_target_address() {
  
  ::syft::core::io::Address* temp = target_address_;
  target_address_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::io::Address* RequestMessage::unsafe_arena_release_target_address() {
  // @@protoc_insertion_point(field_release:syft.core.node.domain.service.RequestMessage.target_address)
  
  ::syft::core::io::Address* temp = target_address_;
  target_address_ = nullptr;
  return temp;
}
inline ::syft::core::io::Address* RequestMessage::_internal_mutable_target_address() {
  
  if (target_address_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::io::Address>(GetArena());
    target_address_ = p;
  }
  return target_address_;
}
inline ::syft::core::io::Address* RequestMessage::mutable_target_address() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.domain.service.RequestMessage.target_address)
  return _internal_mutable_target_address();
}
inline void RequestMessage::set_allocated_target_address(::syft::core::io::Address* target_address) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(target_address_);
  }
  if (target_address) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(target_address)->GetArena();
    if (message_arena != submessage_arena) {
      target_address = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, target_address, submessage_arena);
    }
    
  } else {
    
  }
  target_address_ = target_address;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.domain.service.RequestMessage.target_address)
}

// .syft.core.io.Address owner_address = 6;
inline bool RequestMessage::_internal_has_owner_address() const {
  return this != internal_default_instance() && owner_address_ != nullptr;
}
inline bool RequestMessage::has_owner_address() const {
  return _internal_has_owner_address();
}
inline const ::syft::core::io::Address& RequestMessage::_internal_owner_address() const {
  const ::syft::core::io::Address* p = owner_address_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::io::Address&>(
      ::syft::core::io::_Address_default_instance_);
}
inline const ::syft::core::io::Address& RequestMessage::owner_address() const {
  // @@protoc_insertion_point(field_get:syft.core.node.domain.service.RequestMessage.owner_address)
  return _internal_owner_address();
}
inline void RequestMessage::unsafe_arena_set_allocated_owner_address(
    ::syft::core::io::Address* owner_address) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(owner_address_);
  }
  owner_address_ = owner_address;
  if (owner_address) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.domain.service.RequestMessage.owner_address)
}
inline ::syft::core::io::Address* RequestMessage::release_owner_address() {
  
  ::syft::core::io::Address* temp = owner_address_;
  owner_address_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::io::Address* RequestMessage::unsafe_arena_release_owner_address() {
  // @@protoc_insertion_point(field_release:syft.core.node.domain.service.RequestMessage.owner_address)
  
  ::syft::core::io::Address* temp = owner_address_;
  owner_address_ = nullptr;
  return temp;
}
inline ::syft::core::io::Address* RequestMessage::_internal_mutable_owner_address() {
  
  if (owner_address_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::io::Address>(GetArena());
    owner_address_ = p;
  }
  return owner_address_;
}
inline ::syft::core::io::Address* RequestMessage::mutable_owner_address() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.domain.service.RequestMessage.owner_address)
  return _internal_mutable_owner_address();
}
inline void RequestMessage::set_allocated_owner_address(::syft::core::io::Address* owner_address) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(owner_address_);
  }
  if (owner_address) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(owner_address)->GetArena();
    if (message_arena != submessage_arena) {
      owner_address = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, owner_address, submessage_arena);
    }
    
  } else {
    
  }
  owner_address_ = owner_address;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.domain.service.RequestMessage.owner_address)
}

// bytes requester_verify_key = 7;
inline void RequestMessage::clear_requester_verify_key() {
  requester_verify_key_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& RequestMessage::requester_verify_key() const {
  // @@protoc_insertion_point(field_get:syft.core.node.domain.service.RequestMessage.requester_verify_key)
  return _internal_requester_verify_key();
}
inline void RequestMessage::set_requester_verify_key(const std::string& value) {
  _internal_set_requester_verify_key(value);
  // @@protoc_insertion_point(field_set:syft.core.node.domain.service.RequestMessage.requester_verify_key)
}
inline std::string* RequestMessage::mutable_requester_verify_key() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.domain.service.RequestMessage.requester_verify_key)
  return _internal_mutable_requester_verify_key();
}
inline const std::string& RequestMessage::_internal_requester_verify_key() const {
  return requester_verify_key_.Get();
}
inline void RequestMessage::_internal_set_requester_verify_key(const std::string& value) {
  
  requester_verify_key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void RequestMessage::set_requester_verify_key(std::string&& value) {
  
  requester_verify_key_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:syft.core.node.domain.service.RequestMessage.requester_verify_key)
}
inline void RequestMessage::set_requester_verify_key(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  requester_verify_key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:syft.core.node.domain.service.RequestMessage.requester_verify_key)
}
inline void RequestMessage::set_requester_verify_key(const void* value,
    size_t size) {
  
  requester_verify_key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:syft.core.node.domain.service.RequestMessage.requester_verify_key)
}
inline std::string* RequestMessage::_internal_mutable_requester_verify_key() {
  
  return requester_verify_key_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* RequestMessage::release_requester_verify_key() {
  // @@protoc_insertion_point(field_release:syft.core.node.domain.service.RequestMessage.requester_verify_key)
  return requester_verify_key_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void RequestMessage::set_allocated_requester_verify_key(std::string* requester_verify_key) {
  if (requester_verify_key != nullptr) {
    
  } else {
    
  }
  requester_verify_key_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), requester_verify_key,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.domain.service.RequestMessage.requester_verify_key)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace service
}  // namespace domain
}  // namespace node
}  // namespace core
}  // namespace syft

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto