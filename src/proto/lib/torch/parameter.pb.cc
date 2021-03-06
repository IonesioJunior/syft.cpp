// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/lib/torch/parameter.proto

#include "proto/lib/torch/parameter.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_proto_2flib_2ftorch_2ftensor_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TensorData_proto_2flib_2ftorch_2ftensor_2eproto;
namespace syft {
namespace lib {
namespace torch {
class ParameterProtoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ParameterProto> _instance;
} _ParameterProto_default_instance_;
}  // namespace torch
}  // namespace lib
}  // namespace syft
static void InitDefaultsscc_info_ParameterProto_proto_2flib_2ftorch_2fparameter_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::syft::lib::torch::_ParameterProto_default_instance_;
    new (ptr) ::syft::lib::torch::ParameterProto();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ParameterProto_proto_2flib_2ftorch_2fparameter_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_ParameterProto_proto_2flib_2ftorch_2fparameter_2eproto}, {
      &scc_info_TensorData_proto_2flib_2ftorch_2ftensor_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2flib_2ftorch_2fparameter_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2flib_2ftorch_2fparameter_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2flib_2ftorch_2fparameter_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2flib_2ftorch_2fparameter_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::syft::lib::torch::ParameterProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::syft::lib::torch::ParameterProto, tensor_),
  PROTOBUF_FIELD_OFFSET(::syft::lib::torch::ParameterProto, requires_grad_),
  PROTOBUF_FIELD_OFFSET(::syft::lib::torch::ParameterProto, grad_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::syft::lib::torch::ParameterProto)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::syft::lib::torch::_ParameterProto_default_instance_),
};

const char descriptor_table_protodef_proto_2flib_2ftorch_2fparameter_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\037proto/lib/torch/parameter.proto\022\016syft."
  "lib.torch\032\034proto/lib/torch/tensor.proto\""
  "}\n\016ParameterProto\022*\n\006tensor\030\001 \001(\0132\032.syft"
  ".lib.torch.TensorData\022\025\n\rrequires_grad\030\002"
  " \001(\010\022(\n\004grad\030\003 \001(\0132\032.syft.lib.torch.Tens"
  "orDatab\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2flib_2ftorch_2fparameter_2eproto_deps[1] = {
  &::descriptor_table_proto_2flib_2ftorch_2ftensor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2flib_2ftorch_2fparameter_2eproto_sccs[1] = {
  &scc_info_ParameterProto_proto_2flib_2ftorch_2fparameter_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2flib_2ftorch_2fparameter_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2flib_2ftorch_2fparameter_2eproto = {
  false, false, descriptor_table_protodef_proto_2flib_2ftorch_2fparameter_2eproto, "proto/lib/torch/parameter.proto", 214,
  &descriptor_table_proto_2flib_2ftorch_2fparameter_2eproto_once, descriptor_table_proto_2flib_2ftorch_2fparameter_2eproto_sccs, descriptor_table_proto_2flib_2ftorch_2fparameter_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_proto_2flib_2ftorch_2fparameter_2eproto::offsets,
  file_level_metadata_proto_2flib_2ftorch_2fparameter_2eproto, 1, file_level_enum_descriptors_proto_2flib_2ftorch_2fparameter_2eproto, file_level_service_descriptors_proto_2flib_2ftorch_2fparameter_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2flib_2ftorch_2fparameter_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2flib_2ftorch_2fparameter_2eproto)), true);
namespace syft {
namespace lib {
namespace torch {

// ===================================================================

class ParameterProto::_Internal {
 public:
  static const ::syft::lib::torch::TensorData& tensor(const ParameterProto* msg);
  static const ::syft::lib::torch::TensorData& grad(const ParameterProto* msg);
};

const ::syft::lib::torch::TensorData&
ParameterProto::_Internal::tensor(const ParameterProto* msg) {
  return *msg->tensor_;
}
const ::syft::lib::torch::TensorData&
ParameterProto::_Internal::grad(const ParameterProto* msg) {
  return *msg->grad_;
}
void ParameterProto::clear_tensor() {
  if (GetArena() == nullptr && tensor_ != nullptr) {
    delete tensor_;
  }
  tensor_ = nullptr;
}
void ParameterProto::clear_grad() {
  if (GetArena() == nullptr && grad_ != nullptr) {
    delete grad_;
  }
  grad_ = nullptr;
}
ParameterProto::ParameterProto(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:syft.lib.torch.ParameterProto)
}
ParameterProto::ParameterProto(const ParameterProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_tensor()) {
    tensor_ = new ::syft::lib::torch::TensorData(*from.tensor_);
  } else {
    tensor_ = nullptr;
  }
  if (from._internal_has_grad()) {
    grad_ = new ::syft::lib::torch::TensorData(*from.grad_);
  } else {
    grad_ = nullptr;
  }
  requires_grad_ = from.requires_grad_;
  // @@protoc_insertion_point(copy_constructor:syft.lib.torch.ParameterProto)
}

void ParameterProto::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ParameterProto_proto_2flib_2ftorch_2fparameter_2eproto.base);
  ::memset(&tensor_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&requires_grad_) -
      reinterpret_cast<char*>(&tensor_)) + sizeof(requires_grad_));
}

ParameterProto::~ParameterProto() {
  // @@protoc_insertion_point(destructor:syft.lib.torch.ParameterProto)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ParameterProto::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete tensor_;
  if (this != internal_default_instance()) delete grad_;
}

void ParameterProto::ArenaDtor(void* object) {
  ParameterProto* _this = reinterpret_cast< ParameterProto* >(object);
  (void)_this;
}
void ParameterProto::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ParameterProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ParameterProto& ParameterProto::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ParameterProto_proto_2flib_2ftorch_2fparameter_2eproto.base);
  return *internal_default_instance();
}


void ParameterProto::Clear() {
// @@protoc_insertion_point(message_clear_start:syft.lib.torch.ParameterProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && tensor_ != nullptr) {
    delete tensor_;
  }
  tensor_ = nullptr;
  if (GetArena() == nullptr && grad_ != nullptr) {
    delete grad_;
  }
  grad_ = nullptr;
  requires_grad_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ParameterProto::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .syft.lib.torch.TensorData tensor = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_tensor(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool requires_grad = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          requires_grad_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .syft.lib.torch.TensorData grad = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_grad(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ParameterProto::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:syft.lib.torch.ParameterProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .syft.lib.torch.TensorData tensor = 1;
  if (this->has_tensor()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::tensor(this), target, stream);
  }

  // bool requires_grad = 2;
  if (this->requires_grad() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_requires_grad(), target);
  }

  // .syft.lib.torch.TensorData grad = 3;
  if (this->has_grad()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::grad(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:syft.lib.torch.ParameterProto)
  return target;
}

size_t ParameterProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:syft.lib.torch.ParameterProto)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .syft.lib.torch.TensorData tensor = 1;
  if (this->has_tensor()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *tensor_);
  }

  // .syft.lib.torch.TensorData grad = 3;
  if (this->has_grad()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *grad_);
  }

  // bool requires_grad = 2;
  if (this->requires_grad() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ParameterProto::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:syft.lib.torch.ParameterProto)
  GOOGLE_DCHECK_NE(&from, this);
  const ParameterProto* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ParameterProto>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:syft.lib.torch.ParameterProto)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:syft.lib.torch.ParameterProto)
    MergeFrom(*source);
  }
}

void ParameterProto::MergeFrom(const ParameterProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:syft.lib.torch.ParameterProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_tensor()) {
    _internal_mutable_tensor()->::syft::lib::torch::TensorData::MergeFrom(from._internal_tensor());
  }
  if (from.has_grad()) {
    _internal_mutable_grad()->::syft::lib::torch::TensorData::MergeFrom(from._internal_grad());
  }
  if (from.requires_grad() != 0) {
    _internal_set_requires_grad(from._internal_requires_grad());
  }
}

void ParameterProto::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:syft.lib.torch.ParameterProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ParameterProto::CopyFrom(const ParameterProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:syft.lib.torch.ParameterProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ParameterProto::IsInitialized() const {
  return true;
}

void ParameterProto::InternalSwap(ParameterProto* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ParameterProto, requires_grad_)
      + sizeof(ParameterProto::requires_grad_)
      - PROTOBUF_FIELD_OFFSET(ParameterProto, tensor_)>(
          reinterpret_cast<char*>(&tensor_),
          reinterpret_cast<char*>(&other->tensor_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ParameterProto::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace torch
}  // namespace lib
}  // namespace syft
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::syft::lib::torch::ParameterProto* Arena::CreateMaybeMessage< ::syft::lib::torch::ParameterProto >(Arena* arena) {
  return Arena::CreateMessageInternal< ::syft::lib::torch::ParameterProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
