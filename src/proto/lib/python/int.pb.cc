// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/lib/python/int.proto

#include "proto/lib/python/int.pb.h"

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
namespace syft {
namespace lib {
namespace python {
class IntDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Int> _instance;
} _Int_default_instance_;
}  // namespace python
}  // namespace lib
}  // namespace syft
static void InitDefaultsscc_info_Int_proto_2flib_2fpython_2fint_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::syft::lib::python::_Int_default_instance_;
    new (ptr) ::syft::lib::python::Int();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Int_proto_2flib_2fpython_2fint_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Int_proto_2flib_2fpython_2fint_2eproto}, {
      &scc_info_UID_proto_2fcore_2fcommon_2fcommon_5fobject_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2flib_2fpython_2fint_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2flib_2fpython_2fint_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2flib_2fpython_2fint_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2flib_2fpython_2fint_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::syft::lib::python::Int, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::syft::lib::python::Int, data_),
  PROTOBUF_FIELD_OFFSET(::syft::lib::python::Int, id_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::syft::lib::python::Int)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::syft::lib::python::_Int_default_instance_),
};

const char descriptor_table_protodef_proto_2flib_2fpython_2fint_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032proto/lib/python/int.proto\022\017syft.lib.p"
  "ython\032%proto/core/common/common_object.p"
  "roto\"6\n\003Int\022\014\n\004data\030\001 \001(\003\022!\n\002id\030\002 \001(\0132\025."
  "syft.core.common.UIDb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2flib_2fpython_2fint_2eproto_deps[1] = {
  &::descriptor_table_proto_2fcore_2fcommon_2fcommon_5fobject_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2flib_2fpython_2fint_2eproto_sccs[1] = {
  &scc_info_Int_proto_2flib_2fpython_2fint_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2flib_2fpython_2fint_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2flib_2fpython_2fint_2eproto = {
  false, false, descriptor_table_protodef_proto_2flib_2fpython_2fint_2eproto, "proto/lib/python/int.proto", 148,
  &descriptor_table_proto_2flib_2fpython_2fint_2eproto_once, descriptor_table_proto_2flib_2fpython_2fint_2eproto_sccs, descriptor_table_proto_2flib_2fpython_2fint_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_proto_2flib_2fpython_2fint_2eproto::offsets,
  file_level_metadata_proto_2flib_2fpython_2fint_2eproto, 1, file_level_enum_descriptors_proto_2flib_2fpython_2fint_2eproto, file_level_service_descriptors_proto_2flib_2fpython_2fint_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2flib_2fpython_2fint_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2flib_2fpython_2fint_2eproto)), true);
namespace syft {
namespace lib {
namespace python {

// ===================================================================

class Int::_Internal {
 public:
  static const ::syft::core::common::UID& id(const Int* msg);
};

const ::syft::core::common::UID&
Int::_Internal::id(const Int* msg) {
  return *msg->id_;
}
void Int::clear_id() {
  if (GetArena() == nullptr && id_ != nullptr) {
    delete id_;
  }
  id_ = nullptr;
}
Int::Int(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:syft.lib.python.Int)
}
Int::Int(const Int& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_id()) {
    id_ = new ::syft::core::common::UID(*from.id_);
  } else {
    id_ = nullptr;
  }
  data_ = from.data_;
  // @@protoc_insertion_point(copy_constructor:syft.lib.python.Int)
}

void Int::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Int_proto_2flib_2fpython_2fint_2eproto.base);
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&data_) -
      reinterpret_cast<char*>(&id_)) + sizeof(data_));
}

Int::~Int() {
  // @@protoc_insertion_point(destructor:syft.lib.python.Int)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Int::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete id_;
}

void Int::ArenaDtor(void* object) {
  Int* _this = reinterpret_cast< Int* >(object);
  (void)_this;
}
void Int::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Int::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Int& Int::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Int_proto_2flib_2fpython_2fint_2eproto.base);
  return *internal_default_instance();
}


void Int::Clear() {
// @@protoc_insertion_point(message_clear_start:syft.lib.python.Int)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && id_ != nullptr) {
    delete id_;
  }
  id_ = nullptr;
  data_ = PROTOBUF_LONGLONG(0);
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Int::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int64 data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          data_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .syft.core.common.UID id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_id(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Int::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:syft.lib.python.Int)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 data = 1;
  if (this->data() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_data(), target);
  }

  // .syft.core.common.UID id = 2;
  if (this->has_id()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::id(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:syft.lib.python.Int)
  return target;
}

size_t Int::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:syft.lib.python.Int)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .syft.core.common.UID id = 2;
  if (this->has_id()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *id_);
  }

  // int64 data = 1;
  if (this->data() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_data());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Int::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:syft.lib.python.Int)
  GOOGLE_DCHECK_NE(&from, this);
  const Int* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Int>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:syft.lib.python.Int)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:syft.lib.python.Int)
    MergeFrom(*source);
  }
}

void Int::MergeFrom(const Int& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:syft.lib.python.Int)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_id()) {
    _internal_mutable_id()->::syft::core::common::UID::MergeFrom(from._internal_id());
  }
  if (from.data() != 0) {
    _internal_set_data(from._internal_data());
  }
}

void Int::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:syft.lib.python.Int)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Int::CopyFrom(const Int& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:syft.lib.python.Int)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Int::IsInitialized() const {
  return true;
}

void Int::InternalSwap(Int* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Int, data_)
      + sizeof(Int::data_)
      - PROTOBUF_FIELD_OFFSET(Int, id_)>(
          reinterpret_cast<char*>(&id_),
          reinterpret_cast<char*>(&other->id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Int::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace python
}  // namespace lib
}  // namespace syft
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::syft::lib::python::Int* Arena::CreateMaybeMessage< ::syft::lib::python::Int >(Arena* arena) {
  return Arena::CreateMessageInternal< ::syft::lib::python::Int >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
