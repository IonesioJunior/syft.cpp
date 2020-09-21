// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/core/node/common/service/object_search_message.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fcore_2fnode_2fcommon_2fservice_2fobject_5fsearch_5fmessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fcore_2fnode_2fcommon_2fservice_2fobject_5fsearch_5fmessage_2eproto

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
#include "proto/core/pointer/pointer.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fcore_2fnode_2fcommon_2fservice_2fobject_5fsearch_5fmessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fcore_2fnode_2fcommon_2fservice_2fobject_5fsearch_5fmessage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fcore_2fnode_2fcommon_2fservice_2fobject_5fsearch_5fmessage_2eproto;
namespace syft {
namespace core {
namespace node {
namespace common {
namespace service {
class ObjectSearchMessage;
class ObjectSearchMessageDefaultTypeInternal;
extern ObjectSearchMessageDefaultTypeInternal _ObjectSearchMessage_default_instance_;
class ObjectSearchReplyMessage;
class ObjectSearchReplyMessageDefaultTypeInternal;
extern ObjectSearchReplyMessageDefaultTypeInternal _ObjectSearchReplyMessage_default_instance_;
}  // namespace service
}  // namespace common
}  // namespace node
}  // namespace core
}  // namespace syft
PROTOBUF_NAMESPACE_OPEN
template<> ::syft::core::node::common::service::ObjectSearchMessage* Arena::CreateMaybeMessage<::syft::core::node::common::service::ObjectSearchMessage>(Arena*);
template<> ::syft::core::node::common::service::ObjectSearchReplyMessage* Arena::CreateMaybeMessage<::syft::core::node::common::service::ObjectSearchReplyMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace syft {
namespace core {
namespace node {
namespace common {
namespace service {

// ===================================================================

class ObjectSearchMessage PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:syft.core.node.common.service.ObjectSearchMessage) */ {
 public:
  inline ObjectSearchMessage() : ObjectSearchMessage(nullptr) {}
  virtual ~ObjectSearchMessage();

  ObjectSearchMessage(const ObjectSearchMessage& from);
  ObjectSearchMessage(ObjectSearchMessage&& from) noexcept
    : ObjectSearchMessage() {
    *this = ::std::move(from);
  }

  inline ObjectSearchMessage& operator=(const ObjectSearchMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline ObjectSearchMessage& operator=(ObjectSearchMessage&& from) noexcept {
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
  static const ObjectSearchMessage& default_instance();

  static inline const ObjectSearchMessage* internal_default_instance() {
    return reinterpret_cast<const ObjectSearchMessage*>(
               &_ObjectSearchMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ObjectSearchMessage& a, ObjectSearchMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(ObjectSearchMessage* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ObjectSearchMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ObjectSearchMessage* New() const final {
    return CreateMaybeMessage<ObjectSearchMessage>(nullptr);
  }

  ObjectSearchMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ObjectSearchMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ObjectSearchMessage& from);
  void MergeFrom(const ObjectSearchMessage& from);
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
  void InternalSwap(ObjectSearchMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "syft.core.node.common.service.ObjectSearchMessage";
  }
  protected:
  explicit ObjectSearchMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fcore_2fnode_2fcommon_2fservice_2fobject_5fsearch_5fmessage_2eproto);
    return ::descriptor_table_proto_2fcore_2fnode_2fcommon_2fservice_2fobject_5fsearch_5fmessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsgIdFieldNumber = 1,
    kAddressFieldNumber = 2,
    kReplyToFieldNumber = 3,
  };
  // .syft.core.common.UID msg_id = 1;
  bool has_msg_id() const;
  private:
  bool _internal_has_msg_id() const;
  public:
  void clear_msg_id();
  const ::syft::core::common::UID& msg_id() const;
  ::syft::core::common::UID* release_msg_id();
  ::syft::core::common::UID* mutable_msg_id();
  void set_allocated_msg_id(::syft::core::common::UID* msg_id);
  private:
  const ::syft::core::common::UID& _internal_msg_id() const;
  ::syft::core::common::UID* _internal_mutable_msg_id();
  public:
  void unsafe_arena_set_allocated_msg_id(
      ::syft::core::common::UID* msg_id);
  ::syft::core::common::UID* unsafe_arena_release_msg_id();

  // .syft.core.io.Address address = 2;
  bool has_address() const;
  private:
  bool _internal_has_address() const;
  public:
  void clear_address();
  const ::syft::core::io::Address& address() const;
  ::syft::core::io::Address* release_address();
  ::syft::core::io::Address* mutable_address();
  void set_allocated_address(::syft::core::io::Address* address);
  private:
  const ::syft::core::io::Address& _internal_address() const;
  ::syft::core::io::Address* _internal_mutable_address();
  public:
  void unsafe_arena_set_allocated_address(
      ::syft::core::io::Address* address);
  ::syft::core::io::Address* unsafe_arena_release_address();

  // .syft.core.io.Address reply_to = 3;
  bool has_reply_to() const;
  private:
  bool _internal_has_reply_to() const;
  public:
  void clear_reply_to();
  const ::syft::core::io::Address& reply_to() const;
  ::syft::core::io::Address* release_reply_to();
  ::syft::core::io::Address* mutable_reply_to();
  void set_allocated_reply_to(::syft::core::io::Address* reply_to);
  private:
  const ::syft::core::io::Address& _internal_reply_to() const;
  ::syft::core::io::Address* _internal_mutable_reply_to();
  public:
  void unsafe_arena_set_allocated_reply_to(
      ::syft::core::io::Address* reply_to);
  ::syft::core::io::Address* unsafe_arena_release_reply_to();

  // @@protoc_insertion_point(class_scope:syft.core.node.common.service.ObjectSearchMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::syft::core::common::UID* msg_id_;
  ::syft::core::io::Address* address_;
  ::syft::core::io::Address* reply_to_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fcore_2fnode_2fcommon_2fservice_2fobject_5fsearch_5fmessage_2eproto;
};
// -------------------------------------------------------------------

class ObjectSearchReplyMessage PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:syft.core.node.common.service.ObjectSearchReplyMessage) */ {
 public:
  inline ObjectSearchReplyMessage() : ObjectSearchReplyMessage(nullptr) {}
  virtual ~ObjectSearchReplyMessage();

  ObjectSearchReplyMessage(const ObjectSearchReplyMessage& from);
  ObjectSearchReplyMessage(ObjectSearchReplyMessage&& from) noexcept
    : ObjectSearchReplyMessage() {
    *this = ::std::move(from);
  }

  inline ObjectSearchReplyMessage& operator=(const ObjectSearchReplyMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline ObjectSearchReplyMessage& operator=(ObjectSearchReplyMessage&& from) noexcept {
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
  static const ObjectSearchReplyMessage& default_instance();

  static inline const ObjectSearchReplyMessage* internal_default_instance() {
    return reinterpret_cast<const ObjectSearchReplyMessage*>(
               &_ObjectSearchReplyMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ObjectSearchReplyMessage& a, ObjectSearchReplyMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(ObjectSearchReplyMessage* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ObjectSearchReplyMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ObjectSearchReplyMessage* New() const final {
    return CreateMaybeMessage<ObjectSearchReplyMessage>(nullptr);
  }

  ObjectSearchReplyMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ObjectSearchReplyMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ObjectSearchReplyMessage& from);
  void MergeFrom(const ObjectSearchReplyMessage& from);
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
  void InternalSwap(ObjectSearchReplyMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "syft.core.node.common.service.ObjectSearchReplyMessage";
  }
  protected:
  explicit ObjectSearchReplyMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fcore_2fnode_2fcommon_2fservice_2fobject_5fsearch_5fmessage_2eproto);
    return ::descriptor_table_proto_2fcore_2fnode_2fcommon_2fservice_2fobject_5fsearch_5fmessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResultsFieldNumber = 3,
    kMsgIdFieldNumber = 1,
    kAddressFieldNumber = 2,
  };
  // repeated .syft.core.pointer.Pointer results = 3;
  int results_size() const;
  private:
  int _internal_results_size() const;
  public:
  void clear_results();
  ::syft::core::pointer::Pointer* mutable_results(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::syft::core::pointer::Pointer >*
      mutable_results();
  private:
  const ::syft::core::pointer::Pointer& _internal_results(int index) const;
  ::syft::core::pointer::Pointer* _internal_add_results();
  public:
  const ::syft::core::pointer::Pointer& results(int index) const;
  ::syft::core::pointer::Pointer* add_results();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::syft::core::pointer::Pointer >&
      results() const;

  // .syft.core.common.UID msg_id = 1;
  bool has_msg_id() const;
  private:
  bool _internal_has_msg_id() const;
  public:
  void clear_msg_id();
  const ::syft::core::common::UID& msg_id() const;
  ::syft::core::common::UID* release_msg_id();
  ::syft::core::common::UID* mutable_msg_id();
  void set_allocated_msg_id(::syft::core::common::UID* msg_id);
  private:
  const ::syft::core::common::UID& _internal_msg_id() const;
  ::syft::core::common::UID* _internal_mutable_msg_id();
  public:
  void unsafe_arena_set_allocated_msg_id(
      ::syft::core::common::UID* msg_id);
  ::syft::core::common::UID* unsafe_arena_release_msg_id();

  // .syft.core.io.Address address = 2;
  bool has_address() const;
  private:
  bool _internal_has_address() const;
  public:
  void clear_address();
  const ::syft::core::io::Address& address() const;
  ::syft::core::io::Address* release_address();
  ::syft::core::io::Address* mutable_address();
  void set_allocated_address(::syft::core::io::Address* address);
  private:
  const ::syft::core::io::Address& _internal_address() const;
  ::syft::core::io::Address* _internal_mutable_address();
  public:
  void unsafe_arena_set_allocated_address(
      ::syft::core::io::Address* address);
  ::syft::core::io::Address* unsafe_arena_release_address();

  // @@protoc_insertion_point(class_scope:syft.core.node.common.service.ObjectSearchReplyMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::syft::core::pointer::Pointer > results_;
  ::syft::core::common::UID* msg_id_;
  ::syft::core::io::Address* address_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fcore_2fnode_2fcommon_2fservice_2fobject_5fsearch_5fmessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ObjectSearchMessage

// .syft.core.common.UID msg_id = 1;
inline bool ObjectSearchMessage::_internal_has_msg_id() const {
  return this != internal_default_instance() && msg_id_ != nullptr;
}
inline bool ObjectSearchMessage::has_msg_id() const {
  return _internal_has_msg_id();
}
inline const ::syft::core::common::UID& ObjectSearchMessage::_internal_msg_id() const {
  const ::syft::core::common::UID* p = msg_id_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::common::UID&>(
      ::syft::core::common::_UID_default_instance_);
}
inline const ::syft::core::common::UID& ObjectSearchMessage::msg_id() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.service.ObjectSearchMessage.msg_id)
  return _internal_msg_id();
}
inline void ObjectSearchMessage::unsafe_arena_set_allocated_msg_id(
    ::syft::core::common::UID* msg_id) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(msg_id_);
  }
  msg_id_ = msg_id;
  if (msg_id) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.service.ObjectSearchMessage.msg_id)
}
inline ::syft::core::common::UID* ObjectSearchMessage::release_msg_id() {
  
  ::syft::core::common::UID* temp = msg_id_;
  msg_id_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::common::UID* ObjectSearchMessage::unsafe_arena_release_msg_id() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.service.ObjectSearchMessage.msg_id)
  
  ::syft::core::common::UID* temp = msg_id_;
  msg_id_ = nullptr;
  return temp;
}
inline ::syft::core::common::UID* ObjectSearchMessage::_internal_mutable_msg_id() {
  
  if (msg_id_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::common::UID>(GetArena());
    msg_id_ = p;
  }
  return msg_id_;
}
inline ::syft::core::common::UID* ObjectSearchMessage::mutable_msg_id() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.service.ObjectSearchMessage.msg_id)
  return _internal_mutable_msg_id();
}
inline void ObjectSearchMessage::set_allocated_msg_id(::syft::core::common::UID* msg_id) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(msg_id_);
  }
  if (msg_id) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(msg_id)->GetArena();
    if (message_arena != submessage_arena) {
      msg_id = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, msg_id, submessage_arena);
    }
    
  } else {
    
  }
  msg_id_ = msg_id;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.service.ObjectSearchMessage.msg_id)
}

// .syft.core.io.Address address = 2;
inline bool ObjectSearchMessage::_internal_has_address() const {
  return this != internal_default_instance() && address_ != nullptr;
}
inline bool ObjectSearchMessage::has_address() const {
  return _internal_has_address();
}
inline const ::syft::core::io::Address& ObjectSearchMessage::_internal_address() const {
  const ::syft::core::io::Address* p = address_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::io::Address&>(
      ::syft::core::io::_Address_default_instance_);
}
inline const ::syft::core::io::Address& ObjectSearchMessage::address() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.service.ObjectSearchMessage.address)
  return _internal_address();
}
inline void ObjectSearchMessage::unsafe_arena_set_allocated_address(
    ::syft::core::io::Address* address) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(address_);
  }
  address_ = address;
  if (address) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.service.ObjectSearchMessage.address)
}
inline ::syft::core::io::Address* ObjectSearchMessage::release_address() {
  
  ::syft::core::io::Address* temp = address_;
  address_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::io::Address* ObjectSearchMessage::unsafe_arena_release_address() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.service.ObjectSearchMessage.address)
  
  ::syft::core::io::Address* temp = address_;
  address_ = nullptr;
  return temp;
}
inline ::syft::core::io::Address* ObjectSearchMessage::_internal_mutable_address() {
  
  if (address_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::io::Address>(GetArena());
    address_ = p;
  }
  return address_;
}
inline ::syft::core::io::Address* ObjectSearchMessage::mutable_address() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.service.ObjectSearchMessage.address)
  return _internal_mutable_address();
}
inline void ObjectSearchMessage::set_allocated_address(::syft::core::io::Address* address) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(address_);
  }
  if (address) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(address)->GetArena();
    if (message_arena != submessage_arena) {
      address = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, address, submessage_arena);
    }
    
  } else {
    
  }
  address_ = address;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.service.ObjectSearchMessage.address)
}

// .syft.core.io.Address reply_to = 3;
inline bool ObjectSearchMessage::_internal_has_reply_to() const {
  return this != internal_default_instance() && reply_to_ != nullptr;
}
inline bool ObjectSearchMessage::has_reply_to() const {
  return _internal_has_reply_to();
}
inline const ::syft::core::io::Address& ObjectSearchMessage::_internal_reply_to() const {
  const ::syft::core::io::Address* p = reply_to_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::io::Address&>(
      ::syft::core::io::_Address_default_instance_);
}
inline const ::syft::core::io::Address& ObjectSearchMessage::reply_to() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.service.ObjectSearchMessage.reply_to)
  return _internal_reply_to();
}
inline void ObjectSearchMessage::unsafe_arena_set_allocated_reply_to(
    ::syft::core::io::Address* reply_to) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(reply_to_);
  }
  reply_to_ = reply_to;
  if (reply_to) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.service.ObjectSearchMessage.reply_to)
}
inline ::syft::core::io::Address* ObjectSearchMessage::release_reply_to() {
  
  ::syft::core::io::Address* temp = reply_to_;
  reply_to_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::io::Address* ObjectSearchMessage::unsafe_arena_release_reply_to() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.service.ObjectSearchMessage.reply_to)
  
  ::syft::core::io::Address* temp = reply_to_;
  reply_to_ = nullptr;
  return temp;
}
inline ::syft::core::io::Address* ObjectSearchMessage::_internal_mutable_reply_to() {
  
  if (reply_to_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::io::Address>(GetArena());
    reply_to_ = p;
  }
  return reply_to_;
}
inline ::syft::core::io::Address* ObjectSearchMessage::mutable_reply_to() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.service.ObjectSearchMessage.reply_to)
  return _internal_mutable_reply_to();
}
inline void ObjectSearchMessage::set_allocated_reply_to(::syft::core::io::Address* reply_to) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(reply_to_);
  }
  if (reply_to) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(reply_to)->GetArena();
    if (message_arena != submessage_arena) {
      reply_to = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, reply_to, submessage_arena);
    }
    
  } else {
    
  }
  reply_to_ = reply_to;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.service.ObjectSearchMessage.reply_to)
}

// -------------------------------------------------------------------

// ObjectSearchReplyMessage

// .syft.core.common.UID msg_id = 1;
inline bool ObjectSearchReplyMessage::_internal_has_msg_id() const {
  return this != internal_default_instance() && msg_id_ != nullptr;
}
inline bool ObjectSearchReplyMessage::has_msg_id() const {
  return _internal_has_msg_id();
}
inline const ::syft::core::common::UID& ObjectSearchReplyMessage::_internal_msg_id() const {
  const ::syft::core::common::UID* p = msg_id_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::common::UID&>(
      ::syft::core::common::_UID_default_instance_);
}
inline const ::syft::core::common::UID& ObjectSearchReplyMessage::msg_id() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.service.ObjectSearchReplyMessage.msg_id)
  return _internal_msg_id();
}
inline void ObjectSearchReplyMessage::unsafe_arena_set_allocated_msg_id(
    ::syft::core::common::UID* msg_id) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(msg_id_);
  }
  msg_id_ = msg_id;
  if (msg_id) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.service.ObjectSearchReplyMessage.msg_id)
}
inline ::syft::core::common::UID* ObjectSearchReplyMessage::release_msg_id() {
  
  ::syft::core::common::UID* temp = msg_id_;
  msg_id_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::common::UID* ObjectSearchReplyMessage::unsafe_arena_release_msg_id() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.service.ObjectSearchReplyMessage.msg_id)
  
  ::syft::core::common::UID* temp = msg_id_;
  msg_id_ = nullptr;
  return temp;
}
inline ::syft::core::common::UID* ObjectSearchReplyMessage::_internal_mutable_msg_id() {
  
  if (msg_id_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::common::UID>(GetArena());
    msg_id_ = p;
  }
  return msg_id_;
}
inline ::syft::core::common::UID* ObjectSearchReplyMessage::mutable_msg_id() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.service.ObjectSearchReplyMessage.msg_id)
  return _internal_mutable_msg_id();
}
inline void ObjectSearchReplyMessage::set_allocated_msg_id(::syft::core::common::UID* msg_id) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(msg_id_);
  }
  if (msg_id) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(msg_id)->GetArena();
    if (message_arena != submessage_arena) {
      msg_id = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, msg_id, submessage_arena);
    }
    
  } else {
    
  }
  msg_id_ = msg_id;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.service.ObjectSearchReplyMessage.msg_id)
}

// .syft.core.io.Address address = 2;
inline bool ObjectSearchReplyMessage::_internal_has_address() const {
  return this != internal_default_instance() && address_ != nullptr;
}
inline bool ObjectSearchReplyMessage::has_address() const {
  return _internal_has_address();
}
inline const ::syft::core::io::Address& ObjectSearchReplyMessage::_internal_address() const {
  const ::syft::core::io::Address* p = address_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::io::Address&>(
      ::syft::core::io::_Address_default_instance_);
}
inline const ::syft::core::io::Address& ObjectSearchReplyMessage::address() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.service.ObjectSearchReplyMessage.address)
  return _internal_address();
}
inline void ObjectSearchReplyMessage::unsafe_arena_set_allocated_address(
    ::syft::core::io::Address* address) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(address_);
  }
  address_ = address;
  if (address) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.service.ObjectSearchReplyMessage.address)
}
inline ::syft::core::io::Address* ObjectSearchReplyMessage::release_address() {
  
  ::syft::core::io::Address* temp = address_;
  address_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::io::Address* ObjectSearchReplyMessage::unsafe_arena_release_address() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.service.ObjectSearchReplyMessage.address)
  
  ::syft::core::io::Address* temp = address_;
  address_ = nullptr;
  return temp;
}
inline ::syft::core::io::Address* ObjectSearchReplyMessage::_internal_mutable_address() {
  
  if (address_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::io::Address>(GetArena());
    address_ = p;
  }
  return address_;
}
inline ::syft::core::io::Address* ObjectSearchReplyMessage::mutable_address() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.service.ObjectSearchReplyMessage.address)
  return _internal_mutable_address();
}
inline void ObjectSearchReplyMessage::set_allocated_address(::syft::core::io::Address* address) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(address_);
  }
  if (address) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(address)->GetArena();
    if (message_arena != submessage_arena) {
      address = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, address, submessage_arena);
    }
    
  } else {
    
  }
  address_ = address;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.service.ObjectSearchReplyMessage.address)
}

// repeated .syft.core.pointer.Pointer results = 3;
inline int ObjectSearchReplyMessage::_internal_results_size() const {
  return results_.size();
}
inline int ObjectSearchReplyMessage::results_size() const {
  return _internal_results_size();
}
inline ::syft::core::pointer::Pointer* ObjectSearchReplyMessage::mutable_results(int index) {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.service.ObjectSearchReplyMessage.results)
  return results_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::syft::core::pointer::Pointer >*
ObjectSearchReplyMessage::mutable_results() {
  // @@protoc_insertion_point(field_mutable_list:syft.core.node.common.service.ObjectSearchReplyMessage.results)
  return &results_;
}
inline const ::syft::core::pointer::Pointer& ObjectSearchReplyMessage::_internal_results(int index) const {
  return results_.Get(index);
}
inline const ::syft::core::pointer::Pointer& ObjectSearchReplyMessage::results(int index) const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.service.ObjectSearchReplyMessage.results)
  return _internal_results(index);
}
inline ::syft::core::pointer::Pointer* ObjectSearchReplyMessage::_internal_add_results() {
  return results_.Add();
}
inline ::syft::core::pointer::Pointer* ObjectSearchReplyMessage::add_results() {
  // @@protoc_insertion_point(field_add:syft.core.node.common.service.ObjectSearchReplyMessage.results)
  return _internal_add_results();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::syft::core::pointer::Pointer >&
ObjectSearchReplyMessage::results() const {
  // @@protoc_insertion_point(field_list:syft.core.node.common.service.ObjectSearchReplyMessage.results)
  return results_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace service
}  // namespace common
}  // namespace node
}  // namespace core
}  // namespace syft

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fcore_2fnode_2fcommon_2fservice_2fobject_5fsearch_5fmessage_2eproto