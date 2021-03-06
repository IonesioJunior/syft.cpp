// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/core/node/common/client.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fcore_2fnode_2fcommon_2fclient_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fcore_2fnode_2fcommon_2fclient_2eproto

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
#include "proto/core/io/location.pb.h"
#include "proto/core/io/route.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fcore_2fnode_2fcommon_2fclient_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fcore_2fnode_2fcommon_2fclient_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fcore_2fnode_2fcommon_2fclient_2eproto;
namespace syft {
namespace core {
namespace node {
namespace common {
class Client;
class ClientDefaultTypeInternal;
extern ClientDefaultTypeInternal _Client_default_instance_;
}  // namespace common
}  // namespace node
}  // namespace core
}  // namespace syft
PROTOBUF_NAMESPACE_OPEN
template<> ::syft::core::node::common::Client* Arena::CreateMaybeMessage<::syft::core::node::common::Client>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace syft {
namespace core {
namespace node {
namespace common {

// ===================================================================

class Client PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:syft.core.node.common.Client) */ {
 public:
  inline Client() : Client(nullptr) {}
  virtual ~Client();

  Client(const Client& from);
  Client(Client&& from) noexcept
    : Client() {
    *this = ::std::move(from);
  }

  inline Client& operator=(const Client& from) {
    CopyFrom(from);
    return *this;
  }
  inline Client& operator=(Client&& from) noexcept {
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
  static const Client& default_instance();

  static inline const Client* internal_default_instance() {
    return reinterpret_cast<const Client*>(
               &_Client_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Client& a, Client& b) {
    a.Swap(&b);
  }
  inline void Swap(Client* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Client* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Client* New() const final {
    return CreateMaybeMessage<Client>(nullptr);
  }

  Client* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Client>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Client& from);
  void MergeFrom(const Client& from);
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
  void InternalSwap(Client* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "syft.core.node.common.Client";
  }
  protected:
  explicit Client(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_proto_2fcore_2fnode_2fcommon_2fclient_2eproto);
    return ::descriptor_table_proto_2fcore_2fnode_2fcommon_2fclient_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRoutesFieldNumber = 4,
    kObjTypeFieldNumber = 1,
    kNameFieldNumber = 3,
    kIdFieldNumber = 2,
    kNetworkFieldNumber = 6,
    kDomainFieldNumber = 8,
    kDeviceFieldNumber = 10,
    kVmFieldNumber = 12,
    kHasNetworkFieldNumber = 5,
    kHasDomainFieldNumber = 7,
    kHasDeviceFieldNumber = 9,
    kHasVmFieldNumber = 11,
  };
  // repeated .syft.core.io.SoloRoute routes = 4;
  int routes_size() const;
  private:
  int _internal_routes_size() const;
  public:
  void clear_routes();
  ::syft::core::io::SoloRoute* mutable_routes(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::syft::core::io::SoloRoute >*
      mutable_routes();
  private:
  const ::syft::core::io::SoloRoute& _internal_routes(int index) const;
  ::syft::core::io::SoloRoute* _internal_add_routes();
  public:
  const ::syft::core::io::SoloRoute& routes(int index) const;
  ::syft::core::io::SoloRoute* add_routes();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::syft::core::io::SoloRoute >&
      routes() const;

  // string obj_type = 1;
  void clear_obj_type();
  const std::string& obj_type() const;
  void set_obj_type(const std::string& value);
  void set_obj_type(std::string&& value);
  void set_obj_type(const char* value);
  void set_obj_type(const char* value, size_t size);
  std::string* mutable_obj_type();
  std::string* release_obj_type();
  void set_allocated_obj_type(std::string* obj_type);
  private:
  const std::string& _internal_obj_type() const;
  void _internal_set_obj_type(const std::string& value);
  std::string* _internal_mutable_obj_type();
  public:

  // string name = 3;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

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

  // .syft.core.io.SpecificLocation network = 6;
  bool has_network() const;
  private:
  bool _internal_has_network() const;
  public:
  void clear_network();
  const ::syft::core::io::SpecificLocation& network() const;
  ::syft::core::io::SpecificLocation* release_network();
  ::syft::core::io::SpecificLocation* mutable_network();
  void set_allocated_network(::syft::core::io::SpecificLocation* network);
  private:
  const ::syft::core::io::SpecificLocation& _internal_network() const;
  ::syft::core::io::SpecificLocation* _internal_mutable_network();
  public:
  void unsafe_arena_set_allocated_network(
      ::syft::core::io::SpecificLocation* network);
  ::syft::core::io::SpecificLocation* unsafe_arena_release_network();

  // .syft.core.io.SpecificLocation domain = 8;
  bool has_domain() const;
  private:
  bool _internal_has_domain() const;
  public:
  void clear_domain();
  const ::syft::core::io::SpecificLocation& domain() const;
  ::syft::core::io::SpecificLocation* release_domain();
  ::syft::core::io::SpecificLocation* mutable_domain();
  void set_allocated_domain(::syft::core::io::SpecificLocation* domain);
  private:
  const ::syft::core::io::SpecificLocation& _internal_domain() const;
  ::syft::core::io::SpecificLocation* _internal_mutable_domain();
  public:
  void unsafe_arena_set_allocated_domain(
      ::syft::core::io::SpecificLocation* domain);
  ::syft::core::io::SpecificLocation* unsafe_arena_release_domain();

  // .syft.core.io.SpecificLocation device = 10;
  bool has_device() const;
  private:
  bool _internal_has_device() const;
  public:
  void clear_device();
  const ::syft::core::io::SpecificLocation& device() const;
  ::syft::core::io::SpecificLocation* release_device();
  ::syft::core::io::SpecificLocation* mutable_device();
  void set_allocated_device(::syft::core::io::SpecificLocation* device);
  private:
  const ::syft::core::io::SpecificLocation& _internal_device() const;
  ::syft::core::io::SpecificLocation* _internal_mutable_device();
  public:
  void unsafe_arena_set_allocated_device(
      ::syft::core::io::SpecificLocation* device);
  ::syft::core::io::SpecificLocation* unsafe_arena_release_device();

  // .syft.core.io.SpecificLocation vm = 12;
  bool has_vm() const;
  private:
  bool _internal_has_vm() const;
  public:
  void clear_vm();
  const ::syft::core::io::SpecificLocation& vm() const;
  ::syft::core::io::SpecificLocation* release_vm();
  ::syft::core::io::SpecificLocation* mutable_vm();
  void set_allocated_vm(::syft::core::io::SpecificLocation* vm);
  private:
  const ::syft::core::io::SpecificLocation& _internal_vm() const;
  ::syft::core::io::SpecificLocation* _internal_mutable_vm();
  public:
  void unsafe_arena_set_allocated_vm(
      ::syft::core::io::SpecificLocation* vm);
  ::syft::core::io::SpecificLocation* unsafe_arena_release_vm();

  // bool has_network = 5;
  void clear_has_network();
  bool has_network() const;
  void set_has_network(bool value);
  private:
  bool _internal_has_network() const;
  void _internal_set_has_network(bool value);
  public:

  // bool has_domain = 7;
  void clear_has_domain();
  bool has_domain() const;
  void set_has_domain(bool value);
  private:
  bool _internal_has_domain() const;
  void _internal_set_has_domain(bool value);
  public:

  // bool has_device = 9;
  void clear_has_device();
  bool has_device() const;
  void set_has_device(bool value);
  private:
  bool _internal_has_device() const;
  void _internal_set_has_device(bool value);
  public:

  // bool has_vm = 11;
  void clear_has_vm();
  bool has_vm() const;
  void set_has_vm(bool value);
  private:
  bool _internal_has_vm() const;
  void _internal_set_has_vm(bool value);
  public:

  // @@protoc_insertion_point(class_scope:syft.core.node.common.Client)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::syft::core::io::SoloRoute > routes_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr obj_type_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::syft::core::common::UID* id_;
  ::syft::core::io::SpecificLocation* network_;
  ::syft::core::io::SpecificLocation* domain_;
  ::syft::core::io::SpecificLocation* device_;
  ::syft::core::io::SpecificLocation* vm_;
  bool has_network_;
  bool has_domain_;
  bool has_device_;
  bool has_vm_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_proto_2fcore_2fnode_2fcommon_2fclient_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Client

// string obj_type = 1;
inline void Client::clear_obj_type() {
  obj_type_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Client::obj_type() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.Client.obj_type)
  return _internal_obj_type();
}
inline void Client::set_obj_type(const std::string& value) {
  _internal_set_obj_type(value);
  // @@protoc_insertion_point(field_set:syft.core.node.common.Client.obj_type)
}
inline std::string* Client::mutable_obj_type() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.Client.obj_type)
  return _internal_mutable_obj_type();
}
inline const std::string& Client::_internal_obj_type() const {
  return obj_type_.Get();
}
inline void Client::_internal_set_obj_type(const std::string& value) {
  
  obj_type_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Client::set_obj_type(std::string&& value) {
  
  obj_type_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:syft.core.node.common.Client.obj_type)
}
inline void Client::set_obj_type(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  obj_type_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:syft.core.node.common.Client.obj_type)
}
inline void Client::set_obj_type(const char* value,
    size_t size) {
  
  obj_type_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:syft.core.node.common.Client.obj_type)
}
inline std::string* Client::_internal_mutable_obj_type() {
  
  return obj_type_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Client::release_obj_type() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.Client.obj_type)
  return obj_type_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Client::set_allocated_obj_type(std::string* obj_type) {
  if (obj_type != nullptr) {
    
  } else {
    
  }
  obj_type_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), obj_type,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.Client.obj_type)
}

// .syft.core.common.UID id = 2;
inline bool Client::_internal_has_id() const {
  return this != internal_default_instance() && id_ != nullptr;
}
inline bool Client::has_id() const {
  return _internal_has_id();
}
inline const ::syft::core::common::UID& Client::_internal_id() const {
  const ::syft::core::common::UID* p = id_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::common::UID&>(
      ::syft::core::common::_UID_default_instance_);
}
inline const ::syft::core::common::UID& Client::id() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.Client.id)
  return _internal_id();
}
inline void Client::unsafe_arena_set_allocated_id(
    ::syft::core::common::UID* id) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(id_);
  }
  id_ = id;
  if (id) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.Client.id)
}
inline ::syft::core::common::UID* Client::release_id() {
  
  ::syft::core::common::UID* temp = id_;
  id_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::common::UID* Client::unsafe_arena_release_id() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.Client.id)
  
  ::syft::core::common::UID* temp = id_;
  id_ = nullptr;
  return temp;
}
inline ::syft::core::common::UID* Client::_internal_mutable_id() {
  
  if (id_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::common::UID>(GetArena());
    id_ = p;
  }
  return id_;
}
inline ::syft::core::common::UID* Client::mutable_id() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.Client.id)
  return _internal_mutable_id();
}
inline void Client::set_allocated_id(::syft::core::common::UID* id) {
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
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.Client.id)
}

// string name = 3;
inline void Client::clear_name() {
  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Client::name() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.Client.name)
  return _internal_name();
}
inline void Client::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:syft.core.node.common.Client.name)
}
inline std::string* Client::mutable_name() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.Client.name)
  return _internal_mutable_name();
}
inline const std::string& Client::_internal_name() const {
  return name_.Get();
}
inline void Client::_internal_set_name(const std::string& value) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Client::set_name(std::string&& value) {
  
  name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:syft.core.node.common.Client.name)
}
inline void Client::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:syft.core.node.common.Client.name)
}
inline void Client::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:syft.core.node.common.Client.name)
}
inline std::string* Client::_internal_mutable_name() {
  
  return name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Client::release_name() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.Client.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Client::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.Client.name)
}

// repeated .syft.core.io.SoloRoute routes = 4;
inline int Client::_internal_routes_size() const {
  return routes_.size();
}
inline int Client::routes_size() const {
  return _internal_routes_size();
}
inline ::syft::core::io::SoloRoute* Client::mutable_routes(int index) {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.Client.routes)
  return routes_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::syft::core::io::SoloRoute >*
Client::mutable_routes() {
  // @@protoc_insertion_point(field_mutable_list:syft.core.node.common.Client.routes)
  return &routes_;
}
inline const ::syft::core::io::SoloRoute& Client::_internal_routes(int index) const {
  return routes_.Get(index);
}
inline const ::syft::core::io::SoloRoute& Client::routes(int index) const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.Client.routes)
  return _internal_routes(index);
}
inline ::syft::core::io::SoloRoute* Client::_internal_add_routes() {
  return routes_.Add();
}
inline ::syft::core::io::SoloRoute* Client::add_routes() {
  // @@protoc_insertion_point(field_add:syft.core.node.common.Client.routes)
  return _internal_add_routes();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::syft::core::io::SoloRoute >&
Client::routes() const {
  // @@protoc_insertion_point(field_list:syft.core.node.common.Client.routes)
  return routes_;
}

// bool has_network = 5;
inline void Client::clear_has_network() {
  has_network_ = false;
}
inline bool Client::_internal_has_network() const {
  return has_network_;
}
inline bool Client::has_network() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.Client.has_network)
  return _internal_has_network();
}
inline void Client::_internal_set_has_network(bool value) {
  
  has_network_ = value;
}
inline void Client::set_has_network(bool value) {
  _internal_set_has_network(value);
  // @@protoc_insertion_point(field_set:syft.core.node.common.Client.has_network)
}

// .syft.core.io.SpecificLocation network = 6;
inline bool Client::_internal_has_network() const {
  return this != internal_default_instance() && network_ != nullptr;
}
inline bool Client::has_network() const {
  return _internal_has_network();
}
inline const ::syft::core::io::SpecificLocation& Client::_internal_network() const {
  const ::syft::core::io::SpecificLocation* p = network_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::io::SpecificLocation&>(
      ::syft::core::io::_SpecificLocation_default_instance_);
}
inline const ::syft::core::io::SpecificLocation& Client::network() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.Client.network)
  return _internal_network();
}
inline void Client::unsafe_arena_set_allocated_network(
    ::syft::core::io::SpecificLocation* network) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(network_);
  }
  network_ = network;
  if (network) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.Client.network)
}
inline ::syft::core::io::SpecificLocation* Client::release_network() {
  
  ::syft::core::io::SpecificLocation* temp = network_;
  network_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::io::SpecificLocation* Client::unsafe_arena_release_network() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.Client.network)
  
  ::syft::core::io::SpecificLocation* temp = network_;
  network_ = nullptr;
  return temp;
}
inline ::syft::core::io::SpecificLocation* Client::_internal_mutable_network() {
  
  if (network_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::io::SpecificLocation>(GetArena());
    network_ = p;
  }
  return network_;
}
inline ::syft::core::io::SpecificLocation* Client::mutable_network() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.Client.network)
  return _internal_mutable_network();
}
inline void Client::set_allocated_network(::syft::core::io::SpecificLocation* network) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(network_);
  }
  if (network) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(network)->GetArena();
    if (message_arena != submessage_arena) {
      network = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, network, submessage_arena);
    }
    
  } else {
    
  }
  network_ = network;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.Client.network)
}

// bool has_domain = 7;
inline void Client::clear_has_domain() {
  has_domain_ = false;
}
inline bool Client::_internal_has_domain() const {
  return has_domain_;
}
inline bool Client::has_domain() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.Client.has_domain)
  return _internal_has_domain();
}
inline void Client::_internal_set_has_domain(bool value) {
  
  has_domain_ = value;
}
inline void Client::set_has_domain(bool value) {
  _internal_set_has_domain(value);
  // @@protoc_insertion_point(field_set:syft.core.node.common.Client.has_domain)
}

// .syft.core.io.SpecificLocation domain = 8;
inline bool Client::_internal_has_domain() const {
  return this != internal_default_instance() && domain_ != nullptr;
}
inline bool Client::has_domain() const {
  return _internal_has_domain();
}
inline const ::syft::core::io::SpecificLocation& Client::_internal_domain() const {
  const ::syft::core::io::SpecificLocation* p = domain_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::io::SpecificLocation&>(
      ::syft::core::io::_SpecificLocation_default_instance_);
}
inline const ::syft::core::io::SpecificLocation& Client::domain() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.Client.domain)
  return _internal_domain();
}
inline void Client::unsafe_arena_set_allocated_domain(
    ::syft::core::io::SpecificLocation* domain) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(domain_);
  }
  domain_ = domain;
  if (domain) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.Client.domain)
}
inline ::syft::core::io::SpecificLocation* Client::release_domain() {
  
  ::syft::core::io::SpecificLocation* temp = domain_;
  domain_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::io::SpecificLocation* Client::unsafe_arena_release_domain() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.Client.domain)
  
  ::syft::core::io::SpecificLocation* temp = domain_;
  domain_ = nullptr;
  return temp;
}
inline ::syft::core::io::SpecificLocation* Client::_internal_mutable_domain() {
  
  if (domain_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::io::SpecificLocation>(GetArena());
    domain_ = p;
  }
  return domain_;
}
inline ::syft::core::io::SpecificLocation* Client::mutable_domain() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.Client.domain)
  return _internal_mutable_domain();
}
inline void Client::set_allocated_domain(::syft::core::io::SpecificLocation* domain) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(domain_);
  }
  if (domain) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(domain)->GetArena();
    if (message_arena != submessage_arena) {
      domain = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, domain, submessage_arena);
    }
    
  } else {
    
  }
  domain_ = domain;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.Client.domain)
}

// bool has_device = 9;
inline void Client::clear_has_device() {
  has_device_ = false;
}
inline bool Client::_internal_has_device() const {
  return has_device_;
}
inline bool Client::has_device() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.Client.has_device)
  return _internal_has_device();
}
inline void Client::_internal_set_has_device(bool value) {
  
  has_device_ = value;
}
inline void Client::set_has_device(bool value) {
  _internal_set_has_device(value);
  // @@protoc_insertion_point(field_set:syft.core.node.common.Client.has_device)
}

// .syft.core.io.SpecificLocation device = 10;
inline bool Client::_internal_has_device() const {
  return this != internal_default_instance() && device_ != nullptr;
}
inline bool Client::has_device() const {
  return _internal_has_device();
}
inline const ::syft::core::io::SpecificLocation& Client::_internal_device() const {
  const ::syft::core::io::SpecificLocation* p = device_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::io::SpecificLocation&>(
      ::syft::core::io::_SpecificLocation_default_instance_);
}
inline const ::syft::core::io::SpecificLocation& Client::device() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.Client.device)
  return _internal_device();
}
inline void Client::unsafe_arena_set_allocated_device(
    ::syft::core::io::SpecificLocation* device) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(device_);
  }
  device_ = device;
  if (device) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.Client.device)
}
inline ::syft::core::io::SpecificLocation* Client::release_device() {
  
  ::syft::core::io::SpecificLocation* temp = device_;
  device_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::io::SpecificLocation* Client::unsafe_arena_release_device() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.Client.device)
  
  ::syft::core::io::SpecificLocation* temp = device_;
  device_ = nullptr;
  return temp;
}
inline ::syft::core::io::SpecificLocation* Client::_internal_mutable_device() {
  
  if (device_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::io::SpecificLocation>(GetArena());
    device_ = p;
  }
  return device_;
}
inline ::syft::core::io::SpecificLocation* Client::mutable_device() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.Client.device)
  return _internal_mutable_device();
}
inline void Client::set_allocated_device(::syft::core::io::SpecificLocation* device) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(device_);
  }
  if (device) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(device)->GetArena();
    if (message_arena != submessage_arena) {
      device = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, device, submessage_arena);
    }
    
  } else {
    
  }
  device_ = device;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.Client.device)
}

// bool has_vm = 11;
inline void Client::clear_has_vm() {
  has_vm_ = false;
}
inline bool Client::_internal_has_vm() const {
  return has_vm_;
}
inline bool Client::has_vm() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.Client.has_vm)
  return _internal_has_vm();
}
inline void Client::_internal_set_has_vm(bool value) {
  
  has_vm_ = value;
}
inline void Client::set_has_vm(bool value) {
  _internal_set_has_vm(value);
  // @@protoc_insertion_point(field_set:syft.core.node.common.Client.has_vm)
}

// .syft.core.io.SpecificLocation vm = 12;
inline bool Client::_internal_has_vm() const {
  return this != internal_default_instance() && vm_ != nullptr;
}
inline bool Client::has_vm() const {
  return _internal_has_vm();
}
inline const ::syft::core::io::SpecificLocation& Client::_internal_vm() const {
  const ::syft::core::io::SpecificLocation* p = vm_;
  return p != nullptr ? *p : reinterpret_cast<const ::syft::core::io::SpecificLocation&>(
      ::syft::core::io::_SpecificLocation_default_instance_);
}
inline const ::syft::core::io::SpecificLocation& Client::vm() const {
  // @@protoc_insertion_point(field_get:syft.core.node.common.Client.vm)
  return _internal_vm();
}
inline void Client::unsafe_arena_set_allocated_vm(
    ::syft::core::io::SpecificLocation* vm) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(vm_);
  }
  vm_ = vm;
  if (vm) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:syft.core.node.common.Client.vm)
}
inline ::syft::core::io::SpecificLocation* Client::release_vm() {
  
  ::syft::core::io::SpecificLocation* temp = vm_;
  vm_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::syft::core::io::SpecificLocation* Client::unsafe_arena_release_vm() {
  // @@protoc_insertion_point(field_release:syft.core.node.common.Client.vm)
  
  ::syft::core::io::SpecificLocation* temp = vm_;
  vm_ = nullptr;
  return temp;
}
inline ::syft::core::io::SpecificLocation* Client::_internal_mutable_vm() {
  
  if (vm_ == nullptr) {
    auto* p = CreateMaybeMessage<::syft::core::io::SpecificLocation>(GetArena());
    vm_ = p;
  }
  return vm_;
}
inline ::syft::core::io::SpecificLocation* Client::mutable_vm() {
  // @@protoc_insertion_point(field_mutable:syft.core.node.common.Client.vm)
  return _internal_mutable_vm();
}
inline void Client::set_allocated_vm(::syft::core::io::SpecificLocation* vm) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(vm_);
  }
  if (vm) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(vm)->GetArena();
    if (message_arena != submessage_arena) {
      vm = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, vm, submessage_arena);
    }
    
  } else {
    
  }
  vm_ = vm;
  // @@protoc_insertion_point(field_set_allocated:syft.core.node.common.Client.vm)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace common
}  // namespace node
}  // namespace core
}  // namespace syft

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fcore_2fnode_2fcommon_2fclient_2eproto
