// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: search.proto

#ifndef PROTOBUF_search_2eproto__INCLUDED
#define PROTOBUF_search_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/wrappers.pb.h>
#include <google/protobuf/empty.pb.h>
#include "phxrpc/rpc/phxrpc.pb.h"
// @@protoc_insertion_point(includes)

namespace search {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_search_2eproto();
void protobuf_AssignDesc_search_2eproto();
void protobuf_ShutdownFile_search_2eproto();

class SearchRequest;
class SearchResult;
class Site;

enum SiteType {
  BLOG = 0,
  NEWS = 1,
  VIDEO = 2,
  UNKNOWN = 3,
  SiteType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  SiteType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool SiteType_IsValid(int value);
const SiteType SiteType_MIN = BLOG;
const SiteType SiteType_MAX = UNKNOWN;
const int SiteType_ARRAYSIZE = SiteType_MAX + 1;

const ::google::protobuf::EnumDescriptor* SiteType_descriptor();
inline const ::std::string& SiteType_Name(SiteType value) {
  return ::google::protobuf::internal::NameOfEnum(
    SiteType_descriptor(), value);
}
inline bool SiteType_Parse(
    const ::std::string& name, SiteType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SiteType>(
    SiteType_descriptor(), name, value);
}
// ===================================================================

class Site : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:search.Site) */ {
 public:
  Site();
  virtual ~Site();

  Site(const Site& from);

  inline Site& operator=(const Site& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Site& default_instance();

  void Swap(Site* other);

  // implements Message ----------------------------------------------

  inline Site* New() const { return New(NULL); }

  Site* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Site& from);
  void MergeFrom(const Site& from);
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
  void InternalSwap(Site* other);
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

  // optional string url = 1;
  void clear_url();
  static const int kUrlFieldNumber = 1;
  const ::std::string& url() const;
  void set_url(const ::std::string& value);
  void set_url(const char* value);
  void set_url(const char* value, size_t size);
  ::std::string* mutable_url();
  ::std::string* release_url();
  void set_allocated_url(::std::string* url);

  // optional string title = 2;
  void clear_title();
  static const int kTitleFieldNumber = 2;
  const ::std::string& title() const;
  void set_title(const ::std::string& value);
  void set_title(const char* value);
  void set_title(const char* value, size_t size);
  ::std::string* mutable_title();
  ::std::string* release_title();
  void set_allocated_title(::std::string* title);

  // optional .search.SiteType type = 3;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  ::search::SiteType type() const;
  void set_type(::search::SiteType value);

  // optional string summary = 4;
  void clear_summary();
  static const int kSummaryFieldNumber = 4;
  const ::std::string& summary() const;
  void set_summary(const ::std::string& value);
  void set_summary(const char* value);
  void set_summary(const char* value, size_t size);
  ::std::string* mutable_summary();
  ::std::string* release_summary();
  void set_allocated_summary(::std::string* summary);

  // @@protoc_insertion_point(class_scope:search.Site)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr url_;
  ::google::protobuf::internal::ArenaStringPtr title_;
  ::google::protobuf::internal::ArenaStringPtr summary_;
  int type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_search_2eproto();
  friend void protobuf_AssignDesc_search_2eproto();
  friend void protobuf_ShutdownFile_search_2eproto();

  void InitAsDefaultInstance();
  static Site* default_instance_;
};
// -------------------------------------------------------------------

class SearchRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:search.SearchRequest) */ {
 public:
  SearchRequest();
  virtual ~SearchRequest();

  SearchRequest(const SearchRequest& from);

  inline SearchRequest& operator=(const SearchRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SearchRequest& default_instance();

  void Swap(SearchRequest* other);

  // implements Message ----------------------------------------------

  inline SearchRequest* New() const { return New(NULL); }

  SearchRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SearchRequest& from);
  void MergeFrom(const SearchRequest& from);
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
  void InternalSwap(SearchRequest* other);
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

  // optional string query = 1;
  void clear_query();
  static const int kQueryFieldNumber = 1;
  const ::std::string& query() const;
  void set_query(const ::std::string& value);
  void set_query(const char* value);
  void set_query(const char* value, size_t size);
  ::std::string* mutable_query();
  ::std::string* release_query();
  void set_allocated_query(::std::string* query);

  // @@protoc_insertion_point(class_scope:search.SearchRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr query_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_search_2eproto();
  friend void protobuf_AssignDesc_search_2eproto();
  friend void protobuf_ShutdownFile_search_2eproto();

  void InitAsDefaultInstance();
  static SearchRequest* default_instance_;
};
// -------------------------------------------------------------------

class SearchResult : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:search.SearchResult) */ {
 public:
  SearchResult();
  virtual ~SearchResult();

  SearchResult(const SearchResult& from);

  inline SearchResult& operator=(const SearchResult& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SearchResult& default_instance();

  void Swap(SearchResult* other);

  // implements Message ----------------------------------------------

  inline SearchResult* New() const { return New(NULL); }

  SearchResult* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SearchResult& from);
  void MergeFrom(const SearchResult& from);
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
  void InternalSwap(SearchResult* other);
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

  // repeated .search.Site sites = 1;
  int sites_size() const;
  void clear_sites();
  static const int kSitesFieldNumber = 1;
  const ::search::Site& sites(int index) const;
  ::search::Site* mutable_sites(int index);
  ::search::Site* add_sites();
  ::google::protobuf::RepeatedPtrField< ::search::Site >*
      mutable_sites();
  const ::google::protobuf::RepeatedPtrField< ::search::Site >&
      sites() const;

  // @@protoc_insertion_point(class_scope:search.SearchResult)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::search::Site > sites_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_search_2eproto();
  friend void protobuf_AssignDesc_search_2eproto();
  friend void protobuf_ShutdownFile_search_2eproto();

  void InitAsDefaultInstance();
  static SearchResult* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Site

// optional string url = 1;
inline void Site::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Site::url() const {
  // @@protoc_insertion_point(field_get:search.Site.url)
  return url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Site::set_url(const ::std::string& value) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:search.Site.url)
}
inline void Site::set_url(const char* value) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:search.Site.url)
}
inline void Site::set_url(const char* value, size_t size) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:search.Site.url)
}
inline ::std::string* Site::mutable_url() {
  
  // @@protoc_insertion_point(field_mutable:search.Site.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Site::release_url() {
  // @@protoc_insertion_point(field_release:search.Site.url)
  
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Site::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    
  } else {
    
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:search.Site.url)
}

// optional string title = 2;
inline void Site::clear_title() {
  title_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Site::title() const {
  // @@protoc_insertion_point(field_get:search.Site.title)
  return title_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Site::set_title(const ::std::string& value) {
  
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:search.Site.title)
}
inline void Site::set_title(const char* value) {
  
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:search.Site.title)
}
inline void Site::set_title(const char* value, size_t size) {
  
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:search.Site.title)
}
inline ::std::string* Site::mutable_title() {
  
  // @@protoc_insertion_point(field_mutable:search.Site.title)
  return title_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Site::release_title() {
  // @@protoc_insertion_point(field_release:search.Site.title)
  
  return title_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Site::set_allocated_title(::std::string* title) {
  if (title != NULL) {
    
  } else {
    
  }
  title_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), title);
  // @@protoc_insertion_point(field_set_allocated:search.Site.title)
}

// optional .search.SiteType type = 3;
inline void Site::clear_type() {
  type_ = 0;
}
inline ::search::SiteType Site::type() const {
  // @@protoc_insertion_point(field_get:search.Site.type)
  return static_cast< ::search::SiteType >(type_);
}
inline void Site::set_type(::search::SiteType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:search.Site.type)
}

// optional string summary = 4;
inline void Site::clear_summary() {
  summary_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Site::summary() const {
  // @@protoc_insertion_point(field_get:search.Site.summary)
  return summary_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Site::set_summary(const ::std::string& value) {
  
  summary_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:search.Site.summary)
}
inline void Site::set_summary(const char* value) {
  
  summary_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:search.Site.summary)
}
inline void Site::set_summary(const char* value, size_t size) {
  
  summary_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:search.Site.summary)
}
inline ::std::string* Site::mutable_summary() {
  
  // @@protoc_insertion_point(field_mutable:search.Site.summary)
  return summary_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Site::release_summary() {
  // @@protoc_insertion_point(field_release:search.Site.summary)
  
  return summary_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Site::set_allocated_summary(::std::string* summary) {
  if (summary != NULL) {
    
  } else {
    
  }
  summary_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), summary);
  // @@protoc_insertion_point(field_set_allocated:search.Site.summary)
}

// -------------------------------------------------------------------

// SearchRequest

// optional string query = 1;
inline void SearchRequest::clear_query() {
  query_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& SearchRequest::query() const {
  // @@protoc_insertion_point(field_get:search.SearchRequest.query)
  return query_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SearchRequest::set_query(const ::std::string& value) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:search.SearchRequest.query)
}
inline void SearchRequest::set_query(const char* value) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:search.SearchRequest.query)
}
inline void SearchRequest::set_query(const char* value, size_t size) {
  
  query_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:search.SearchRequest.query)
}
inline ::std::string* SearchRequest::mutable_query() {
  
  // @@protoc_insertion_point(field_mutable:search.SearchRequest.query)
  return query_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SearchRequest::release_query() {
  // @@protoc_insertion_point(field_release:search.SearchRequest.query)
  
  return query_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SearchRequest::set_allocated_query(::std::string* query) {
  if (query != NULL) {
    
  } else {
    
  }
  query_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), query);
  // @@protoc_insertion_point(field_set_allocated:search.SearchRequest.query)
}

// -------------------------------------------------------------------

// SearchResult

// repeated .search.Site sites = 1;
inline int SearchResult::sites_size() const {
  return sites_.size();
}
inline void SearchResult::clear_sites() {
  sites_.Clear();
}
inline const ::search::Site& SearchResult::sites(int index) const {
  // @@protoc_insertion_point(field_get:search.SearchResult.sites)
  return sites_.Get(index);
}
inline ::search::Site* SearchResult::mutable_sites(int index) {
  // @@protoc_insertion_point(field_mutable:search.SearchResult.sites)
  return sites_.Mutable(index);
}
inline ::search::Site* SearchResult::add_sites() {
  // @@protoc_insertion_point(field_add:search.SearchResult.sites)
  return sites_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::search::Site >*
SearchResult::mutable_sites() {
  // @@protoc_insertion_point(field_mutable_list:search.SearchResult.sites)
  return &sites_;
}
inline const ::google::protobuf::RepeatedPtrField< ::search::Site >&
SearchResult::sites() const {
  // @@protoc_insertion_point(field_list:search.SearchResult.sites)
  return sites_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace search

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::search::SiteType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::search::SiteType>() {
  return ::search::SiteType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_search_2eproto__INCLUDED
