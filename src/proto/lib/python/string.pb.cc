// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/lib/python/string.proto

#include "proto/lib/python/string.pb.h"

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
class StringDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<String> _instance;
} _String_default_instance_;
}  // namespace python
}  // namespace lib
}  // namespace syft
static void InitDefaultsscc_info_String_proto_2flib_2fpython_2fstring_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::syft::lib::python::_String_default_instance_;
    new (ptr) ::syft::lib::python::String();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_String_proto_2flib_2fpython_2fstring_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_String_proto_2flib_2fpython_2fstring_2eproto}, {
      &scc_info_UID_proto_2fcore_2fcommon_2fcommon_5fobject_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2flib_2fpython_2fstring_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2flib_2fpython_2fstring_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2flib_2fpython_2fstring_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2flib_2fpython_2fstring_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::syft::lib::python::String, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::syft::lib::python::String, data_),
  PROTOBUF_FIELD_OFFSET(::syft::lib::python::String, id_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::syft::lib::python::String)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::syft::lib::python::_String_default_instance_),
};

const char descriptor_table_protodef_proto_2flib_2fpython_2fstring_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035proto/lib/python/string.proto\022\017syft.li"
  "b.python\032%proto/core/common/common_objec"
  "t.proto\"9\n\006String\022\014\n\004data\030\001 \001(\t\022!\n\002id\030\002 "
  "\001(\0132\025.syft.core.common.UIDb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2flib_2fpython_2fstring_2eproto_deps[1] = {
  &::descriptor_table_proto_2fcore_2fcommon_2fcommon_5fobject_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2flib_2fpython_2fstring_2eproto_sccs[1] = {
  &scc_info_String_proto_2flib_2fpython_2fstring_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2flib_2fpython_2fstring_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2flib_2fpython_2fstring_2eproto = {
  false, false, descriptor_table_protodef_proto_2flib_2fpython_2fstring_2eproto, "proto/lib/python/string.proto", 154,
  &descriptor_table_proto_2flib_2fpython_2fstring_2eproto_once, descriptor_table_proto_2flib_2fpython_2fstring_2eproto_sccs, descriptor_table_proto_2flib_2fpython_2fstring_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_proto_2flib_2fpython_2fstring_2eproto::offsets,
  file_level_metadata_proto_2flib_2fpython_2fstring_2eproto, 1, file_level_enum_descriptors_proto_2flib_2fpython_2fstring_2eproto, file_level_service_descriptors_proto_2flib_2fpython_2fstring_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2flib_2fpython_2fstring_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2flib_2fpython_2fstring_2eproto)), true);
namespace syft {
namespace lib {
namespace python {

// ===================================================================

class String::_Internal {
 public:
  static const ::syft::core::common::UID& id(const String* msg);
};

const ::syft::core::common::UID&
String::_Internal::id(const String* msg) {
  return *msg->id_;
}
void String::clear_id() {
  if (GetArena() == nullptr && id_ != nullptr) {
    delete id_;
  }
  id_ = nullptr;
}
String::String(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:syft.lib.python.String)
}
String::String(const String& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_data().empty()) {
    data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_data(),
      GetArena());
  }
  if (from._internal_has_id()) {
    id_ = new ::syft::core::common::UID(*from.id_);
  } else {
    id_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:syft.lib.python.String)
}

void String::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_String_proto_2flib_2fpython_2fstring_2eproto.base);
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  id_ = nullptr;
}

String::~String() {
  // @@protoc_insertion_point(destructor:syft.lib.python.String)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void String::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete id_;
}

void String::ArenaDtor(void* object) {
  String* _this = reinterpret_cast< String* >(object);
  (void)_this;
}
void String::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void String::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const String& String::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_String_proto_2flib_2fpython_2fstring_2eproto.base);
  return *internal_default_instance();
}


void String::Clear() {
// @@protoc_insertion_point(message_clear_start:syft.lib.python.String)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  if (GetArena() == nullptr && id_ != nullptr) {
    delete id_;
  }
  id_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* String::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "syft.lib.python.String.data"));
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

::PROTOBUF_NAMESPACE_ID::uint8* String::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:syft.lib.python.String)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string data = 1;
  if (this->data().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_data().data(), static_cast<int>(this->_internal_data().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "syft.lib.python.String.data");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_data(), target);
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
  // @@protoc_insertion_point(serialize_to_array_end:syft.lib.python.String)
  return target;
}

size_t String::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:syft.lib.python.String)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string data = 1;
  if (this->data().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_data());
  }

  // .syft.core.common.UID id = 2;
  if (this->has_id()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *id_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void String::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:syft.lib.python.String)
  GOOGLE_DCHECK_NE(&from, this);
  const String* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<String>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:syft.lib.python.String)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:syft.lib.python.String)
    MergeFrom(*source);
  }
}

void String::MergeFrom(const String& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:syft.lib.python.String)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.data().size() > 0) {
    _internal_set_data(from._internal_data());
  }
  if (from.has_id()) {
    _internal_mutable_id()->::syft::core::common::UID::MergeFrom(from._internal_id());
  }
}

void String::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:syft.lib.python.String)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void String::CopyFrom(const String& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:syft.lib.python.String)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool String::IsInitialized() const {
  return true;
}

void String::InternalSwap(String* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  data_.Swap(&other->data_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata String::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace python
}  // namespace lib
}  // namespace syft
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::syft::lib::python::String* Arena::CreateMaybeMessage< ::syft::lib::python::String >(Arena* arena) {
  return Arena::CreateMessageInternal< ::syft::lib::python::String >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>