// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PB_DistributedQueries.proto

#ifndef PROTOBUF_PB_5fDistributedQueries_2eproto__INCLUDED
#define PROTOBUF_PB_5fDistributedQueries_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_PB_5fDistributedQueries_2eproto();
void protobuf_AssignDesc_PB_5fDistributedQueries_2eproto();
void protobuf_ShutdownFile_PB_5fDistributedQueries_2eproto();

class PB_IsDangerousFrame_0;
class PB_IsDangerousFrame_0Vector;
class PB_IsDangerousMatch;
class PB_IsDangerousMatchSet;
class PB_ShouldCollideFrame_0;
class PB_ShouldCollideFrame_0Vector;
class PB_ShouldCollideMatch;
class PB_ShouldCollideMatchSet;

// ===================================================================

class PB_ShouldCollideFrame_0 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PB_ShouldCollideFrame_0) */ {
 public:
  PB_ShouldCollideFrame_0();
  virtual ~PB_ShouldCollideFrame_0();

  PB_ShouldCollideFrame_0(const PB_ShouldCollideFrame_0& from);

  inline PB_ShouldCollideFrame_0& operator=(const PB_ShouldCollideFrame_0& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PB_ShouldCollideFrame_0& default_instance();

  void Swap(PB_ShouldCollideFrame_0* other);

  // implements Message ----------------------------------------------

  inline PB_ShouldCollideFrame_0* New() const { return New(NULL); }

  PB_ShouldCollideFrame_0* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PB_ShouldCollideFrame_0& from);
  void MergeFrom(const PB_ShouldCollideFrame_0& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PB_ShouldCollideFrame_0* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 _0 = 1;
  void clear__0();
  static const int k0FieldNumber = 1;
  ::google::protobuf::int32 _0() const;
  void set__0(::google::protobuf::int32 value);

  // optional int32 _1 = 2;
  void clear__1();
  static const int k1FieldNumber = 2;
  ::google::protobuf::int32 _1() const;
  void set__1(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PB_ShouldCollideFrame_0)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 _0_;
  ::google::protobuf::int32 _1_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_AssignDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_ShutdownFile_PB_5fDistributedQueries_2eproto();

  void InitAsDefaultInstance();
  static PB_ShouldCollideFrame_0* default_instance_;
};
// -------------------------------------------------------------------

class PB_ShouldCollideFrame_0Vector : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PB_ShouldCollideFrame_0Vector) */ {
 public:
  PB_ShouldCollideFrame_0Vector();
  virtual ~PB_ShouldCollideFrame_0Vector();

  PB_ShouldCollideFrame_0Vector(const PB_ShouldCollideFrame_0Vector& from);

  inline PB_ShouldCollideFrame_0Vector& operator=(const PB_ShouldCollideFrame_0Vector& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PB_ShouldCollideFrame_0Vector& default_instance();

  void Swap(PB_ShouldCollideFrame_0Vector* other);

  // implements Message ----------------------------------------------

  inline PB_ShouldCollideFrame_0Vector* New() const { return New(NULL); }

  PB_ShouldCollideFrame_0Vector* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PB_ShouldCollideFrame_0Vector& from);
  void MergeFrom(const PB_ShouldCollideFrame_0Vector& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PB_ShouldCollideFrame_0Vector* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .PB_ShouldCollideFrame_0 frames = 1;
  int frames_size() const;
  void clear_frames();
  static const int kFramesFieldNumber = 1;
  const ::PB_ShouldCollideFrame_0& frames(int index) const;
  ::PB_ShouldCollideFrame_0* mutable_frames(int index);
  ::PB_ShouldCollideFrame_0* add_frames();
  ::google::protobuf::RepeatedPtrField< ::PB_ShouldCollideFrame_0 >*
      mutable_frames();
  const ::google::protobuf::RepeatedPtrField< ::PB_ShouldCollideFrame_0 >&
      frames() const;

  // @@protoc_insertion_point(class_scope:PB_ShouldCollideFrame_0Vector)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::PB_ShouldCollideFrame_0 > frames_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_AssignDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_ShutdownFile_PB_5fDistributedQueries_2eproto();

  void InitAsDefaultInstance();
  static PB_ShouldCollideFrame_0Vector* default_instance_;
};
// -------------------------------------------------------------------

class PB_IsDangerousMatch : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PB_IsDangerousMatch) */ {
 public:
  PB_IsDangerousMatch();
  virtual ~PB_IsDangerousMatch();

  PB_IsDangerousMatch(const PB_IsDangerousMatch& from);

  inline PB_IsDangerousMatch& operator=(const PB_IsDangerousMatch& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PB_IsDangerousMatch& default_instance();

  void Swap(PB_IsDangerousMatch* other);

  // implements Message ----------------------------------------------

  inline PB_IsDangerousMatch* New() const { return New(NULL); }

  PB_IsDangerousMatch* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PB_IsDangerousMatch& from);
  void MergeFrom(const PB_IsDangerousMatch& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PB_IsDangerousMatch* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 segment = 1;
  void clear_segment();
  static const int kSegmentFieldNumber = 1;
  ::google::protobuf::int32 segment() const;
  void set_segment(::google::protobuf::int32 value);

  // optional int32 turnout = 2;
  void clear_turnout();
  static const int kTurnoutFieldNumber = 2;
  ::google::protobuf::int32 turnout() const;
  void set_turnout(::google::protobuf::int32 value);

  // optional int32 train = 3;
  void clear_train();
  static const int kTrainFieldNumber = 3;
  ::google::protobuf::int32 train() const;
  void set_train(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PB_IsDangerousMatch)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 segment_;
  ::google::protobuf::int32 turnout_;
  ::google::protobuf::int32 train_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_AssignDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_ShutdownFile_PB_5fDistributedQueries_2eproto();

  void InitAsDefaultInstance();
  static PB_IsDangerousMatch* default_instance_;
};
// -------------------------------------------------------------------

class PB_IsDangerousMatchSet : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PB_IsDangerousMatchSet) */ {
 public:
  PB_IsDangerousMatchSet();
  virtual ~PB_IsDangerousMatchSet();

  PB_IsDangerousMatchSet(const PB_IsDangerousMatchSet& from);

  inline PB_IsDangerousMatchSet& operator=(const PB_IsDangerousMatchSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PB_IsDangerousMatchSet& default_instance();

  void Swap(PB_IsDangerousMatchSet* other);

  // implements Message ----------------------------------------------

  inline PB_IsDangerousMatchSet* New() const { return New(NULL); }

  PB_IsDangerousMatchSet* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PB_IsDangerousMatchSet& from);
  void MergeFrom(const PB_IsDangerousMatchSet& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PB_IsDangerousMatchSet* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .PB_IsDangerousMatch matches = 1;
  int matches_size() const;
  void clear_matches();
  static const int kMatchesFieldNumber = 1;
  const ::PB_IsDangerousMatch& matches(int index) const;
  ::PB_IsDangerousMatch* mutable_matches(int index);
  ::PB_IsDangerousMatch* add_matches();
  ::google::protobuf::RepeatedPtrField< ::PB_IsDangerousMatch >*
      mutable_matches();
  const ::google::protobuf::RepeatedPtrField< ::PB_IsDangerousMatch >&
      matches() const;

  // @@protoc_insertion_point(class_scope:PB_IsDangerousMatchSet)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::PB_IsDangerousMatch > matches_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_AssignDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_ShutdownFile_PB_5fDistributedQueries_2eproto();

  void InitAsDefaultInstance();
  static PB_IsDangerousMatchSet* default_instance_;
};
// -------------------------------------------------------------------

class PB_IsDangerousFrame_0 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PB_IsDangerousFrame_0) */ {
 public:
  PB_IsDangerousFrame_0();
  virtual ~PB_IsDangerousFrame_0();

  PB_IsDangerousFrame_0(const PB_IsDangerousFrame_0& from);

  inline PB_IsDangerousFrame_0& operator=(const PB_IsDangerousFrame_0& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PB_IsDangerousFrame_0& default_instance();

  void Swap(PB_IsDangerousFrame_0* other);

  // implements Message ----------------------------------------------

  inline PB_IsDangerousFrame_0* New() const { return New(NULL); }

  PB_IsDangerousFrame_0* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PB_IsDangerousFrame_0& from);
  void MergeFrom(const PB_IsDangerousFrame_0& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PB_IsDangerousFrame_0* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 _0 = 1;
  void clear__0();
  static const int k0FieldNumber = 1;
  ::google::protobuf::int32 _0() const;
  void set__0(::google::protobuf::int32 value);

  // optional int32 _1 = 2;
  void clear__1();
  static const int k1FieldNumber = 2;
  ::google::protobuf::int32 _1() const;
  void set__1(::google::protobuf::int32 value);

  // optional int32 _2 = 3;
  void clear__2();
  static const int k2FieldNumber = 3;
  ::google::protobuf::int32 _2() const;
  void set__2(::google::protobuf::int32 value);

  // optional int32 _3 = 4;
  void clear__3();
  static const int k3FieldNumber = 4;
  ::google::protobuf::int32 _3() const;
  void set__3(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PB_IsDangerousFrame_0)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 _0_;
  ::google::protobuf::int32 _1_;
  ::google::protobuf::int32 _2_;
  ::google::protobuf::int32 _3_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_AssignDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_ShutdownFile_PB_5fDistributedQueries_2eproto();

  void InitAsDefaultInstance();
  static PB_IsDangerousFrame_0* default_instance_;
};
// -------------------------------------------------------------------

class PB_IsDangerousFrame_0Vector : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PB_IsDangerousFrame_0Vector) */ {
 public:
  PB_IsDangerousFrame_0Vector();
  virtual ~PB_IsDangerousFrame_0Vector();

  PB_IsDangerousFrame_0Vector(const PB_IsDangerousFrame_0Vector& from);

  inline PB_IsDangerousFrame_0Vector& operator=(const PB_IsDangerousFrame_0Vector& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PB_IsDangerousFrame_0Vector& default_instance();

  void Swap(PB_IsDangerousFrame_0Vector* other);

  // implements Message ----------------------------------------------

  inline PB_IsDangerousFrame_0Vector* New() const { return New(NULL); }

  PB_IsDangerousFrame_0Vector* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PB_IsDangerousFrame_0Vector& from);
  void MergeFrom(const PB_IsDangerousFrame_0Vector& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PB_IsDangerousFrame_0Vector* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .PB_IsDangerousFrame_0 frames = 1;
  int frames_size() const;
  void clear_frames();
  static const int kFramesFieldNumber = 1;
  const ::PB_IsDangerousFrame_0& frames(int index) const;
  ::PB_IsDangerousFrame_0* mutable_frames(int index);
  ::PB_IsDangerousFrame_0* add_frames();
  ::google::protobuf::RepeatedPtrField< ::PB_IsDangerousFrame_0 >*
      mutable_frames();
  const ::google::protobuf::RepeatedPtrField< ::PB_IsDangerousFrame_0 >&
      frames() const;

  // @@protoc_insertion_point(class_scope:PB_IsDangerousFrame_0Vector)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::PB_IsDangerousFrame_0 > frames_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_AssignDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_ShutdownFile_PB_5fDistributedQueries_2eproto();

  void InitAsDefaultInstance();
  static PB_IsDangerousFrame_0Vector* default_instance_;
};
// -------------------------------------------------------------------

class PB_ShouldCollideMatch : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PB_ShouldCollideMatch) */ {
 public:
  PB_ShouldCollideMatch();
  virtual ~PB_ShouldCollideMatch();

  PB_ShouldCollideMatch(const PB_ShouldCollideMatch& from);

  inline PB_ShouldCollideMatch& operator=(const PB_ShouldCollideMatch& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PB_ShouldCollideMatch& default_instance();

  void Swap(PB_ShouldCollideMatch* other);

  // implements Message ----------------------------------------------

  inline PB_ShouldCollideMatch* New() const { return New(NULL); }

  PB_ShouldCollideMatch* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PB_ShouldCollideMatch& from);
  void MergeFrom(const PB_ShouldCollideMatch& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PB_ShouldCollideMatch* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 rp = 1;
  void clear_rp();
  static const int kRpFieldNumber = 1;
  ::google::protobuf::int32 rp() const;
  void set_rp(::google::protobuf::int32 value);

  // optional int32 tr = 2;
  void clear_tr();
  static const int kTrFieldNumber = 2;
  ::google::protobuf::int32 tr() const;
  void set_tr(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PB_ShouldCollideMatch)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 rp_;
  ::google::protobuf::int32 tr_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_AssignDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_ShutdownFile_PB_5fDistributedQueries_2eproto();

  void InitAsDefaultInstance();
  static PB_ShouldCollideMatch* default_instance_;
};
// -------------------------------------------------------------------

class PB_ShouldCollideMatchSet : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PB_ShouldCollideMatchSet) */ {
 public:
  PB_ShouldCollideMatchSet();
  virtual ~PB_ShouldCollideMatchSet();

  PB_ShouldCollideMatchSet(const PB_ShouldCollideMatchSet& from);

  inline PB_ShouldCollideMatchSet& operator=(const PB_ShouldCollideMatchSet& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PB_ShouldCollideMatchSet& default_instance();

  void Swap(PB_ShouldCollideMatchSet* other);

  // implements Message ----------------------------------------------

  inline PB_ShouldCollideMatchSet* New() const { return New(NULL); }

  PB_ShouldCollideMatchSet* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PB_ShouldCollideMatchSet& from);
  void MergeFrom(const PB_ShouldCollideMatchSet& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PB_ShouldCollideMatchSet* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .PB_ShouldCollideMatch matches = 1;
  int matches_size() const;
  void clear_matches();
  static const int kMatchesFieldNumber = 1;
  const ::PB_ShouldCollideMatch& matches(int index) const;
  ::PB_ShouldCollideMatch* mutable_matches(int index);
  ::PB_ShouldCollideMatch* add_matches();
  ::google::protobuf::RepeatedPtrField< ::PB_ShouldCollideMatch >*
      mutable_matches();
  const ::google::protobuf::RepeatedPtrField< ::PB_ShouldCollideMatch >&
      matches() const;

  // @@protoc_insertion_point(class_scope:PB_ShouldCollideMatchSet)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::PB_ShouldCollideMatch > matches_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_AssignDesc_PB_5fDistributedQueries_2eproto();
  friend void protobuf_ShutdownFile_PB_5fDistributedQueries_2eproto();

  void InitAsDefaultInstance();
  static PB_ShouldCollideMatchSet* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PB_ShouldCollideFrame_0

// optional int32 _0 = 1;
inline void PB_ShouldCollideFrame_0::clear__0() {
  _0_ = 0;
}
inline ::google::protobuf::int32 PB_ShouldCollideFrame_0::_0() const {
  // @@protoc_insertion_point(field_get:PB_ShouldCollideFrame_0._0)
  return _0_;
}
inline void PB_ShouldCollideFrame_0::set__0(::google::protobuf::int32 value) {
  
  _0_ = value;
  // @@protoc_insertion_point(field_set:PB_ShouldCollideFrame_0._0)
}

// optional int32 _1 = 2;
inline void PB_ShouldCollideFrame_0::clear__1() {
  _1_ = 0;
}
inline ::google::protobuf::int32 PB_ShouldCollideFrame_0::_1() const {
  // @@protoc_insertion_point(field_get:PB_ShouldCollideFrame_0._1)
  return _1_;
}
inline void PB_ShouldCollideFrame_0::set__1(::google::protobuf::int32 value) {
  
  _1_ = value;
  // @@protoc_insertion_point(field_set:PB_ShouldCollideFrame_0._1)
}

// -------------------------------------------------------------------

// PB_ShouldCollideFrame_0Vector

// repeated .PB_ShouldCollideFrame_0 frames = 1;
inline int PB_ShouldCollideFrame_0Vector::frames_size() const {
  return frames_.size();
}
inline void PB_ShouldCollideFrame_0Vector::clear_frames() {
  frames_.Clear();
}
inline const ::PB_ShouldCollideFrame_0& PB_ShouldCollideFrame_0Vector::frames(int index) const {
  // @@protoc_insertion_point(field_get:PB_ShouldCollideFrame_0Vector.frames)
  return frames_.Get(index);
}
inline ::PB_ShouldCollideFrame_0* PB_ShouldCollideFrame_0Vector::mutable_frames(int index) {
  // @@protoc_insertion_point(field_mutable:PB_ShouldCollideFrame_0Vector.frames)
  return frames_.Mutable(index);
}
inline ::PB_ShouldCollideFrame_0* PB_ShouldCollideFrame_0Vector::add_frames() {
  // @@protoc_insertion_point(field_add:PB_ShouldCollideFrame_0Vector.frames)
  return frames_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PB_ShouldCollideFrame_0 >*
PB_ShouldCollideFrame_0Vector::mutable_frames() {
  // @@protoc_insertion_point(field_mutable_list:PB_ShouldCollideFrame_0Vector.frames)
  return &frames_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PB_ShouldCollideFrame_0 >&
PB_ShouldCollideFrame_0Vector::frames() const {
  // @@protoc_insertion_point(field_list:PB_ShouldCollideFrame_0Vector.frames)
  return frames_;
}

// -------------------------------------------------------------------

// PB_IsDangerousMatch

// optional int32 segment = 1;
inline void PB_IsDangerousMatch::clear_segment() {
  segment_ = 0;
}
inline ::google::protobuf::int32 PB_IsDangerousMatch::segment() const {
  // @@protoc_insertion_point(field_get:PB_IsDangerousMatch.segment)
  return segment_;
}
inline void PB_IsDangerousMatch::set_segment(::google::protobuf::int32 value) {
  
  segment_ = value;
  // @@protoc_insertion_point(field_set:PB_IsDangerousMatch.segment)
}

// optional int32 turnout = 2;
inline void PB_IsDangerousMatch::clear_turnout() {
  turnout_ = 0;
}
inline ::google::protobuf::int32 PB_IsDangerousMatch::turnout() const {
  // @@protoc_insertion_point(field_get:PB_IsDangerousMatch.turnout)
  return turnout_;
}
inline void PB_IsDangerousMatch::set_turnout(::google::protobuf::int32 value) {
  
  turnout_ = value;
  // @@protoc_insertion_point(field_set:PB_IsDangerousMatch.turnout)
}

// optional int32 train = 3;
inline void PB_IsDangerousMatch::clear_train() {
  train_ = 0;
}
inline ::google::protobuf::int32 PB_IsDangerousMatch::train() const {
  // @@protoc_insertion_point(field_get:PB_IsDangerousMatch.train)
  return train_;
}
inline void PB_IsDangerousMatch::set_train(::google::protobuf::int32 value) {
  
  train_ = value;
  // @@protoc_insertion_point(field_set:PB_IsDangerousMatch.train)
}

// -------------------------------------------------------------------

// PB_IsDangerousMatchSet

// repeated .PB_IsDangerousMatch matches = 1;
inline int PB_IsDangerousMatchSet::matches_size() const {
  return matches_.size();
}
inline void PB_IsDangerousMatchSet::clear_matches() {
  matches_.Clear();
}
inline const ::PB_IsDangerousMatch& PB_IsDangerousMatchSet::matches(int index) const {
  // @@protoc_insertion_point(field_get:PB_IsDangerousMatchSet.matches)
  return matches_.Get(index);
}
inline ::PB_IsDangerousMatch* PB_IsDangerousMatchSet::mutable_matches(int index) {
  // @@protoc_insertion_point(field_mutable:PB_IsDangerousMatchSet.matches)
  return matches_.Mutable(index);
}
inline ::PB_IsDangerousMatch* PB_IsDangerousMatchSet::add_matches() {
  // @@protoc_insertion_point(field_add:PB_IsDangerousMatchSet.matches)
  return matches_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PB_IsDangerousMatch >*
PB_IsDangerousMatchSet::mutable_matches() {
  // @@protoc_insertion_point(field_mutable_list:PB_IsDangerousMatchSet.matches)
  return &matches_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PB_IsDangerousMatch >&
PB_IsDangerousMatchSet::matches() const {
  // @@protoc_insertion_point(field_list:PB_IsDangerousMatchSet.matches)
  return matches_;
}

// -------------------------------------------------------------------

// PB_IsDangerousFrame_0

// optional int32 _0 = 1;
inline void PB_IsDangerousFrame_0::clear__0() {
  _0_ = 0;
}
inline ::google::protobuf::int32 PB_IsDangerousFrame_0::_0() const {
  // @@protoc_insertion_point(field_get:PB_IsDangerousFrame_0._0)
  return _0_;
}
inline void PB_IsDangerousFrame_0::set__0(::google::protobuf::int32 value) {
  
  _0_ = value;
  // @@protoc_insertion_point(field_set:PB_IsDangerousFrame_0._0)
}

// optional int32 _1 = 2;
inline void PB_IsDangerousFrame_0::clear__1() {
  _1_ = 0;
}
inline ::google::protobuf::int32 PB_IsDangerousFrame_0::_1() const {
  // @@protoc_insertion_point(field_get:PB_IsDangerousFrame_0._1)
  return _1_;
}
inline void PB_IsDangerousFrame_0::set__1(::google::protobuf::int32 value) {
  
  _1_ = value;
  // @@protoc_insertion_point(field_set:PB_IsDangerousFrame_0._1)
}

// optional int32 _2 = 3;
inline void PB_IsDangerousFrame_0::clear__2() {
  _2_ = 0;
}
inline ::google::protobuf::int32 PB_IsDangerousFrame_0::_2() const {
  // @@protoc_insertion_point(field_get:PB_IsDangerousFrame_0._2)
  return _2_;
}
inline void PB_IsDangerousFrame_0::set__2(::google::protobuf::int32 value) {
  
  _2_ = value;
  // @@protoc_insertion_point(field_set:PB_IsDangerousFrame_0._2)
}

// optional int32 _3 = 4;
inline void PB_IsDangerousFrame_0::clear__3() {
  _3_ = 0;
}
inline ::google::protobuf::int32 PB_IsDangerousFrame_0::_3() const {
  // @@protoc_insertion_point(field_get:PB_IsDangerousFrame_0._3)
  return _3_;
}
inline void PB_IsDangerousFrame_0::set__3(::google::protobuf::int32 value) {
  
  _3_ = value;
  // @@protoc_insertion_point(field_set:PB_IsDangerousFrame_0._3)
}

// -------------------------------------------------------------------

// PB_IsDangerousFrame_0Vector

// repeated .PB_IsDangerousFrame_0 frames = 1;
inline int PB_IsDangerousFrame_0Vector::frames_size() const {
  return frames_.size();
}
inline void PB_IsDangerousFrame_0Vector::clear_frames() {
  frames_.Clear();
}
inline const ::PB_IsDangerousFrame_0& PB_IsDangerousFrame_0Vector::frames(int index) const {
  // @@protoc_insertion_point(field_get:PB_IsDangerousFrame_0Vector.frames)
  return frames_.Get(index);
}
inline ::PB_IsDangerousFrame_0* PB_IsDangerousFrame_0Vector::mutable_frames(int index) {
  // @@protoc_insertion_point(field_mutable:PB_IsDangerousFrame_0Vector.frames)
  return frames_.Mutable(index);
}
inline ::PB_IsDangerousFrame_0* PB_IsDangerousFrame_0Vector::add_frames() {
  // @@protoc_insertion_point(field_add:PB_IsDangerousFrame_0Vector.frames)
  return frames_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PB_IsDangerousFrame_0 >*
PB_IsDangerousFrame_0Vector::mutable_frames() {
  // @@protoc_insertion_point(field_mutable_list:PB_IsDangerousFrame_0Vector.frames)
  return &frames_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PB_IsDangerousFrame_0 >&
PB_IsDangerousFrame_0Vector::frames() const {
  // @@protoc_insertion_point(field_list:PB_IsDangerousFrame_0Vector.frames)
  return frames_;
}

// -------------------------------------------------------------------

// PB_ShouldCollideMatch

// optional int32 rp = 1;
inline void PB_ShouldCollideMatch::clear_rp() {
  rp_ = 0;
}
inline ::google::protobuf::int32 PB_ShouldCollideMatch::rp() const {
  // @@protoc_insertion_point(field_get:PB_ShouldCollideMatch.rp)
  return rp_;
}
inline void PB_ShouldCollideMatch::set_rp(::google::protobuf::int32 value) {
  
  rp_ = value;
  // @@protoc_insertion_point(field_set:PB_ShouldCollideMatch.rp)
}

// optional int32 tr = 2;
inline void PB_ShouldCollideMatch::clear_tr() {
  tr_ = 0;
}
inline ::google::protobuf::int32 PB_ShouldCollideMatch::tr() const {
  // @@protoc_insertion_point(field_get:PB_ShouldCollideMatch.tr)
  return tr_;
}
inline void PB_ShouldCollideMatch::set_tr(::google::protobuf::int32 value) {
  
  tr_ = value;
  // @@protoc_insertion_point(field_set:PB_ShouldCollideMatch.tr)
}

// -------------------------------------------------------------------

// PB_ShouldCollideMatchSet

// repeated .PB_ShouldCollideMatch matches = 1;
inline int PB_ShouldCollideMatchSet::matches_size() const {
  return matches_.size();
}
inline void PB_ShouldCollideMatchSet::clear_matches() {
  matches_.Clear();
}
inline const ::PB_ShouldCollideMatch& PB_ShouldCollideMatchSet::matches(int index) const {
  // @@protoc_insertion_point(field_get:PB_ShouldCollideMatchSet.matches)
  return matches_.Get(index);
}
inline ::PB_ShouldCollideMatch* PB_ShouldCollideMatchSet::mutable_matches(int index) {
  // @@protoc_insertion_point(field_mutable:PB_ShouldCollideMatchSet.matches)
  return matches_.Mutable(index);
}
inline ::PB_ShouldCollideMatch* PB_ShouldCollideMatchSet::add_matches() {
  // @@protoc_insertion_point(field_add:PB_ShouldCollideMatchSet.matches)
  return matches_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::PB_ShouldCollideMatch >*
PB_ShouldCollideMatchSet::mutable_matches() {
  // @@protoc_insertion_point(field_mutable_list:PB_ShouldCollideMatchSet.matches)
  return &matches_;
}
inline const ::google::protobuf::RepeatedPtrField< ::PB_ShouldCollideMatch >&
PB_ShouldCollideMatchSet::matches() const {
  // @@protoc_insertion_point(field_list:PB_ShouldCollideMatchSet.matches)
  return matches_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_PB_5fDistributedQueries_2eproto__INCLUDED