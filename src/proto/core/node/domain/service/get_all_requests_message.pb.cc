// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/core/node/domain/service/get_all_requests_message.proto

#include "proto/core/node/domain/service/get_all_requests_message.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_RequestMessage_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto;
namespace syft {
namespace core {
namespace node {
namespace domain {
namespace service {
class GetAllRequestsMessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GetAllRequestsMessage> _instance;
} _GetAllRequestsMessage_default_instance_;
class GetAllRequestsResponseMessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GetAllRequestsResponseMessage> _instance;
} _GetAllRequestsResponseMessage_default_instance_;
}  // namespace service
}  // namespace domain
}  // namespace node
}  // namespace core
}  // namespace syft
static void InitDefaultsscc_info_GetAllRequestsMessage_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::syft::core::node::domain::service::_GetAllRequestsMessage_default_instance_;
    new (ptr) ::syft::core::node::domain::service::GetAllRequestsMessage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_GetAllRequestsMessage_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_GetAllRequestsMessage_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto}, {
      &scc_info_UID_proto_2fcore_2fcommon_2fcommon_5fobject_2eproto.base,
      &scc_info_Address_proto_2fcore_2fio_2faddress_2eproto.base,}};

static void InitDefaultsscc_info_GetAllRequestsResponseMessage_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::syft::core::node::domain::service::_GetAllRequestsResponseMessage_default_instance_;
    new (ptr) ::syft::core::node::domain::service::GetAllRequestsResponseMessage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_GetAllRequestsResponseMessage_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 3, 0, InitDefaultsscc_info_GetAllRequestsResponseMessage_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto}, {
      &scc_info_UID_proto_2fcore_2fcommon_2fcommon_5fobject_2eproto.base,
      &scc_info_Address_proto_2fcore_2fio_2faddress_2eproto.base,
      &scc_info_RequestMessage_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::GetAllRequestsMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::GetAllRequestsMessage, msg_id_),
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::GetAllRequestsMessage, address_),
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::GetAllRequestsMessage, reply_to_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::GetAllRequestsResponseMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::GetAllRequestsResponseMessage, msg_id_),
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::GetAllRequestsResponseMessage, address_),
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::GetAllRequestsResponseMessage, requests_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::syft::core::node::domain::service::GetAllRequestsMessage)},
  { 8, -1, sizeof(::syft::core::node::domain::service::GetAllRequestsResponseMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::syft::core::node::domain::service::_GetAllRequestsMessage_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::syft::core::node::domain::service::_GetAllRequestsResponseMessage_default_instance_),
};

const char descriptor_table_protodef_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n=proto/core/node/domain/service/get_all"
  "_requests_message.proto\022\035syft.core.node."
  "domain.service\0324proto/core/node/domain/s"
  "ervice/request_message.proto\032%proto/core"
  "/common/common_object.proto\032\033proto/core/"
  "io/address.proto\"\217\001\n\025GetAllRequestsMessa"
  "ge\022%\n\006msg_id\030\001 \001(\0132\025.syft.core.common.UI"
  "D\022&\n\007address\030\002 \001(\0132\025.syft.core.io.Addres"
  "s\022\'\n\010reply_to\030\003 \001(\0132\025.syft.core.io.Addre"
  "ss\"\257\001\n\035GetAllRequestsResponseMessage\022%\n\006"
  "msg_id\030\001 \001(\0132\025.syft.core.common.UID\022&\n\007a"
  "ddress\030\002 \001(\0132\025.syft.core.io.Address\022\?\n\010r"
  "equests\030\003 \003(\0132-.syft.core.node.domain.se"
  "rvice.RequestMessageb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto_deps[3] = {
  &::descriptor_table_proto_2fcore_2fcommon_2fcommon_5fobject_2eproto,
  &::descriptor_table_proto_2fcore_2fio_2faddress_2eproto,
  &::descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto_sccs[2] = {
  &scc_info_GetAllRequestsMessage_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto.base,
  &scc_info_GetAllRequestsResponseMessage_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto = {
  false, false, descriptor_table_protodef_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto, "proto/core/node/domain/service/get_all_requests_message.proto", 548,
  &descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto_once, descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto_sccs, descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto_deps, 2, 3,
  schemas, file_default_instances, TableStruct_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto::offsets,
  file_level_metadata_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto, 2, file_level_enum_descriptors_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto, file_level_service_descriptors_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto)), true);
namespace syft {
namespace core {
namespace node {
namespace domain {
namespace service {

// ===================================================================

class GetAllRequestsMessage::_Internal {
 public:
  static const ::syft::core::common::UID& msg_id(const GetAllRequestsMessage* msg);
  static const ::syft::core::io::Address& address(const GetAllRequestsMessage* msg);
  static const ::syft::core::io::Address& reply_to(const GetAllRequestsMessage* msg);
};

const ::syft::core::common::UID&
GetAllRequestsMessage::_Internal::msg_id(const GetAllRequestsMessage* msg) {
  return *msg->msg_id_;
}
const ::syft::core::io::Address&
GetAllRequestsMessage::_Internal::address(const GetAllRequestsMessage* msg) {
  return *msg->address_;
}
const ::syft::core::io::Address&
GetAllRequestsMessage::_Internal::reply_to(const GetAllRequestsMessage* msg) {
  return *msg->reply_to_;
}
void GetAllRequestsMessage::clear_msg_id() {
  if (GetArena() == nullptr && msg_id_ != nullptr) {
    delete msg_id_;
  }
  msg_id_ = nullptr;
}
void GetAllRequestsMessage::clear_address() {
  if (GetArena() == nullptr && address_ != nullptr) {
    delete address_;
  }
  address_ = nullptr;
}
void GetAllRequestsMessage::clear_reply_to() {
  if (GetArena() == nullptr && reply_to_ != nullptr) {
    delete reply_to_;
  }
  reply_to_ = nullptr;
}
GetAllRequestsMessage::GetAllRequestsMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:syft.core.node.domain.service.GetAllRequestsMessage)
}
GetAllRequestsMessage::GetAllRequestsMessage(const GetAllRequestsMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_msg_id()) {
    msg_id_ = new ::syft::core::common::UID(*from.msg_id_);
  } else {
    msg_id_ = nullptr;
  }
  if (from._internal_has_address()) {
    address_ = new ::syft::core::io::Address(*from.address_);
  } else {
    address_ = nullptr;
  }
  if (from._internal_has_reply_to()) {
    reply_to_ = new ::syft::core::io::Address(*from.reply_to_);
  } else {
    reply_to_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:syft.core.node.domain.service.GetAllRequestsMessage)
}

void GetAllRequestsMessage::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GetAllRequestsMessage_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto.base);
  ::memset(&msg_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&reply_to_) -
      reinterpret_cast<char*>(&msg_id_)) + sizeof(reply_to_));
}

GetAllRequestsMessage::~GetAllRequestsMessage() {
  // @@protoc_insertion_point(destructor:syft.core.node.domain.service.GetAllRequestsMessage)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void GetAllRequestsMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete msg_id_;
  if (this != internal_default_instance()) delete address_;
  if (this != internal_default_instance()) delete reply_to_;
}

void GetAllRequestsMessage::ArenaDtor(void* object) {
  GetAllRequestsMessage* _this = reinterpret_cast< GetAllRequestsMessage* >(object);
  (void)_this;
}
void GetAllRequestsMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GetAllRequestsMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GetAllRequestsMessage& GetAllRequestsMessage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GetAllRequestsMessage_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto.base);
  return *internal_default_instance();
}


void GetAllRequestsMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:syft.core.node.domain.service.GetAllRequestsMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && msg_id_ != nullptr) {
    delete msg_id_;
  }
  msg_id_ = nullptr;
  if (GetArena() == nullptr && address_ != nullptr) {
    delete address_;
  }
  address_ = nullptr;
  if (GetArena() == nullptr && reply_to_ != nullptr) {
    delete reply_to_;
  }
  reply_to_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetAllRequestsMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // .syft.core.io.Address address = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_address(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .syft.core.io.Address reply_to = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_reply_to(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* GetAllRequestsMessage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:syft.core.node.domain.service.GetAllRequestsMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .syft.core.common.UID msg_id = 1;
  if (this->has_msg_id()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::msg_id(this), target, stream);
  }

  // .syft.core.io.Address address = 2;
  if (this->has_address()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::address(this), target, stream);
  }

  // .syft.core.io.Address reply_to = 3;
  if (this->has_reply_to()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::reply_to(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:syft.core.node.domain.service.GetAllRequestsMessage)
  return target;
}

size_t GetAllRequestsMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:syft.core.node.domain.service.GetAllRequestsMessage)
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

  // .syft.core.io.Address address = 2;
  if (this->has_address()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *address_);
  }

  // .syft.core.io.Address reply_to = 3;
  if (this->has_reply_to()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *reply_to_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetAllRequestsMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:syft.core.node.domain.service.GetAllRequestsMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const GetAllRequestsMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GetAllRequestsMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:syft.core.node.domain.service.GetAllRequestsMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:syft.core.node.domain.service.GetAllRequestsMessage)
    MergeFrom(*source);
  }
}

void GetAllRequestsMessage::MergeFrom(const GetAllRequestsMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:syft.core.node.domain.service.GetAllRequestsMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_msg_id()) {
    _internal_mutable_msg_id()->::syft::core::common::UID::MergeFrom(from._internal_msg_id());
  }
  if (from.has_address()) {
    _internal_mutable_address()->::syft::core::io::Address::MergeFrom(from._internal_address());
  }
  if (from.has_reply_to()) {
    _internal_mutable_reply_to()->::syft::core::io::Address::MergeFrom(from._internal_reply_to());
  }
}

void GetAllRequestsMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:syft.core.node.domain.service.GetAllRequestsMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetAllRequestsMessage::CopyFrom(const GetAllRequestsMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:syft.core.node.domain.service.GetAllRequestsMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetAllRequestsMessage::IsInitialized() const {
  return true;
}

void GetAllRequestsMessage::InternalSwap(GetAllRequestsMessage* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GetAllRequestsMessage, reply_to_)
      + sizeof(GetAllRequestsMessage::reply_to_)
      - PROTOBUF_FIELD_OFFSET(GetAllRequestsMessage, msg_id_)>(
          reinterpret_cast<char*>(&msg_id_),
          reinterpret_cast<char*>(&other->msg_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GetAllRequestsMessage::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class GetAllRequestsResponseMessage::_Internal {
 public:
  static const ::syft::core::common::UID& msg_id(const GetAllRequestsResponseMessage* msg);
  static const ::syft::core::io::Address& address(const GetAllRequestsResponseMessage* msg);
};

const ::syft::core::common::UID&
GetAllRequestsResponseMessage::_Internal::msg_id(const GetAllRequestsResponseMessage* msg) {
  return *msg->msg_id_;
}
const ::syft::core::io::Address&
GetAllRequestsResponseMessage::_Internal::address(const GetAllRequestsResponseMessage* msg) {
  return *msg->address_;
}
void GetAllRequestsResponseMessage::clear_msg_id() {
  if (GetArena() == nullptr && msg_id_ != nullptr) {
    delete msg_id_;
  }
  msg_id_ = nullptr;
}
void GetAllRequestsResponseMessage::clear_address() {
  if (GetArena() == nullptr && address_ != nullptr) {
    delete address_;
  }
  address_ = nullptr;
}
void GetAllRequestsResponseMessage::clear_requests() {
  requests_.Clear();
}
GetAllRequestsResponseMessage::GetAllRequestsResponseMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  requests_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:syft.core.node.domain.service.GetAllRequestsResponseMessage)
}
GetAllRequestsResponseMessage::GetAllRequestsResponseMessage(const GetAllRequestsResponseMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      requests_(from.requests_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_msg_id()) {
    msg_id_ = new ::syft::core::common::UID(*from.msg_id_);
  } else {
    msg_id_ = nullptr;
  }
  if (from._internal_has_address()) {
    address_ = new ::syft::core::io::Address(*from.address_);
  } else {
    address_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:syft.core.node.domain.service.GetAllRequestsResponseMessage)
}

void GetAllRequestsResponseMessage::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GetAllRequestsResponseMessage_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto.base);
  ::memset(&msg_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&address_) -
      reinterpret_cast<char*>(&msg_id_)) + sizeof(address_));
}

GetAllRequestsResponseMessage::~GetAllRequestsResponseMessage() {
  // @@protoc_insertion_point(destructor:syft.core.node.domain.service.GetAllRequestsResponseMessage)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void GetAllRequestsResponseMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete msg_id_;
  if (this != internal_default_instance()) delete address_;
}

void GetAllRequestsResponseMessage::ArenaDtor(void* object) {
  GetAllRequestsResponseMessage* _this = reinterpret_cast< GetAllRequestsResponseMessage* >(object);
  (void)_this;
}
void GetAllRequestsResponseMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GetAllRequestsResponseMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GetAllRequestsResponseMessage& GetAllRequestsResponseMessage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GetAllRequestsResponseMessage_proto_2fcore_2fnode_2fdomain_2fservice_2fget_5fall_5frequests_5fmessage_2eproto.base);
  return *internal_default_instance();
}


void GetAllRequestsResponseMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:syft.core.node.domain.service.GetAllRequestsResponseMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  requests_.Clear();
  if (GetArena() == nullptr && msg_id_ != nullptr) {
    delete msg_id_;
  }
  msg_id_ = nullptr;
  if (GetArena() == nullptr && address_ != nullptr) {
    delete address_;
  }
  address_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GetAllRequestsResponseMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // .syft.core.io.Address address = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_address(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .syft.core.node.domain.service.RequestMessage requests = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_requests(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* GetAllRequestsResponseMessage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:syft.core.node.domain.service.GetAllRequestsResponseMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .syft.core.common.UID msg_id = 1;
  if (this->has_msg_id()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::msg_id(this), target, stream);
  }

  // .syft.core.io.Address address = 2;
  if (this->has_address()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::address(this), target, stream);
  }

  // repeated .syft.core.node.domain.service.RequestMessage requests = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_requests_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_requests(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:syft.core.node.domain.service.GetAllRequestsResponseMessage)
  return target;
}

size_t GetAllRequestsResponseMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:syft.core.node.domain.service.GetAllRequestsResponseMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .syft.core.node.domain.service.RequestMessage requests = 3;
  total_size += 1UL * this->_internal_requests_size();
  for (const auto& msg : this->requests_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .syft.core.common.UID msg_id = 1;
  if (this->has_msg_id()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *msg_id_);
  }

  // .syft.core.io.Address address = 2;
  if (this->has_address()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *address_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetAllRequestsResponseMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:syft.core.node.domain.service.GetAllRequestsResponseMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const GetAllRequestsResponseMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GetAllRequestsResponseMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:syft.core.node.domain.service.GetAllRequestsResponseMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:syft.core.node.domain.service.GetAllRequestsResponseMessage)
    MergeFrom(*source);
  }
}

void GetAllRequestsResponseMessage::MergeFrom(const GetAllRequestsResponseMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:syft.core.node.domain.service.GetAllRequestsResponseMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  requests_.MergeFrom(from.requests_);
  if (from.has_msg_id()) {
    _internal_mutable_msg_id()->::syft::core::common::UID::MergeFrom(from._internal_msg_id());
  }
  if (from.has_address()) {
    _internal_mutable_address()->::syft::core::io::Address::MergeFrom(from._internal_address());
  }
}

void GetAllRequestsResponseMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:syft.core.node.domain.service.GetAllRequestsResponseMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetAllRequestsResponseMessage::CopyFrom(const GetAllRequestsResponseMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:syft.core.node.domain.service.GetAllRequestsResponseMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetAllRequestsResponseMessage::IsInitialized() const {
  return true;
}

void GetAllRequestsResponseMessage::InternalSwap(GetAllRequestsResponseMessage* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  requests_.InternalSwap(&other->requests_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GetAllRequestsResponseMessage, address_)
      + sizeof(GetAllRequestsResponseMessage::address_)
      - PROTOBUF_FIELD_OFFSET(GetAllRequestsResponseMessage, msg_id_)>(
          reinterpret_cast<char*>(&msg_id_),
          reinterpret_cast<char*>(&other->msg_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GetAllRequestsResponseMessage::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace service
}  // namespace domain
}  // namespace node
}  // namespace core
}  // namespace syft
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::syft::core::node::domain::service::GetAllRequestsMessage* Arena::CreateMaybeMessage< ::syft::core::node::domain::service::GetAllRequestsMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::syft::core::node::domain::service::GetAllRequestsMessage >(arena);
}
template<> PROTOBUF_NOINLINE ::syft::core::node::domain::service::GetAllRequestsResponseMessage* Arena::CreateMaybeMessage< ::syft::core::node::domain::service::GetAllRequestsResponseMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::syft::core::node::domain::service::GetAllRequestsResponseMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
