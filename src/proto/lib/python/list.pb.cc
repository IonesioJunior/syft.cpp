// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/lib/python/list.proto

#include "proto/lib/python/list.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_proto_2fcore_2fstore_2fstore_5fobject_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_StorableObject_proto_2fcore_2fstore_2fstore_5fobject_2eproto;
namespace syft {
namespace lib {
namespace python {
class ListDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<List> _instance;
} _List_default_instance_;
}  // namespace python
}  // namespace lib
}  // namespace syft
static void InitDefaultsscc_info_List_proto_2flib_2fpython_2flist_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::syft::lib::python::_List_default_instance_;
    new (ptr) ::syft::lib::python::List();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_List_proto_2flib_2fpython_2flist_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_List_proto_2flib_2fpython_2flist_2eproto}, {
      &scc_info_StorableObject_proto_2fcore_2fstore_2fstore_5fobject_2eproto.base,
      &scc_info_UID_proto_2fcore_2fcommon_2fcommon_5fobject_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_proto_2flib_2fpython_2flist_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_proto_2flib_2fpython_2flist_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_proto_2flib_2fpython_2flist_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_proto_2flib_2fpython_2flist_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::syft::lib::python::List, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::syft::lib::python::List, data_),
  PROTOBUF_FIELD_OFFSET(::syft::lib::python::List, id_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::syft::lib::python::List)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::syft::lib::python::_List_default_instance_),
};

const char descriptor_table_protodef_proto_2flib_2fpython_2flist_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033proto/lib/python/list.proto\022\017syft.lib."
  "python\032%proto/core/common/common_object."
  "proto\032#proto/core/store/store_object.pro"
  "to\"X\n\004List\022-\n\004data\030\001 \003(\0132\037.syft.core.sto"
  "re.StorableObject\022!\n\002id\030\002 \001(\0132\025.syft.cor"
  "e.common.UIDb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_proto_2flib_2fpython_2flist_2eproto_deps[2] = {
  &::descriptor_table_proto_2fcore_2fcommon_2fcommon_5fobject_2eproto,
  &::descriptor_table_proto_2fcore_2fstore_2fstore_5fobject_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_proto_2flib_2fpython_2flist_2eproto_sccs[1] = {
  &scc_info_List_proto_2flib_2fpython_2flist_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_proto_2flib_2fpython_2flist_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2flib_2fpython_2flist_2eproto = {
  false, false, descriptor_table_protodef_proto_2flib_2fpython_2flist_2eproto, "proto/lib/python/list.proto", 220,
  &descriptor_table_proto_2flib_2fpython_2flist_2eproto_once, descriptor_table_proto_2flib_2fpython_2flist_2eproto_sccs, descriptor_table_proto_2flib_2fpython_2flist_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_proto_2flib_2fpython_2flist_2eproto::offsets,
  file_level_metadata_proto_2flib_2fpython_2flist_2eproto, 1, file_level_enum_descriptors_proto_2flib_2fpython_2flist_2eproto, file_level_service_descriptors_proto_2flib_2fpython_2flist_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_proto_2flib_2fpython_2flist_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_proto_2flib_2fpython_2flist_2eproto)), true);
namespace syft {
namespace lib {
namespace python {

// ===================================================================

class List::_Internal {
 public:
  static const ::syft::core::common::UID& id(const List* msg);
};

const ::syft::core::common::UID&
List::_Internal::id(const List* msg) {
  return *msg->id_;
}
void List::clear_data() {
  data_.Clear();
}
void List::clear_id() {
  if (GetArena() == nullptr && id_ != nullptr) {
    delete id_;
  }
  id_ = nullptr;
}
List::List(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  data_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:syft.lib.python.List)
}
List::List(const List& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      data_(from.data_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_id()) {
    id_ = new ::syft::core::common::UID(*from.id_);
  } else {
    id_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:syft.lib.python.List)
}

void List::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_List_proto_2flib_2fpython_2flist_2eproto.base);
  id_ = nullptr;
}

List::~List() {
  // @@protoc_insertion_point(destructor:syft.lib.python.List)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void List::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete id_;
}

void List::ArenaDtor(void* object) {
  List* _this = reinterpret_cast< List* >(object);
  (void)_this;
}
void List::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void List::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const List& List::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_List_proto_2flib_2fpython_2flist_2eproto.base);
  return *internal_default_instance();
}


void List::Clear() {
// @@protoc_insertion_point(message_clear_start:syft.lib.python.List)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.Clear();
  if (GetArena() == nullptr && id_ != nullptr) {
    delete id_;
  }
  id_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* List::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .syft.core.store.StorableObject data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_data(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* List::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:syft.lib.python.List)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .syft.core.store.StorableObject data = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_data_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, this->_internal_data(i), target, stream);
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
  // @@protoc_insertion_point(serialize_to_array_end:syft.lib.python.List)
  return target;
}

size_t List::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:syft.lib.python.List)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .syft.core.store.StorableObject data = 1;
  total_size += 1UL * this->_internal_data_size();
  for (const auto& msg : this->data_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
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

void List::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:syft.lib.python.List)
  GOOGLE_DCHECK_NE(&from, this);
  const List* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<List>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:syft.lib.python.List)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:syft.lib.python.List)
    MergeFrom(*source);
  }
}

void List::MergeFrom(const List& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:syft.lib.python.List)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
  if (from.has_id()) {
    _internal_mutable_id()->::syft::core::common::UID::MergeFrom(from._internal_id());
  }
}

void List::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:syft.lib.python.List)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void List::CopyFrom(const List& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:syft.lib.python.List)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool List::IsInitialized() const {
  return true;
}

void List::InternalSwap(List* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  data_.InternalSwap(&other->data_);
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata List::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace python
}  // namespace lib
}  // namespace syft
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::syft::lib::python::List* Arena::CreateMaybeMessage< ::syft::lib::python::List >(Arena* arena) {
  return Arena::CreateMessageInternal< ::syft::lib::python::List >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
