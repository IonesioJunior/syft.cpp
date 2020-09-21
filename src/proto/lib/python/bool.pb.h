// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/lib/python/bool.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2flib_2fpython_2fbool_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2flib_2fpython_2fbool_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2flib_2fpython_2fbool_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2flib_2fpython_2fbool_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2flib_2fpython_2fbool_2eproto;
namespace syft {
namespace lib {
namespace python {
class Bool;
class BoolDefaultTypeInternal;
extern BoolDefaultTypeInternal _Bool_default_instance_;
}  // namespace python
}  // namespace lib
}  // namespace syft
PROTOBUF_NAMESPACE_OPEN
template<> ::syft::lib::python::Bool* Arena::CreateMaybeMessage<::syft::lib::python::Bool>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace syft {
namespace lib {
namespace python {

// ===================================================================

class Bool PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:syft.lib.python.Bool) */ {
 public:
  inline Bool() : Bool(nullptr) {}
  virtual ~Bool();

  Bool(const Bool& from);
  Bool(Bool&& from) noexcept
    : Bool() {
    *this = ::std::move(from);
  }

  inline Bool& operator=(const Bool& from) {
    CopyFrom(from);
    return *this;
  }
  inline Bool& operator=(Bool&& from) noexcept {
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
  static const Bool& default_instance();

  static inline const Bool* internal_default_instance() {
    return reinterpret_cast<const Bool*>(
               &_Bool_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Bool& a, Bool& b) {
    a.Swap(&b);
  }
  inline void Swap(Bool* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Bool* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Bool* New() const final {
    return CreateMaybeMessage<Bool>(nullptr);
  }

  Bool* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Bool>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Bool& from);
  void MergeFrom(const Bool& from);
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
  void InternalSwap(Bool* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "syft.lib.python.Bool";
  }
  protected:
  explicit Bool(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2flib_2fpython_2fbool_2eproto);
    return ::descriptor_table_proto_2flib_2fpython_2fbool_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 2,
    kDataFieldNumber = 1,
  };
  // .syft.core.common.UID id = 2;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  const ::syft::core::common::UID& id() const;
  ::syft::core::common::UID* release_id();
  ::syft::core::common::UID* mutable_id();
  void set_allocated_id(::syft::core::common::UID* id);
  private:
  const ::syft::core::common::UID& _internal_id() const;
  ::syft::core::common::UID* _internal_mutable_id();
  public:
  void unsafe_arena_set_allocated_id(
      ::syft::core::common::UID* id);
  ::syft::core::common::UID* unsafe_arena_release_id();

  // bool data = 1;
  void clear_data();
  bool data() const;
  void set_data(bool value);
  private:
  bool _internal_data() const;
  void _internal_set_data(bool value);
  public:

  // @@protoc_insertion_point(class_scope:syft.lib.python.Bool)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::syft::core::common::UID* id_;
  bool data_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2flib_2fpython_2fbool_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Bool

// bool data = 1;
inline void Bool::clear_data() {
  data_ = false;
}
inline bool Bool::_internal_data() const {
  return data_;
}
inline bool Bool::data() const {
  // @@protoc_insertion_point(field_get:syft.lib.python.Bool.data)
  return _internal_data();
}
inline void Bool::_internal_set_data(bool value) {
  
  data_ = value;
}
inline void Bool::set_data(bool value) {
  _internal_set_data(value);
  // @@protoc_insertion_point(field_set:syft.lib.python.Bool.data)
}

// .syft.core.common.UID id = 2;
inline bool Bool::_internal_has_id() const {
  return this != internal_default_instance() && id_ != nullptr;
}
inline bool Bool::has_id() const {
  return _internal_has_id();
}
inline const ::syft::core::common::UID& Bool::_internal_id() const {
  const ::syft::core::common::UID* p = id_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::common::UID&>(
      ::syft::core::common::_UID_default_instance_);
}
inline const ::syft::core::common::UID& Bool::id() const {
  // @@protoc_insertion_point(field_get:syft.lib.python.Bool.id)
  return _internal_id();
}
inline void Bool::unsafe_arena_set_allocated_id(
    ::syft::core::common::UID* id) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(id_);
  }
  id_ = id;
  if (id) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.lib.python.Bool.id)
}
inline ::syft::core::common::UID* Bool::release_id() {
  
  ::syft::core::common::UID* temp = id_;
  id_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::common::UID* Bool::unsafe_arena_release_id() {
  // @@protoc_insertion_point(field_release:syft.lib.python.Bool.id)
  
  ::syft::core::common::UID* temp = id_;
  id_ = nullptr;
  return temp;
}
inline ::syft::core::common::UID* Bool::_internal_mutable_id() {
  
  if (id_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::common::UID>(GetArena());
    id_ = p;
  }
  return id_;
}
inline ::syft::core::common::UID* Bool::mutable_id() {
  // @@protoc_insertion_point(field_mutable:syft.lib.python.Bool.id)
  return _internal_mutable_id();
}
inline void Bool::set_allocated_id(::syft::core::common::UID* id) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(id_);
  }
  if (id) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(id)->GetArena();
    if (message_arena != submessage_arena) {
      id = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, id, submessage_arena);
    }
    
  } else {
    
  }
  id_ = id;
  // @@protoc_insertion_point(field_set_allocated:syft.lib.python.Bool.id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace python
}  // namespace lib
}  // namespace syft

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2flib_2fpython_2fbool_2eproto
