// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/core/node/common/service/child_node_lifecycle_service.proto

#include "proto/core/node/common/service/child_node_lifecycle_service.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_proto_2fcore_2fcommon_2fcommon_5fobject_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_UID_proto_2fcore_2fcommon_2fcommon_5fobject_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_proto_2fcore_2fio_2faddress_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Address_proto_2fcore_2fio_2faddress_2eproto;
namespace syft {
namespace core {
namespace node {
namespace common {
namespace service {
class RegisterChildNodeMessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RegisterChildNodeMessage> _instance;
} _RegisterChildNodeMessage_default_instance_;
}  // namespace service
}  // namespace common
}  // namespace node
}  // namespace core
}  // namespace syft
static void InitDefaultsscc_info_RegisterChildNodeMessage_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::syft::core::node::common::service::_RegisterChildNodeMessage_default_instance_;
    new (ptr) ::syft::core::node::common::service::RegisterChildNodeMessage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_RegisterChildNodeMessage_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_RegisterChildNodeMessage_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto}, {
      &scc_info_UID_proto_2fcore_2fcommon_2fcommon_5fobject_2eproto.base,
      &scc_info_Address_proto_2fcore_2fio_2faddress_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::syft::core::node::common::service::RegisterChildNodeMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::syft::core::node::common::service::RegisterChildNodeMessage, msg_id_),
  PROTOBUF_FIELD_OFFSET(::syft::core::node::common::service::RegisterChildNodeMessage, lookup_id_),
  PROTOBUF_FIELD_OFFSET(::syft::core::node::common::service::RegisterChildNodeMessage, address_),
  PROTOBUF_FIELD_OFFSET(::syft::core::node::common::service::RegisterChildNodeMessage, child_node_client_address_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::syft::core::node::common::service::RegisterChildNodeMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::syft::core::node::common::service::_RegisterChildNodeMessage_default_instance_),
};

const char descriptor_table_protodef_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\nAproto/core/node/common/service/child_n"
  "ode_lifecycle_service.proto\022\035syft.core.n"
  "ode.common.service\032%proto/core/common/co"
  "mmon_object.proto\032\033proto/core/io/address"
  ".proto\"\315\001\n\030RegisterChildNodeMessage\022%\n\006m"
  "sg_id\030\001 \001(\0132\025.syft.core.common.UID\022(\n\tlo"
  "okup_id\030\002 \001(\0132\025.syft.core.common.UID\022&\n\007"
  "address\030\003 \001(\0132\025.syft.core.io.Address\0228\n\031"
  "child_node_client_address\030\004 \001(\0132\025.syft.c"
  "ore.io.Addressb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto_deps[2] = {
  &::descriptor_table_proto_2fcore_2fcommon_2fcommon_5fobject_2eproto,
  &::descriptor_table_proto_2fcore_2fio_2faddress_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto_sccs[1] = {
  &scc_info_RegisterChildNodeMessage_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto = {
  false, false, descriptor_table_protodef_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto, "proto/core/node/common/service/child_node_lifecycle_service.proto", 382,
  &descriptor_table_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto_once, descriptor_table_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto_sccs, descriptor_table_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto::offsets,
  file_level_metadata_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto, 1, file_level_enum_descriptors_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto, file_level_service_descriptors_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto)), true);
namespace syft {
namespace core {
namespace node {
namespace common {
namespace service {

// ===================================================================

class RegisterChildNodeMessage::_Internal {
 public:
  static const ::syft::core::common::UID& msg_id(const RegisterChildNodeMessage* msg);
  static const ::syft::core::common::UID& lookup_id(const RegisterChildNodeMessage* msg);
  static const ::syft::core::io::Address& address(const RegisterChildNodeMessage* msg);
  static const ::syft::core::io::Address& child_node_client_address(const RegisterChildNodeMessage* msg);
};

const ::syft::core::common::UID&
RegisterChildNodeMessage::_Internal::msg_id(const RegisterChildNodeMessage* msg) {
  return *msg->msg_id_;
}
const ::syft::core::common::UID&
RegisterChildNodeMessage::_Internal::lookup_id(const RegisterChildNodeMessage* msg) {
  return *msg->lookup_id_;
}
const ::syft::core::io::Address&
RegisterChildNodeMessage::_Internal::address(const RegisterChildNodeMessage* msg) {
  return *msg->address_;
}
const ::syft::core::io::Address&
RegisterChildNodeMessage::_Internal::child_node_client_address(const RegisterChildNodeMessage* msg) {
  return *msg->child_node_client_address_;
}
void RegisterChildNodeMessage::clear_msg_id() {
  if (GetArena() == nullptr && msg_id_ != nullptr) {
    delete msg_id_;
  }
  msg_id_ = nullptr;
}
void RegisterChildNodeMessage::clear_lookup_id() {
  if (GetArena() == nullptr && lookup_id_ != nullptr) {
    delete lookup_id_;
  }
  lookup_id_ = nullptr;
}
void RegisterChildNodeMessage::clear_address() {
  if (GetArena() == nullptr && address_ != nullptr) {
    delete address_;
  }
  address_ = nullptr;
}
void RegisterChildNodeMessage::clear_child_node_client_address() {
  if (GetArena() == nullptr && child_node_client_address_ != nullptr) {
    delete child_node_client_address_;
  }
  child_node_client_address_ = nullptr;
}
RegisterChildNodeMessage::RegisterChildNodeMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:syft.core.node.common.service.RegisterChildNodeMessage)
}
RegisterChildNodeMessage::RegisterChildNodeMessage(const RegisterChildNodeMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_msg_id()) {
    msg_id_ = new ::syft::core::common::UID(*from.msg_id_);
  } else {
    msg_id_ = nullptr;
  }
  if (from._internal_has_lookup_id()) {
    lookup_id_ = new ::syft::core::common::UID(*from.lookup_id_);
  } else {
    lookup_id_ = nullptr;
  }
  if (from._internal_has_address()) {
    address_ = new ::syft::core::io::Address(*from.address_);
  } else {
    address_ = nullptr;
  }
  if (from._internal_has_child_node_client_address()) {
    child_node_client_address_ = new ::syft::core::io::Address(*from.child_node_client_address_);
  } else {
    child_node_client_address_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:syft.core.node.common.service.RegisterChildNodeMessage)
}

void RegisterChildNodeMessage::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_RegisterChildNodeMessage_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto.base);
  ::memset(&msg_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&child_node_client_address_) -
      reinterpret_cast<char*>(&msg_id_)) + sizeof(child_node_client_address_));
}

RegisterChildNodeMessage::~RegisterChildNodeMessage() {
  // @@protoc_insertion_point(destructor:syft.core.node.common.service.RegisterChildNodeMessage)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void RegisterChildNodeMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete msg_id_;
  if (this != internal_default_instance()) delete lookup_id_;
  if (this != internal_default_instance()) delete address_;
  if (this != internal_default_instance()) delete child_node_client_address_;
}

void RegisterChildNodeMessage::ArenaDtor(void* object) {
  RegisterChildNodeMessage* _this = reinterpret_cast< RegisterChildNodeMessage* >(object);
  (void)_this;
}
void RegisterChildNodeMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RegisterChildNodeMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RegisterChildNodeMessage& RegisterChildNodeMessage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_RegisterChildNodeMessage_proto_2fcore_2fnode_2fcommon_2fservice_2fchild_5fnode_5flifecycle_5fservice_2eproto.base);
  return *internal_default_instance();
}


void RegisterChildNodeMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:syft.core.node.common.service.RegisterChildNodeMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && msg_id_ != nullptr) {
    delete msg_id_;
  }
  msg_id_ = nullptr;
  if (GetArena() == nullptr && lookup_id_ != nullptr) {
    delete lookup_id_;
  }
  lookup_id_ = nullptr;
  if (GetArena() == nullptr && address_ != nullptr) {
    delete address_;
  }
  address_ = nullptr;
  if (GetArena() == nullptr && child_node_client_address_ != nullptr) {
    delete child_node_client_address_;
  }
  child_node_client_address_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RegisterChildNodeMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .syft.core.common.UID msg_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_msg_id(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .syft.core.common.UID lookup_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_lookup_id(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .syft.core.io.Address address = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_address(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .syft.core.io.Address child_node_client_address = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_child_node_client_address(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* RegisterChildNodeMessage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:syft.core.node.common.service.RegisterChildNodeMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .syft.core.common.UID msg_id = 1;
  if (this->has_msg_id()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::msg_id(this), target, stream);
  }

  // .syft.core.common.UID lookup_id = 2;
  if (this->has_lookup_id()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::lookup_id(this), target, stream);
  }

  // .syft.core.io.Address address = 3;
  if (this->has_address()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::address(this), target, stream);
  }

  // .syft.core.io.Address child_node_client_address = 4;
  if (this->has_child_node_client_address()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::child_node_client_address(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:syft.core.node.common.service.RegisterChildNodeMessage)
  return target;
}

size_t RegisterChildNodeMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:syft.core.node.common.service.RegisterChildNodeMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .syft.core.common.UID msg_id = 1;
  if (this->has_msg_id()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *msg_id_);
  }

  // .syft.core.common.UID lookup_id = 2;
  if (this->has_lookup_id()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *lookup_id_);
  }

  // .syft.core.io.Address address = 3;
  if (this->has_address()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *address_);
  }

  // .syft.core.io.Address child_node_client_address = 4;
  if (this->has_child_node_client_address()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *child_node_client_address_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RegisterChildNodeMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:syft.core.node.common.service.RegisterChildNodeMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const RegisterChildNodeMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RegisterChildNodeMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:syft.core.node.common.service.RegisterChildNodeMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:syft.core.node.common.service.RegisterChildNodeMessage)
    MergeFrom(*source);
  }
}

void RegisterChildNodeMessage::MergeFrom(const RegisterChildNodeMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:syft.core.node.common.service.RegisterChildNodeMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_msg_id()) {
    _internal_mutable_msg_id()->::syft::core::common::UID::MergeFrom(from._internal_msg_id());
  }
  if (from.has_lookup_id()) {
    _internal_mutable_lookup_id()->::syft::core::common::UID::MergeFrom(from._internal_lookup_id());
  }
  if (from.has_address()) {
    _internal_mutable_address()->::syft::core::io::Address::MergeFrom(from._internal_address());
  }
  if (from.has_child_node_client_address()) {
    _internal_mutable_child_node_client_address()->::syft::core::io::Address::MergeFrom(from._internal_child_node_client_address());
  }
}

void RegisterChildNodeMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:syft.core.node.common.service.RegisterChildNodeMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RegisterChildNodeMessage::CopyFrom(const RegisterChildNodeMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:syft.core.node.common.service.RegisterChildNodeMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RegisterChildNodeMessage::IsInitialized() const {
  return true;
}

void RegisterChildNodeMessage::InternalSwap(RegisterChildNodeMessage* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RegisterChildNodeMessage, child_node_client_address_)
      + sizeof(RegisterChildNodeMessage::child_node_client_address_)
      - PROTOBUF_FIELD_OFFSET(RegisterChildNodeMessage, msg_id_)>(
          reinterpret_cast<char*>(&msg_id_),
          reinterpret_cast<char*>(&other->msg_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RegisterChildNodeMessage::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace service
}  // namespace common
}  // namespace node
}  // namespace core
}  // namespace syft
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::syft::core::node::common::service::RegisterChildNodeMessage* Arena::CreateMaybeMessage< ::syft::core::node::common::service::RegisterChildNodeMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::syft::core::node::common::service::RegisterChildNodeMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
