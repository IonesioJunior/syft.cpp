// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/core/node/common/action/run_function_or_constructor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fcore_2fnode_2fcommon_2faction_2frun_5ffunction_5for_5fconstructor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fcore_2fnode_2fcommon_2faction_2frun_5ffunction_5for_5fconstructor_2eproto

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
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "proto/core/common/common_object.pb.h"
#include "proto/core/pointer/pointer.pb.h"
#include "proto/core/io/address.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fcore_2fnode_2fcommon_2faction_2frun_5ffunction_5for_5fconstructor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fcore_2fnode_2fcommon_2faction_2frun_5ffunction_5for_5fconstructor_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fcore_2fnode_2fcommon_2faction_2frun_5ffunction_5for_5fconstructor_2eproto;
namespace syft {
namespace core {
namespace node {
namespace common {
namespace action {
class RunFunctionOrConstructorAction;
class RunFunctionOrConstructorActionDefaultTypeInternal;
extern RunFunctionOrConstructorActionDefaultTypeInternal _RunFunctionOrConstructorAction_default_instance_;
class RunFunctionOrConstructorAction_KwargsEntry_DoNotUse;
class RunFunctionOrConstructorAction_KwargsEntry_DoNotUseDefaultTypeInternal;
extern RunFunctionOrConstructorAction_KwargsEntry_DoNotUseDefaultTypeInternal _RunFunctionOrConstructorAction_KwargsEntry_DoNotUse_default_instance_;
}  // namespace action
}  // namespace common
}  // namespace node
}  // namespace core
}  // namespace syft
PROTOBUF_NAMESPACE_OPEN
template<> ::syft::core::node::common::action::RunFunctionOrConstructorAction* Arena::CreateMaybeMessage<::syft::core::node::common::action::RunFunctionOrConstructorAction>(Arena*);
template<> ::syft::core::node::common::action::RunFunctionOrConstructorAction_KwargsEntry_DoNotUse* Arena::CreateMaybeMessage<::syft::core::node::common::action::RunFunctionOrConstructorAction_KwargsEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace syft {
namespace core {
namespace node {
namespace common {
namespace action {

// ===================================================================

class RunFunctionOrConstructorAction_KwargsEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<RunFunctionOrConstructorAction_KwargsEntry_DoNotUse, 
    std::string, ::syft::core::pointer::Pointer,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE> {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<RunFunctionOrConstructorAction_KwargsEntry_DoNotUse, 
    std::string, ::syft::core::pointer::Pointer,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE> SuperType;
  RunFunctionOrConstructorAction_KwargsEntry_DoNotUse();
  explicit RunFunctionOrConstructorAction_KwargsEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const RunFunctionOrConstructorAction_KwargsEntry_DoNotUse& other);
  static const RunFunctionOrConstructorAction_KwargsEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const RunFunctionOrConstructorAction_KwargsEntry_DoNotUse*>(&_RunFunctionOrConstructorAction_KwargsEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "syft.core.node.common.action.RunFunctionOrConstructorAction.KwargsEntry.key");
 }
  static bool ValidateValue(void*) { return true; }
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& other) final;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fcore_2fnode_2fcommon_2faction_2frun_5ffunction_5for_5fconstructor_2eproto);
    return ::descriptor_table_proto_2fcore_2fnode_2fcommon_2faction_2frun_5ffunction_5for_5fconstructor_2eproto.file_level_metadata[0];
  }

  public:
};

// -------------------------------------------------------------------

class RunFunctionOrConstructorAction PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:syft.core.node.common.action.RunFunctionOrConstructorAction) */ {
 public:
  inline RunFunctionOrConstructorAction() : RunFunctionOrConstructorAction(nullptr) {}
  virtual ~RunFunctionOrConstructorAction();

  RunFunctionOrConstructorAction(const RunFunctionOrConstructorAction& from);
  RunFunctionOrConstructorAction(RunFunctionOrConstructorAction&& from) noexcept
    : RunFunctionOrConstructorAction() {
    *this = ::std::move(from);
  }

  inline RunFunctionOrConstructorAction& operator=(const RunFunctionOrConstructorAction& from) {
    CopyFrom(from);
    return *this;
  }
  inline RunFunctionOrConstructorAction& operator=(RunFunctionOrConstructorAction&& from) noexcept {
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
  static const RunFunctionOrConstructorAction& default_instance();

  static inline const RunFunctionOrConstructorAction* internal_default_instance() {
    return reinterpret_cast<const RunFunctionOrConstructorAction*>(
               &_RunFunctionOrConstructorAction_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(RunFunctionOrConstructorAction& a, RunFunctionOrConstructorAction& b) {
    a.Swap(&b);
  }
  inline void Swap(RunFunctionOrConstructorAction* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RunFunctionOrConstructorAction* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RunFunctionOrConstructorAction* New() const final {
    return CreateMaybeMessage<RunFunctionOrConstructorAction>(nullptr);
  }

  RunFunctionOrConstructorAction* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RunFunctionOrConstructorAction>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RunFunctionOrConstructorAction& from);
  void MergeFrom(const RunFunctionOrConstructorAction& from);
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
  void InternalSwap(RunFunctionOrConstructorAction* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "syft.core.node.common.action.RunFunctionOrConstructorAction";
  }
  protected:
  explicit RunFunctionOrConstructorAction(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fcore_2fnode_2fcommon_2faction_2frun_5ffunction_5for_5fconstructor_2eproto);
    return ::descriptor_table_proto_2fcore_2fnode_2fcommon_2faction_2frun_5ffunction_5for_5fconstructor_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kArgsFieldNumber = 2,
    kKwargsFieldNumber = 3,
    kPathFieldNumber = 1,
    kIdAtLocationFieldNumber = 4,
    kAddressFieldNumber = 5,
    kMsgIdFieldNumber = 6,
  };
  // repeated .syft.core.pointer.Pointer args = 2;
  int args_size() const;
  private:
  int _internal_args_size() const;
  public:
  void clear_args();
  ::syft::core::pointer::Pointer* mutable_args(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::syft::core::pointer::Pointer >*
      mutable_args();
  private:
  const ::syft::core::pointer::Pointer& _internal_args(int index) const;
  ::syft::core::pointer::Pointer* _internal_add_args();
  public:
  const ::syft::core::pointer::Pointer& args(int index) const;
  ::syft::core::pointer::Pointer* add_args();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::syft::core::pointer::Pointer >&
      args() const;

  // map<string, .syft.core.pointer.Pointer> kwargs = 3;
  int kwargs_size() const;
  private:
  int _internal_kwargs_size() const;
  public:
  void clear_kwargs();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::syft::core::pointer::Pointer >&
      _internal_kwargs() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::syft::core::pointer::Pointer >*
      _internal_mutable_kwargs();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::syft::core::pointer::Pointer >&
      kwargs() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::syft::core::pointer::Pointer >*
      mutable_kwargs();

  // string path = 1;
  void clear_path();
  const std::string& path() const;
  void set_path(const std::string& value);
  void set_path(std::string&& value);
  void set_path(const char* value);
  void set_path(const char* value, size_t size);
  std::string* mutable_path();
  std::string* release_path();
  void set_allocated_path(std::string* path);
  private:
  const std::string& _internal_path() const;
  void _internal_set_path(const std::string& value);
  std::string* _internal_mutable_path();
  public:

  // .syft.core.common.UID id_at_location = 4;
  bool has_id_at_location() const;
  private:
  bool _internal_has_id_at_location() const;
  public:
  void clear_id_at_location();
  const ::syft::core::common::UID& id_at_location() const;
  ::syft::core::common::UID* release_id_at_location();
  ::syft::core::common::UID* mutable_id_at_location();
  void set_allocated_id_at_location(::syft::core::common::UID* id_at_location);
  private:
  const ::syft::core::common::UID& _internal_id_at_location() const;
  ::syft::core::common::UID* _internal_mutable_id_at_location();
  public:
  void unsafe_arena_set_allocated_id_at_location(
      ::syft::core::common::UID* id_at_location);
  ::syft::core::common::UID* unsafe_arena_release_id_at_location();

  // .syft.core.io.Address address = 5;
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

  // .syft.core.common.UID msg_id = 6;
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

  // @@protoc_insertion_point(class_scope:syft.core.node.common.action.RunFunctionOrConstructorAction)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::syft::core::pointer::Pointer > args_;
  ::PROTOBUF_NAMESPACE_ID::internal::MapField<
      RunFunctionOrConstructorAction_KwargsEntry_DoNotUse,
      std::string, ::syft::core::pointer::Pointer,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE> kwargs_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr path_;
  ::syft::core::common::UID* id_at_location_;
  ::syft::core::io::Address* address_;
  ::syft::core::common::UID* msg_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fcore_2fnode_2fcommon_2faction_2frun_5ffunction_5for_5fconstructor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// RunFunctionOrConstructorAction

// string path = 1;
inline void RunFunctionOrConstructorAction::clear_path() {
  path_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& RunFunctionOrConstructorAction::path() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.action.RunFunctionOrConstructorAction.path)
  return _internal_path();
}
inline void RunFunctionOrConstructorAction::set_path(const std::string& value) {
  _internal_set_path(value);
  // @@protoc_insertion_point(field_set:syft.core.node.common.action.RunFunctionOrConstructorAction.path)
}
inline std::string* RunFunctionOrConstructorAction::mutable_path() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.action.RunFunctionOrConstructorAction.path)
  return _internal_mutable_path();
}
inline const std::string& RunFunctionOrConstructorAction::_internal_path() const {
  return path_.Get();
}
inline void RunFunctionOrConstructorAction::_internal_set_path(const std::string& value) {
  
  path_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void RunFunctionOrConstructorAction::set_path(std::string&& value) {
  
  path_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:syft.core.node.common.action.RunFunctionOrConstructorAction.path)
}
inline void RunFunctionOrConstructorAction::set_path(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  path_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:syft.core.node.common.action.RunFunctionOrConstructorAction.path)
}
inline void RunFunctionOrConstructorAction::set_path(const char* value,
    size_t size) {
  
  path_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:syft.core.node.common.action.RunFunctionOrConstructorAction.path)
}
inline std::string* RunFunctionOrConstructorAction::_internal_mutable_path() {
  
  return path_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* RunFunctionOrConstructorAction::release_path() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.action.RunFunctionOrConstructorAction.path)
  return path_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void RunFunctionOrConstructorAction::set_allocated_path(std::string* path) {
  if (path != nullptr) {
    
  } else {
    
  }
  path_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), path,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.action.RunFunctionOrConstructorAction.path)
}

// repeated .syft.core.pointer.Pointer args = 2;
inline int RunFunctionOrConstructorAction::_internal_args_size() const {
  return args_.size();
}
inline int RunFunctionOrConstructorAction::args_size() const {
  return _internal_args_size();
}
inline ::syft::core::pointer::Pointer* RunFunctionOrConstructorAction::mutable_args(int index) {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.action.RunFunctionOrConstructorAction.args)
  return args_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::syft::core::pointer::Pointer >*
RunFunctionOrConstructorAction::mutable_args() {
  // @@protoc_insertion_point(field_mutable_list:syft.core.node.common.action.RunFunctionOrConstructorAction.args)
  return &args_;
}
inline const ::syft::core::pointer::Pointer& RunFunctionOrConstructorAction::_internal_args(int index) const {
  return args_.Get(index);
}
inline const ::syft::core::pointer::Pointer& RunFunctionOrConstructorAction::args(int index) const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.action.RunFunctionOrConstructorAction.args)
  return _internal_args(index);
}
inline ::syft::core::pointer::Pointer* RunFunctionOrConstructorAction::_internal_add_args() {
  return args_.Add();
}
inline ::syft::core::pointer::Pointer* RunFunctionOrConstructorAction::add_args() {
  // @@protoc_insertion_point(field_add:syft.core.node.common.action.RunFunctionOrConstructorAction.args)
  return _internal_add_args();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::syft::core::pointer::Pointer >&
RunFunctionOrConstructorAction::args() const {
  // @@protoc_insertion_point(field_list:syft.core.node.common.action.RunFunctionOrConstructorAction.args)
  return args_;
}

// map<string, .syft.core.pointer.Pointer> kwargs = 3;
inline int RunFunctionOrConstructorAction::_internal_kwargs_size() const {
  return kwargs_.size();
}
inline int RunFunctionOrConstructorAction::kwargs_size() const {
  return _internal_kwargs_size();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::syft::core::pointer::Pointer >&
RunFunctionOrConstructorAction::_internal_kwargs() const {
  return kwargs_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::syft::core::pointer::Pointer >&
RunFunctionOrConstructorAction::kwargs() const {
  // @@protoc_insertion_point(field_map:syft.core.node.common.action.RunFunctionOrConstructorAction.kwargs)
  return _internal_kwargs();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::syft::core::pointer::Pointer >*
RunFunctionOrConstructorAction::_internal_mutable_kwargs() {
  return kwargs_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::syft::core::pointer::Pointer >*
RunFunctionOrConstructorAction::mutable_kwargs() {
  // @@protoc_insertion_point(field_mutable_map:syft.core.node.common.action.RunFunctionOrConstructorAction.kwargs)
  return _internal_mutable_kwargs();
}

// .syft.core.common.UID id_at_location = 4;
inline bool RunFunctionOrConstructorAction::_internal_has_id_at_location() const {
  return this != internal_default_instance() && id_at_location_ != nullptr;
}
inline bool RunFunctionOrConstructorAction::has_id_at_location() const {
  return _internal_has_id_at_location();
}
inline const ::syft::core::common::UID& RunFunctionOrConstructorAction::_internal_id_at_location() const {
  const ::syft::core::common::UID* p = id_at_location_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::common::UID&>(
      ::syft::core::common::_UID_default_instance_);
}
inline const ::syft::core::common::UID& RunFunctionOrConstructorAction::id_at_location() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.action.RunFunctionOrConstructorAction.id_at_location)
  return _internal_id_at_location();
}
inline void RunFunctionOrConstructorAction::unsafe_arena_set_allocated_id_at_location(
    ::syft::core::common::UID* id_at_location) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(id_at_location_);
  }
  id_at_location_ = id_at_location;
  if (id_at_location) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.action.RunFunctionOrConstructorAction.id_at_location)
}
inline ::syft::core::common::UID* RunFunctionOrConstructorAction::release_id_at_location() {
  
  ::syft::core::common::UID* temp = id_at_location_;
  id_at_location_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::common::UID* RunFunctionOrConstructorAction::unsafe_arena_release_id_at_location() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.action.RunFunctionOrConstructorAction.id_at_location)
  
  ::syft::core::common::UID* temp = id_at_location_;
  id_at_location_ = nullptr;
  return temp;
}
inline ::syft::core::common::UID* RunFunctionOrConstructorAction::_internal_mutable_id_at_location() {
  
  if (id_at_location_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::common::UID>(GetArena());
    id_at_location_ = p;
  }
  return id_at_location_;
}
inline ::syft::core::common::UID* RunFunctionOrConstructorAction::mutable_id_at_location() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.action.RunFunctionOrConstructorAction.id_at_location)
  return _internal_mutable_id_at_location();
}
inline void RunFunctionOrConstructorAction::set_allocated_id_at_location(::syft::core::common::UID* id_at_location) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(id_at_location_);
  }
  if (id_at_location) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(id_at_location)->GetArena();
    if (message_arena != submessage_arena) {
      id_at_location = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, id_at_location, submessage_arena);
    }
    
  } else {
    
  }
  id_at_location_ = id_at_location;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.action.RunFunctionOrConstructorAction.id_at_location)
}

// .syft.core.io.Address address = 5;
inline bool RunFunctionOrConstructorAction::_internal_has_address() const {
  return this != internal_default_instance() && address_ != nullptr;
}
inline bool RunFunctionOrConstructorAction::has_address() const {
  return _internal_has_address();
}
inline const ::syft::core::io::Address& RunFunctionOrConstructorAction::_internal_address() const {
  const ::syft::core::io::Address* p = address_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::io::Address&>(
      ::syft::core::io::_Address_default_instance_);
}
inline const ::syft::core::io::Address& RunFunctionOrConstructorAction::address() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.action.RunFunctionOrConstructorAction.address)
  return _internal_address();
}
inline void RunFunctionOrConstructorAction::unsafe_arena_set_allocated_address(
    ::syft::core::io::Address* address) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(address_);
  }
  address_ = address;
  if (address) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.action.RunFunctionOrConstructorAction.address)
}
inline ::syft::core::io::Address* RunFunctionOrConstructorAction::release_address() {
  
  ::syft::core::io::Address* temp = address_;
  address_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::io::Address* RunFunctionOrConstructorAction::unsafe_arena_release_address() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.action.RunFunctionOrConstructorAction.address)
  
  ::syft::core::io::Address* temp = address_;
  address_ = nullptr;
  return temp;
}
inline ::syft::core::io::Address* RunFunctionOrConstructorAction::_internal_mutable_address() {
  
  if (address_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::io::Address>(GetArena());
    address_ = p;
  }
  return address_;
}
inline ::syft::core::io::Address* RunFunctionOrConstructorAction::mutable_address() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.action.RunFunctionOrConstructorAction.address)
  return _internal_mutable_address();
}
inline void RunFunctionOrConstructorAction::set_allocated_address(::syft::core::io::Address* address) {
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
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.action.RunFunctionOrConstructorAction.address)
}

// .syft.core.common.UID msg_id = 6;
inline bool RunFunctionOrConstructorAction::_internal_has_msg_id() const {
  return this != internal_default_instance() && msg_id_ != nullptr;
}
inline bool RunFunctionOrConstructorAction::has_msg_id() const {
  return _internal_has_msg_id();
}
inline const ::syft::core::common::UID& RunFunctionOrConstructorAction::_internal_msg_id() const {
  const ::syft::core::common::UID* p = msg_id_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::common::UID&>(
      ::syft::core::common::_UID_default_instance_);
}
inline const ::syft::core::common::UID& RunFunctionOrConstructorAction::msg_id() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.action.RunFunctionOrConstructorAction.msg_id)
  return _internal_msg_id();
}
inline void RunFunctionOrConstructorAction::unsafe_arena_set_allocated_msg_id(
    ::syft::core::common::UID* msg_id) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(msg_id_);
  }
  msg_id_ = msg_id;
  if (msg_id) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.action.RunFunctionOrConstructorAction.msg_id)
}
inline ::syft::core::common::UID* RunFunctionOrConstructorAction::release_msg_id() {
  
  ::syft::core::common::UID* temp = msg_id_;
  msg_id_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::common::UID* RunFunctionOrConstructorAction::unsafe_arena_release_msg_id() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.action.RunFunctionOrConstructorAction.msg_id)
  
  ::syft::core::common::UID* temp = msg_id_;
  msg_id_ = nullptr;
  return temp;
}
inline ::syft::core::common::UID* RunFunctionOrConstructorAction::_internal_mutable_msg_id() {
  
  if (msg_id_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::common::UID>(GetArena());
    msg_id_ = p;
  }
  return msg_id_;
}
inline ::syft::core::common::UID* RunFunctionOrConstructorAction::mutable_msg_id() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.action.RunFunctionOrConstructorAction.msg_id)
  return _internal_mutable_msg_id();
}
inline void RunFunctionOrConstructorAction::set_allocated_msg_id(::syft::core::common::UID* msg_id) {
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
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.action.RunFunctionOrConstructorAction.msg_id)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fcore_2fnode_2fcommon_2faction_2frun_5ffunction_5for_5fconstructor_2eproto
