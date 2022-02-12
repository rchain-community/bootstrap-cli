// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/field_mask.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2ffield_5fmask_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2ffield_5fmask_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2ffield_5fmask_2eproto PROTOBUF_EXPORT
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct PROTOBUF_EXPORT TableStruct_google_2fprotobuf_2ffield_5fmask_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern PROTOBUF_EXPORT const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2ffield_5fmask_2eproto;
PROTOBUF_NAMESPACE_OPEN
class FieldMask;
class FieldMaskDefaultTypeInternal;
PROTOBUF_EXPORT extern FieldMaskDefaultTypeInternal _FieldMask_default_instance_;
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_EXPORT PROTOBUF_NAMESPACE_ID::FieldMask* Arena::CreateMaybeMessage<PROTOBUF_NAMESPACE_ID::FieldMask>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
PROTOBUF_NAMESPACE_OPEN

// ===================================================================

class PROTOBUF_EXPORT FieldMask :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.protobuf.FieldMask) */ {
 public:
  FieldMask();
  virtual ~FieldMask();

  FieldMask(const FieldMask& from);
  FieldMask(FieldMask&& from) noexcept
    : FieldMask() {
    *this = ::std::move(from);
  }

  inline FieldMask& operator=(const FieldMask& from) {
    CopyFrom(from);
    return *this;
  }
  inline FieldMask& operator=(FieldMask&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArena() const final {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const final {
    return MaybeArenaPtr();
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
  static const FieldMask& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FieldMask* internal_default_instance() {
    return reinterpret_cast<const FieldMask*>(
               &_FieldMask_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FieldMask& a, FieldMask& b) {
    a.Swap(&b);
  }
  inline void Swap(FieldMask* other) {
    if (other == this) return;
    if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FieldMask* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FieldMask* New() const final {
    return CreateMaybeMessage<FieldMask>(nullptr);
  }

  FieldMask* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FieldMask>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FieldMask& from);
  void MergeFrom(const FieldMask& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FieldMask* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.protobuf.FieldMask";
  }
  protected:
  explicit FieldMask(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fprotobuf_2ffield_5fmask_2eproto);
    return ::descriptor_table_google_2fprotobuf_2ffield_5fmask_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPathsFieldNumber = 1,
  };
  // repeated string paths = 1;
  int paths_size() const;
  void clear_paths();
  const std::string& paths(int index) const;
  std::string* mutable_paths(int index);
  void set_paths(int index, const std::string& value);
  void set_paths(int index, std::string&& value);
  void set_paths(int index, const char* value);
  void set_paths(int index, const char* value, size_t size);
  std::string* add_paths();
  void add_paths(const std::string& value);
  void add_paths(std::string&& value);
  void add_paths(const char* value);
  void add_paths(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& paths() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_paths();

  // @@protoc_insertion_point(class_scope:google.protobuf.FieldMask)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> paths_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fprotobuf_2ffield_5fmask_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FieldMask

// repeated string paths = 1;
inline int FieldMask::paths_size() const {
  return paths_.size();
}
inline void FieldMask::clear_paths() {
  paths_.Clear();
}
inline const std::string& FieldMask::paths(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.FieldMask.paths)
  return paths_.Get(index);
}
inline std::string* FieldMask::mutable_paths(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.FieldMask.paths)
  return paths_.Mutable(index);
}
inline void FieldMask::set_paths(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:google.protobuf.FieldMask.paths)
  paths_.Mutable(index)->assign(value);
}
inline void FieldMask::set_paths(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:google.protobuf.FieldMask.paths)
  paths_.Mutable(index)->assign(std::move(value));
}
inline void FieldMask::set_paths(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  paths_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.protobuf.FieldMask.paths)
}
inline void FieldMask::set_paths(int index, const char* value, size_t size) {
  paths_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.FieldMask.paths)
}
inline std::string* FieldMask::add_paths() {
  // @@protoc_insertion_point(field_add_mutable:google.protobuf.FieldMask.paths)
  return paths_.Add();
}
inline void FieldMask::add_paths(const std::string& value) {
  paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.protobuf.FieldMask.paths)
}
inline void FieldMask::add_paths(std::string&& value) {
  paths_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:google.protobuf.FieldMask.paths)
}
inline void FieldMask::add_paths(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.protobuf.FieldMask.paths)
}
inline void FieldMask::add_paths(const char* value, size_t size) {
  paths_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.protobuf.FieldMask.paths)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
FieldMask::paths() const {
  // @@protoc_insertion_point(field_list:google.protobuf.FieldMask.paths)
  return paths_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
FieldMask::mutable_paths() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.FieldMask.paths)
  return &paths_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2ffield_5fmask_2eproto
