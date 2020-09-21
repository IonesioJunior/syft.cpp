// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/core/node/domain/service/request_message.proto

#include "proto/core/node/domain/service/request_message.pb.h"

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
namespace domain {
namespace service {
class RequestMessageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RequestMessage> _instance;
} _RequestMessage_default_instance_;
}  // namespace service
}  // namespace domain
}  // namespace node
}  // namespace core
}  // namespace syft
static void InitDefaultsscc_info_RequestMessage_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::syft::core::node::domain::service::_RequestMessage_default_instance_;
    new (ptr) ::syft::core::node::domain::service::RequestMessage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_RequestMessage_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_RequestMessage_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto}, {
      &scc_info_UID_proto_2fcore_2fcommon_2fcommon_5fobject_2eproto.base,
      &scc_info_Address_proto_2fcore_2fio_2faddress_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::RequestMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::RequestMessage, request_id_),
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::RequestMessage, object_id_),
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::RequestMessage, request_name_),
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::RequestMessage, request_description_),
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::RequestMessage, target_address_),
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::RequestMessage, owner_address_),
  PROTOBUF_FIELD_OFFSET(::syft::core::node::domain::service::RequestMessage, requester_verify_key_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::syft::core::node::domain::service::RequestMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::syft::core::node::domain::service::_RequestMessage_default_instance_),
};

const char descriptor_table_protodef_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n4proto/core/node/domain/service/request"
  "_message.proto\022\035syft.core.node.domain.se"
  "rvice\032%proto/core/common/common_object.p"
  "roto\032\033proto/core/io/address.proto\"\223\002\n\016Re"
  "questMessage\022)\n\nrequest_id\030\001 \001(\0132\025.syft."
  "core.common.UID\022(\n\tobject_id\030\002 \001(\0132\025.syf"
  "t.core.common.UID\022\024\n\014request_name\030\003 \001(\t\022"
  "\033\n\023request_description\030\004 \001(\t\022-\n\016target_a"
  "ddress\030\005 \001(\0132\025.syft.core.io.Address\022,\n\ro"
  "wner_address\030\006 \001(\0132\025.syft.core.io.Addres"
  "s\022\034\n\024requester_verify_key\030\007 \001(\014b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto_deps[2] = {
  &::descriptor_table_proto_2fcore_2fcommon_2fcommon_5fobject_2eproto,
  &::descriptor_table_proto_2fcore_2fio_2faddress_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto_sccs[1] = {
  &scc_info_RequestMessage_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto = {
  false, false, descriptor_table_protodef_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto, "proto/core/node/domain/service/request_message.proto", 439,
  &descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto_once, descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto_sccs, descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto::offsets,
  file_level_metadata_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto, 1, file_level_enum_descriptors_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto, file_level_service_descriptors_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto)), true);
namespace syft {
namespace core {
namespace node {
namespace domain {
namespace service {

// ===================================================================

class RequestMessage::_Internal {
 public:
  static const ::syft::core::common::UID& request_id(const RequestMessage* msg);
  static const ::syft::core::common::UID& object_id(const RequestMessage* msg);
  static const ::syft::core::io::Address& target_address(const RequestMessage* msg);
  static const ::syft::core::io::Address& owner_address(const RequestMessage* msg);
};

const ::syft::core::common::UID&
RequestMessage::_Internal::request_id(const RequestMessage* msg) {
  return *msg->request_id_;
}
const ::syft::core::common::UID&
RequestMessage::_Internal::object_id(const RequestMessage* msg) {
  return *msg->object_id_;
}
const ::syft::core::io::Address&
RequestMessage::_Internal::target_address(const RequestMessage* msg) {
  return *msg->target_address_;
}
const ::syft::core::io::Address&
RequestMessage::_Internal::owner_address(const RequestMessage* msg) {
  return *msg->owner_address_;
}
void RequestMessage::clear_request_id() {
  if (GetArena() == nullptr && request_id_ != nullptr) {
    delete request_id_;
  }
  request_id_ = nullptr;
}
void RequestMessage::clear_object_id() {
  if (GetArena() == nullptr && object_id_ != nullptr) {
    delete object_id_;
  }
  object_id_ = nullptr;
}
void RequestMessage::clear_target_address() {
  if (GetArena() == nullptr && target_address_ != nullptr) {
    delete target_address_;
  }
  target_address_ = nullptr;
}
void RequestMessage::clear_owner_address() {
  if (GetArena() == nullptr && owner_address_ != nullptr) {
    delete owner_address_;
  }
  owner_address_ = nullptr;
}
RequestMessage::RequestMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:syft.core.node.domain.service.RequestMessage)
}
RequestMessage::RequestMessage(const RequestMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  request_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_request_name().empty()) {
    request_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_request_name(),
      GetArena());
  }
  request_description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_request_description().empty()) {
    request_description_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_request_description(),
      GetArena());
  }
  requester_verify_key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_requester_verify_key().empty()) {
    requester_verify_key_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_requester_verify_key(),
      GetArena());
  }
  if (from._internal_has_request_id()) {
    request_id_ = new ::syft::core::common::UID(*from.request_id_);
  } else {
    request_id_ = nullptr;
  }
  if (from._internal_has_object_id()) {
    object_id_ = new ::syft::core::common::UID(*from.object_id_);
  } else {
    object_id_ = nullptr;
  }
  if (from._internal_has_target_address()) {
    target_address_ = new ::syft::core::io::Address(*from.target_address_);
  } else {
    target_address_ = nullptr;
  }
  if (from._internal_has_owner_address()) {
    owner_address_ = new ::syft::core::io::Address(*from.owner_address_);
  } else {
    owner_address_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:syft.core.node.domain.service.RequestMessage)
}

void RequestMessage::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_RequestMessage_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto.base);
  request_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  request_description_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  requester_verify_key_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&request_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&owner_address_) -
      reinterpret_cast<char*>(&request_id_)) + sizeof(owner_address_));
}

RequestMessage::~RequestMessage() {
  // @@protoc_insertion_point(destructor:syft.core.node.domain.service.RequestMessage)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void RequestMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  request_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  request_description_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  requester_verify_key_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete request_id_;
  if (this != internal_default_instance()) delete object_id_;
  if (this != internal_default_instance()) delete target_address_;
  if (this != internal_default_instance()) delete owner_address_;
}

void RequestMessage::ArenaDtor(void* object) {
  RequestMessage* _this = reinterpret_cast< RequestMessage* >(object);
  (void)_this;
}
void RequestMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RequestMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RequestMessage& RequestMessage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_RequestMessage_proto_2fcore_2fnode_2fdomain_2fservice_2frequest_5fmessage_2eproto.base);
  return *internal_default_instance();
}


void RequestMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:syft.core.node.domain.service.RequestMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  request_name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  request_description_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  requester_verify_key_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  if (GetArena() == nullptr && request_id_ != nullptr) {
    delete request_id_;
  }
  request_id_ = nullptr;
  if (GetArena() == nullptr && object_id_ != nullptr) {
    delete object_id_;
  }
  object_id_ = nullptr;
  if (GetArena() == nullptr && target_address_ != nullptr) {
    delete target_address_;
  }
  target_address_ = nullptr;
  if (GetArena() == nullptr && owner_address_ != nullptr) {
    delete owner_address_;
  }
  owner_address_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RequestMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .syft.core.common.UID request_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_request_id(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .syft.core.common.UID object_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_object_id(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string request_name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_request_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "syft.core.node.domain.service.RequestMessage.request_name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string request_description = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_request_description();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "syft.core.node.domain.service.RequestMessage.request_description"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .syft.core.io.Address target_address = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_target_address(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .syft.core.io.Address owner_address = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_owner_address(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes requester_verify_key = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_requester_verify_key();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
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

::PROTOBUF_NAMESPACE_ID::uint8* RequestMessage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:syft.core.node.domain.service.RequestMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .syft.core.common.UID request_id = 1;
  if (this->has_request_id()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::request_id(this), target, stream);
  }

  // .syft.core.common.UID object_id = 2;
  if (this->has_object_id()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::object_id(this), target, stream);
  }

  // string request_name = 3;
  if (this->request_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_request_name().data(), static_cast<int>(this->_internal_request_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "syft.core.node.domain.service.RequestMessage.request_name");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_request_name(), target);
  }

  // string request_description = 4;
  if (this->request_description().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_request_description().data(), static_cast<int>(this->_internal_request_description().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "syft.core.node.domain.service.RequestMessage.request_description");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_request_description(), target);
  }

  // .syft.core.io.Address target_address = 5;
  if (this->has_target_address()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::target_address(this), target, stream);
  }

  // .syft.core.io.Address owner_address = 6;
  if (this->has_owner_address()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::owner_address(this), target, stream);
  }

  // bytes requester_verify_key = 7;
  if (this->requester_verify_key().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        7, this->_internal_requester_verify_key(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:syft.core.node.domain.service.RequestMessage)
  return target;
}

size_t RequestMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:syft.core.node.domain.service.RequestMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string request_name = 3;
  if (this->request_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_request_name());
  }

  // string request_description = 4;
  if (this->request_description().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_request_description());
  }

  // bytes requester_verify_key = 7;
  if (this->requester_verify_key().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_requester_verify_key());
  }

  // .syft.core.common.UID request_id = 1;
  if (this->has_request_id()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *request_id_);
  }

  // .syft.core.common.UID object_id = 2;
  if (this->has_object_id()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *object_id_);
  }

  // .syft.core.io.Address target_address = 5;
  if (this->has_target_address()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *target_address_);
  }

  // .syft.core.io.Address owner_address = 6;
  if (this->has_owner_address()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *owner_address_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RequestMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:syft.core.node.domain.service.RequestMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const RequestMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RequestMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:syft.core.node.domain.service.RequestMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:syft.core.node.domain.service.RequestMessage)
    MergeFrom(*source);
  }
}

void RequestMessage::MergeFrom(const RequestMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:syft.core.node.domain.service.RequestMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.request_name().size() > 0) {
    _internal_set_request_name(from._internal_request_name());
  }
  if (from.request_description().size() > 0) {
    _internal_set_request_description(from._internal_request_description());
  }
  if (from.requester_verify_key().size() > 0) {
    _internal_set_requester_verify_key(from._internal_requester_verify_key());
  }
  if (from.has_request_id()) {
    _internal_mutable_request_id()->::syft::core::common::UID::MergeFrom(from._internal_request_id());
  }
  if (from.has_object_id()) {
    _internal_mutable_object_id()->::syft::core::common::UID::MergeFrom(from._internal_object_id());
  }
  if (from.has_target_address()) {
    _internal_mutable_target_address()->::syft::core::io::Address::MergeFrom(from._internal_target_address());
  }
  if (from.has_owner_address()) {
    _internal_mutable_owner_address()->::syft::core::io::Address::MergeFrom(from._internal_owner_address());
  }
}

void RequestMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:syft.core.node.domain.service.RequestMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RequestMessage::CopyFrom(const RequestMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:syft.core.node.domain.service.RequestMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestMessage::IsInitialized() const {
  return true;
}

void RequestMessage::InternalSwap(RequestMessage* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  request_name_.Swap(&other->request_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  request_description_.Swap(&other->request_description_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  requester_verify_key_.Swap(&other->requester_verify_key_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RequestMessage, owner_address_)
      + sizeof(RequestMessage::owner_address_)
      - PROTOBUF_FIELD_OFFSET(RequestMessage, request_id_)>(
          reinterpret_cast<char*>(&request_id_),
          reinterpret_cast<char*>(&other->request_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RequestMessage::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace service
}  // namespace domain
}  // namespace node
}  // namespace core
}  // namespace syft
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::syft::core::node::domain::service::RequestMessage* Arena::CreateMaybeMessage< ::syft::core::node::domain::service::RequestMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::syft::core::node::domain::service::RequestMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
