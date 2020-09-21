// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/core/node/common/action/get_object.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fcore_2fnode_2fcommon_2faction_2fget_5fobject_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fcore_2fnode_2fcommon_2faction_2fget_5fobject_2eproto

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
#include "proto/core/store/store_object.pb.h"
#include "proto/core/io/address.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fcore_2fnode_2fcommon_2faction_2fget_5fobject_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fcore_2fnode_2fcommon_2faction_2fget_5fobject_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fcore_2fnode_2fcommon_2faction_2fget_5fobject_2eproto;
namespace syft {
namespace core {
namespace node {
namespace common {
namespace action {
class GetObjectAction;
class GetObjectActionDefaultTypeInternal;
extern GetObjectActionDefaultTypeInternal _GetObjectAction_default_instance_;
class GetObjectResponseMessage;
class GetObjectResponseMessageDefaultTypeInternal;
extern GetObjectResponseMessageDefaultTypeInternal _GetObjectResponseMessage_default_instance_;
}  // namespace action
}  // namespace common
}  // namespace node
}  // namespace core
}  // namespace syft
PROTOBUF_NAMESPACE_OPEN
template<> ::syft::core::node::common::action::GetObjectAction* Arena::CreateMaybeMessage<::syft::core::node::common::action::GetObjectAction>(Arena*);
template<> ::syft::core::node::common::action::GetObjectResponseMessage* Arena::CreateMaybeMessage<::syft::core::node::common::action::GetObjectResponseMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace syft {
namespace core {
namespace node {
namespace common {
namespace action {

// ===================================================================

class GetObjectAction PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:syft.core.node.common.action.GetObjectAction) */ {
 public:
  inline GetObjectAction() : GetObjectAction(nullptr) {}
  virtual ~GetObjectAction();

  GetObjectAction(const GetObjectAction& from);
  GetObjectAction(GetObjectAction&& from) noexcept
    : GetObjectAction() {
    *this = ::std::move(from);
  }

  inline GetObjectAction& operator=(const GetObjectAction& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetObjectAction& operator=(GetObjectAction&& from) noexcept {
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
  static const GetObjectAction& default_instance();

  static inline const GetObjectAction* internal_default_instance() {
    return reinterpret_cast<const GetObjectAction*>(
               &_GetObjectAction_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GetObjectAction& a, GetObjectAction& b) {
    a.Swap(&b);
  }
  inline void Swap(GetObjectAction* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetObjectAction* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GetObjectAction* New() const final {
    return CreateMaybeMessage<GetObjectAction>(nullptr);
  }

  GetObjectAction* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GetObjectAction>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GetObjectAction& from);
  void MergeFrom(const GetObjectAction& from);
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
  void InternalSwap(GetObjectAction* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "syft.core.node.common.action.GetObjectAction";
  }
  protected:
  explicit GetObjectAction(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fcore_2fnode_2fcommon_2faction_2fget_5fobject_2eproto);
    return ::descriptor_table_proto_2fcore_2fnode_2fcommon_2faction_2fget_5fobject_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kObjIdFieldNumber = 1,
    kMsgIdFieldNumber = 2,
    kAddressFieldNumber = 3,
    kReplyToFieldNumber = 4,
  };
  // .syft.core.common.UID obj_id = 1;
  bool has_obj_id() const;
  private:
  bool _internal_has_obj_id() const;
  public:
  void clear_obj_id();
  const ::syft::core::common::UID& obj_id() const;
  ::syft::core::common::UID* release_obj_id();
  ::syft::core::common::UID* mutable_obj_id();
  void set_allocated_obj_id(::syft::core::common::UID* obj_id);
  private:
  const ::syft::core::common::UID& _internal_obj_id() const;
  ::syft::core::common::UID* _internal_mutable_obj_id();
  public:
  void unsafe_arena_set_allocated_obj_id(
      ::syft::core::common::UID* obj_id);
  ::syft::core::common::UID* unsafe_arena_release_obj_id();

  // .syft.core.common.UID msg_id = 2;
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

  // .syft.core.io.Address address = 3;
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

  // .syft.core.io.Address reply_to = 4;
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

  // @@protoc_insertion_point(class_scope:syft.core.node.common.action.GetObjectAction)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::syft::core::common::UID* obj_id_;
  ::syft::core::common::UID* msg_id_;
  ::syft::core::io::Address* address_;
  ::syft::core::io::Address* reply_to_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fcore_2fnode_2fcommon_2faction_2fget_5fobject_2eproto;
};
// -------------------------------------------------------------------

class GetObjectResponseMessage PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:syft.core.node.common.action.GetObjectResponseMessage) */ {
 public:
  inline GetObjectResponseMessage() : GetObjectResponseMessage(nullptr) {}
  virtual ~GetObjectResponseMessage();

  GetObjectResponseMessage(const GetObjectResponseMessage& from);
  GetObjectResponseMessage(GetObjectResponseMessage&& from) noexcept
    : GetObjectResponseMessage() {
    *this = ::std::move(from);
  }

  inline GetObjectResponseMessage& operator=(const GetObjectResponseMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetObjectResponseMessage& operator=(GetObjectResponseMessage&& from) noexcept {
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
  static const GetObjectResponseMessage& default_instance();

  static inline const GetObjectResponseMessage* internal_default_instance() {
    return reinterpret_cast<const GetObjectResponseMessage*>(
               &_GetObjectResponseMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GetObjectResponseMessage& a, GetObjectResponseMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(GetObjectResponseMessage* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetObjectResponseMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GetObjectResponseMessage* New() const final {
    return CreateMaybeMessage<GetObjectResponseMessage>(nullptr);
  }

  GetObjectResponseMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GetObjectResponseMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GetObjectResponseMessage& from);
  void MergeFrom(const GetObjectResponseMessage& from);
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
  void InternalSwap(GetObjectResponseMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "syft.core.node.common.action.GetObjectResponseMessage";
  }
  protected:
  explicit GetObjectResponseMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fcore_2fnode_2fcommon_2faction_2fget_5fobject_2eproto);
    return ::descriptor_table_proto_2fcore_2fnode_2fcommon_2faction_2fget_5fobject_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsgIdFieldNumber = 1,
    kObjFieldNumber = 2,
    kAddressFieldNumber = 3,
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

  // .syft.core.store.StorableObject obj = 2;
  bool has_obj() const;
  private:
  bool _internal_has_obj() const;
  public:
  void clear_obj();
  const ::syft::core::store::StorableObject& obj() const;
  ::syft::core::store::StorableObject* release_obj();
  ::syft::core::store::StorableObject* mutable_obj();
  void set_allocated_obj(::syft::core::store::StorableObject* obj);
  private:
  const ::syft::core::store::StorableObject& _internal_obj() const;
  ::syft::core::store::StorableObject* _internal_mutable_obj();
  public:
  void unsafe_arena_set_allocated_obj(
      ::syft::core::store::StorableObject* obj);
  ::syft::core::store::StorableObject* unsafe_arena_release_obj();

  // .syft.core.io.Address address = 3;
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

  // @@protoc_insertion_point(class_scope:syft.core.node.common.action.GetObjectResponseMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::syft::core::common::UID* msg_id_;
  ::syft::core::store::StorableObject* obj_;
  ::syft::core::io::Address* address_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fcore_2fnode_2fcommon_2faction_2fget_5fobject_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GetObjectAction

// .syft.core.common.UID obj_id = 1;
inline bool GetObjectAction::_internal_has_obj_id() const {
  return this != internal_default_instance() && obj_id_ != nullptr;
}
inline bool GetObjectAction::has_obj_id() const {
  return _internal_has_obj_id();
}
inline const ::syft::core::common::UID& GetObjectAction::_internal_obj_id() const {
  const ::syft::core::common::UID* p = obj_id_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::common::UID&>(
      ::syft::core::common::_UID_default_instance_);
}
inline const ::syft::core::common::UID& GetObjectAction::obj_id() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.action.GetObjectAction.obj_id)
  return _internal_obj_id();
}
inline void GetObjectAction::unsafe_arena_set_allocated_obj_id(
    ::syft::core::common::UID* obj_id) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(obj_id_);
  }
  obj_id_ = obj_id;
  if (obj_id) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.action.GetObjectAction.obj_id)
}
inline ::syft::core::common::UID* GetObjectAction::release_obj_id() {
  
  ::syft::core::common::UID* temp = obj_id_;
  obj_id_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::common::UID* GetObjectAction::unsafe_arena_release_obj_id() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.action.GetObjectAction.obj_id)
  
  ::syft::core::common::UID* temp = obj_id_;
  obj_id_ = nullptr;
  return temp;
}
inline ::syft::core::common::UID* GetObjectAction::_internal_mutable_obj_id() {
  
  if (obj_id_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::common::UID>(GetArena());
    obj_id_ = p;
  }
  return obj_id_;
}
inline ::syft::core::common::UID* GetObjectAction::mutable_obj_id() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.action.GetObjectAction.obj_id)
  return _internal_mutable_obj_id();
}
inline void GetObjectAction::set_allocated_obj_id(::syft::core::common::UID* obj_id) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(obj_id_);
  }
  if (obj_id) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(obj_id)->GetArena();
    if (message_arena != submessage_arena) {
      obj_id = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, obj_id, submessage_arena);
    }
    
  } else {
    
  }
  obj_id_ = obj_id;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.action.GetObjectAction.obj_id)
}

// .syft.core.common.UID msg_id = 2;
inline bool GetObjectAction::_internal_has_msg_id() const {
  return this != internal_default_instance() && msg_id_ != nullptr;
}
inline bool GetObjectAction::has_msg_id() const {
  return _internal_has_msg_id();
}
inline const ::syft::core::common::UID& GetObjectAction::_internal_msg_id() const {
  const ::syft::core::common::UID* p = msg_id_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::common::UID&>(
      ::syft::core::common::_UID_default_instance_);
}
inline const ::syft::core::common::UID& GetObjectAction::msg_id() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.action.GetObjectAction.msg_id)
  return _internal_msg_id();
}
inline void GetObjectAction::unsafe_arena_set_allocated_msg_id(
    ::syft::core::common::UID* msg_id) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(msg_id_);
  }
  msg_id_ = msg_id;
  if (msg_id) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.action.GetObjectAction.msg_id)
}
inline ::syft::core::common::UID* GetObjectAction::release_msg_id() {
  
  ::syft::core::common::UID* temp = msg_id_;
  msg_id_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::common::UID* GetObjectAction::unsafe_arena_release_msg_id() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.action.GetObjectAction.msg_id)
  
  ::syft::core::common::UID* temp = msg_id_;
  msg_id_ = nullptr;
  return temp;
}
inline ::syft::core::common::UID* GetObjectAction::_internal_mutable_msg_id() {
  
  if (msg_id_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::common::UID>(GetArena());
    msg_id_ = p;
  }
  return msg_id_;
}
inline ::syft::core::common::UID* GetObjectAction::mutable_msg_id() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.action.GetObjectAction.msg_id)
  return _internal_mutable_msg_id();
}
inline void GetObjectAction::set_allocated_msg_id(::syft::core::common::UID* msg_id) {
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
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.action.GetObjectAction.msg_id)
}

// .syft.core.io.Address address = 3;
inline bool GetObjectAction::_internal_has_address() const {
  return this != internal_default_instance() && address_ != nullptr;
}
inline bool GetObjectAction::has_address() const {
  return _internal_has_address();
}
inline const ::syft::core::io::Address& GetObjectAction::_internal_address() const {
  const ::syft::core::io::Address* p = address_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::io::Address&>(
      ::syft::core::io::_Address_default_instance_);
}
inline const ::syft::core::io::Address& GetObjectAction::address() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.action.GetObjectAction.address)
  return _internal_address();
}
inline void GetObjectAction::unsafe_arena_set_allocated_address(
    ::syft::core::io::Address* address) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(address_);
  }
  address_ = address;
  if (address) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.action.GetObjectAction.address)
}
inline ::syft::core::io::Address* GetObjectAction::release_address() {
  
  ::syft::core::io::Address* temp = address_;
  address_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::io::Address* GetObjectAction::unsafe_arena_release_address() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.action.GetObjectAction.address)
  
  ::syft::core::io::Address* temp = address_;
  address_ = nullptr;
  return temp;
}
inline ::syft::core::io::Address* GetObjectAction::_internal_mutable_address() {
  
  if (address_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::io::Address>(GetArena());
    address_ = p;
  }
  return address_;
}
inline ::syft::core::io::Address* GetObjectAction::mutable_address() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.action.GetObjectAction.address)
  return _internal_mutable_address();
}
inline void GetObjectAction::set_allocated_address(::syft::core::io::Address* address) {
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
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.action.GetObjectAction.address)
}

// .syft.core.io.Address reply_to = 4;
inline bool GetObjectAction::_internal_has_reply_to() const {
  return this != internal_default_instance() && reply_to_ != nullptr;
}
inline bool GetObjectAction::has_reply_to() const {
  return _internal_has_reply_to();
}
inline const ::syft::core::io::Address& GetObjectAction::_internal_reply_to() const {
  const ::syft::core::io::Address* p = reply_to_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::io::Address&>(
      ::syft::core::io::_Address_default_instance_);
}
inline const ::syft::core::io::Address& GetObjectAction::reply_to() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.action.GetObjectAction.reply_to)
  return _internal_reply_to();
}
inline void GetObjectAction::unsafe_arena_set_allocated_reply_to(
    ::syft::core::io::Address* reply_to) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(reply_to_);
  }
  reply_to_ = reply_to;
  if (reply_to) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.action.GetObjectAction.reply_to)
}
inline ::syft::core::io::Address* GetObjectAction::release_reply_to() {
  
  ::syft::core::io::Address* temp = reply_to_;
  reply_to_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::io::Address* GetObjectAction::unsafe_arena_release_reply_to() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.action.GetObjectAction.reply_to)
  
  ::syft::core::io::Address* temp = reply_to_;
  reply_to_ = nullptr;
  return temp;
}
inline ::syft::core::io::Address* GetObjectAction::_internal_mutable_reply_to() {
  
  if (reply_to_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::io::Address>(GetArena());
    reply_to_ = p;
  }
  return reply_to_;
}
inline ::syft::core::io::Address* GetObjectAction::mutable_reply_to() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.action.GetObjectAction.reply_to)
  return _internal_mutable_reply_to();
}
inline void GetObjectAction::set_allocated_reply_to(::syft::core::io::Address* reply_to) {
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
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.action.GetObjectAction.reply_to)
}

// -------------------------------------------------------------------

// GetObjectResponseMessage

// .syft.core.common.UID msg_id = 1;
inline bool GetObjectResponseMessage::_internal_has_msg_id() const {
  return this != internal_default_instance() && msg_id_ != nullptr;
}
inline bool GetObjectResponseMessage::has_msg_id() const {
  return _internal_has_msg_id();
}
inline const ::syft::core::common::UID& GetObjectResponseMessage::_internal_msg_id() const {
  const ::syft::core::common::UID* p = msg_id_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::common::UID&>(
      ::syft::core::common::_UID_default_instance_);
}
inline const ::syft::core::common::UID& GetObjectResponseMessage::msg_id() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.action.GetObjectResponseMessage.msg_id)
  return _internal_msg_id();
}
inline void GetObjectResponseMessage::unsafe_arena_set_allocated_msg_id(
    ::syft::core::common::UID* msg_id) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(msg_id_);
  }
  msg_id_ = msg_id;
  if (msg_id) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.action.GetObjectResponseMessage.msg_id)
}
inline ::syft::core::common::UID* GetObjectResponseMessage::release_msg_id() {
  
  ::syft::core::common::UID* temp = msg_id_;
  msg_id_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::common::UID* GetObjectResponseMessage::unsafe_arena_release_msg_id() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.action.GetObjectResponseMessage.msg_id)
  
  ::syft::core::common::UID* temp = msg_id_;
  msg_id_ = nullptr;
  return temp;
}
inline ::syft::core::common::UID* GetObjectResponseMessage::_internal_mutable_msg_id() {
  
  if (msg_id_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::common::UID>(GetArena());
    msg_id_ = p;
  }
  return msg_id_;
}
inline ::syft::core::common::UID* GetObjectResponseMessage::mutable_msg_id() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.action.GetObjectResponseMessage.msg_id)
  return _internal_mutable_msg_id();
}
inline void GetObjectResponseMessage::set_allocated_msg_id(::syft::core::common::UID* msg_id) {
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
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.action.GetObjectResponseMessage.msg_id)
}

// .syft.core.store.StorableObject obj = 2;
inline bool GetObjectResponseMessage::_internal_has_obj() const {
  return this != internal_default_instance() && obj_ != nullptr;
}
inline bool GetObjectResponseMessage::has_obj() const {
  return _internal_has_obj();
}
inline const ::syft::core::store::StorableObject& GetObjectResponseMessage::_internal_obj() const {
  const ::syft::core::store::StorableObject* p = obj_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::store::StorableObject&>(
      ::syft::core::store::_StorableObject_default_instance_);
}
inline const ::syft::core::store::StorableObject& GetObjectResponseMessage::obj() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.action.GetObjectResponseMessage.obj)
  return _internal_obj();
}
inline void GetObjectResponseMessage::unsafe_arena_set_allocated_obj(
    ::syft::core::store::StorableObject* obj) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(obj_);
  }
  obj_ = obj;
  if (obj) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.action.GetObjectResponseMessage.obj)
}
inline ::syft::core::store::StorableObject* GetObjectResponseMessage::release_obj() {
  
  ::syft::core::store::StorableObject* temp = obj_;
  obj_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::store::StorableObject* GetObjectResponseMessage::unsafe_arena_release_obj() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.action.GetObjectResponseMessage.obj)
  
  ::syft::core::store::StorableObject* temp = obj_;
  obj_ = nullptr;
  return temp;
}
inline ::syft::core::store::StorableObject* GetObjectResponseMessage::_internal_mutable_obj() {
  
  if (obj_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::store::StorableObject>(GetArena());
    obj_ = p;
  }
  return obj_;
}
inline ::syft::core::store::StorableObject* GetObjectResponseMessage::mutable_obj() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.action.GetObjectResponseMessage.obj)
  return _internal_mutable_obj();
}
inline void GetObjectResponseMessage::set_allocated_obj(::syft::core::store::StorableObject* obj) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(obj_);
  }
  if (obj) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(obj)->GetArena();
    if (message_arena != submessage_arena) {
      obj = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, obj, submessage_arena);
    }
    
  } else {
    
  }
  obj_ = obj;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.action.GetObjectResponseMessage.obj)
}

// .syft.core.io.Address address = 3;
inline bool GetObjectResponseMessage::_internal_has_address() const {
  return this != internal_default_instance() && address_ != nullptr;
}
inline bool GetObjectResponseMessage::has_address() const {
  return _internal_has_address();
}
inline const ::syft::core::io::Address& GetObjectResponseMessage::_internal_address() const {
  const ::syft::core::io::Address* p = address_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::io::Address&>(
      ::syft::core::io::_Address_default_instance_);
}
inline const ::syft::core::io::Address& GetObjectResponseMessage::address() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.action.GetObjectResponseMessage.address)
  return _internal_address();
}
inline void GetObjectResponseMessage::unsafe_arena_set_allocated_address(
    ::syft::core::io::Address* address) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(address_);
  }
  address_ = address;
  if (address) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.action.GetObjectResponseMessage.address)
}
inline ::syft::core::io::Address* GetObjectResponseMessage::release_address() {
  
  ::syft::core::io::Address* temp = address_;
  address_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::io::Address* GetObjectResponseMessage::unsafe_arena_release_address() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.action.GetObjectResponseMessage.address)
  
  ::syft::core::io::Address* temp = address_;
  address_ = nullptr;
  return temp;
}
inline ::syft::core::io::Address* GetObjectResponseMessage::_internal_mutable_address() {
  
  if (address_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::io::Address>(GetArena());
    address_ = p;
  }
  return address_;
}
inline ::syft::core::io::Address* GetObjectResponseMessage::mutable_address() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.action.GetObjectResponseMessage.address)
  return _internal_mutable_address();
}
inline void GetObjectResponseMessage::set_allocated_address(::syft::core::io::Address* address) {
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
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.action.GetObjectResponseMessage.address)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace action
}  // namespace common
}  // namespace node
}  // namespace core
}  // namespace syft

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fcore_2fnode_2fcommon_2faction_2fget_5fobject_2eproto