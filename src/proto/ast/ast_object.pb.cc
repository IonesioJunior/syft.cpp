// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/ast/ast_object.proto

#include "proto/ast/ast_object.pb.h"

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
namespace syft {
namespace ast {
class AstObjectDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<AstObject> _instance;
} _AstObject_default_instance_;
}  // namespace ast
}  // namespace syft
static void InitDefaultsscc_info_AstObject_proto_2fast_2fast_5fobject_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::syft::ast::_AstObject_default_instance_;
    new (ptr) ::syft::ast::AstObject();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_AstObject_proto_2fast_2fast_5fobject_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_AstObject_proto_2fast_2fast_5fobject_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2fast_2fast_5fobject_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2fast_2fast_5fobject_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2fast_2fast_5fobject_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2fast_2fast_5fobject_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::syft::ast::AstObject, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::syft::ast::AstObject)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::syft::ast::_AstObject_default_instance_),
};

const char descriptor_table_protodef_proto_2fast_2fast_5fobject_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032proto/ast/ast_object.proto\022\010syft.ast\"\013"
  "\n\tAstObjectb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2fast_2fast_5fobject_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2fast_2fast_5fobject_2eproto_sccs[1] = {
  &scc_info_AstObject_proto_2fast_2fast_5fobject_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2fast_2fast_5fobject_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fast_2fast_5fobject_2eproto = {
  false, false, descriptor_table_protodef_proto_2fast_2fast_5fobject_2eproto, "proto/ast/ast_object.proto", 59,
  &descriptor_table_proto_2fast_2fast_5fobject_2eproto_once, descriptor_table_proto_2fast_2fast_5fobject_2eproto_sccs, descriptor_table_proto_2fast_2fast_5fobject_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_proto_2fast_2fast_5fobject_2eproto::offsets,
  file_level_metadata_proto_2fast_2fast_5fobject_2eproto, 1, file_level_enum_descriptors_proto_2fast_2fast_5fobject_2eproto, file_level_service_descriptors_proto_2fast_2fast_5fobject_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2fast_2fast_5fobject_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2fast_2fast_5fobject_2eproto)), true);
namespace syft {
namespace ast {

// ===================================================================

class AstObject::_Internal {
 public:
};

AstObject::AstObject(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:syft.ast.AstObject)
}
AstObject::AstObject(const AstObject& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:syft.ast.AstObject)
}

void AstObject::SharedCtor() {
}

AstObject::~AstObject() {
  // @@protoc_insertion_point(destructor:syft.ast.AstObject)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AstObject::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void AstObject::ArenaDtor(void* object) {
  AstObject* _this = reinterpret_cast< AstObject* >(object);
  (void)_this;
}
void AstObject::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AstObject::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AstObject& AstObject::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_AstObject_proto_2fast_2fast_5fobject_2eproto.base);
  return *internal_default_instance();
}


void AstObject::Clear() {
// @@protoc_insertion_point(message_clear_start:syft.ast.AstObject)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AstObject::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* AstObject::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:syft.ast.AstObject)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:syft.ast.AstObject)
  return target;
}

size_t AstObject::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:syft.ast.AstObject)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AstObject::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:syft.ast.AstObject)
  GOOGLE_DCHECK_NE(&from, this);
  const AstObject* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AstObject>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:syft.ast.AstObject)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:syft.ast.AstObject)
    MergeFrom(*source);
  }
}

void AstObject::MergeFrom(const AstObject& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:syft.ast.AstObject)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void AstObject::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:syft.ast.AstObject)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AstObject::CopyFrom(const AstObject& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:syft.ast.AstObject)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AstObject::IsInitialized() const {
  return true;
}

void AstObject::InternalSwap(AstObject* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata AstObject::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace ast
}  // namespace syft
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::syft::ast::AstObject* Arena::CreateMaybeMessage< ::syft::ast::AstObject >(Arena* arena) {
  return Arena::CreateMessageInternal< ::syft::ast::AstObject >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
