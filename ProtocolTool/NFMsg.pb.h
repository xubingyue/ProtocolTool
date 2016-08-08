// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NFMsg.proto

#ifndef PROTOBUF_item_2fNFMsg_2eproto__INCLUDED
#define PROTOBUF_item_2fNFMsg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace NFMsg {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_item_2fNFMsg_2eproto();
void protobuf_AssignDesc_item_2fNFMsg_2eproto();
void protobuf_ShutdownFile_item_2fNFMsg_2eproto();

class Ident;
class MsgBase;

// ===================================================================

class Ident : public ::google::protobuf::Message {
 public:
  Ident();
  virtual ~Ident();

  Ident(const Ident& from);

  inline Ident& operator=(const Ident& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Ident& default_instance();

  void Swap(Ident* other);

  // implements Message ----------------------------------------------

  Ident* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Ident& from);
  void MergeFrom(const Ident& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int64 svrid = 1;
  inline bool has_svrid() const;
  inline void clear_svrid();
  static const int kSvridFieldNumber = 1;
  inline ::google::protobuf::int64 svrid() const;
  inline void set_svrid(::google::protobuf::int64 value);

  // required int64 index = 2;
  inline bool has_index() const;
  inline void clear_index();
  static const int kIndexFieldNumber = 2;
  inline ::google::protobuf::int64 index() const;
  inline void set_index(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:NFMsg.Ident)
 private:
  inline void set_has_svrid();
  inline void clear_has_svrid();
  inline void set_has_index();
  inline void clear_has_index();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 svrid_;
  ::google::protobuf::int64 index_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_item_2fNFMsg_2eproto();
  friend void protobuf_AssignDesc_item_2fNFMsg_2eproto();
  friend void protobuf_ShutdownFile_item_2fNFMsg_2eproto();

  void InitAsDefaultInstance();
  static Ident* default_instance_;
};
// -------------------------------------------------------------------

class MsgBase : public ::google::protobuf::Message {
 public:
  MsgBase();
  virtual ~MsgBase();

  MsgBase(const MsgBase& from);

  inline MsgBase& operator=(const MsgBase& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MsgBase& default_instance();

  void Swap(MsgBase* other);

  // implements Message ----------------------------------------------

  MsgBase* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgBase& from);
  void MergeFrom(const MsgBase& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .NFMsg.Ident player_id = 1;
  inline bool has_player_id() const;
  inline void clear_player_id();
  static const int kPlayerIdFieldNumber = 1;
  inline const ::NFMsg::Ident& player_id() const;
  inline ::NFMsg::Ident* mutable_player_id();
  inline ::NFMsg::Ident* release_player_id();
  inline void set_allocated_player_id(::NFMsg::Ident* player_id);

  // required bytes msg_data = 2;
  inline bool has_msg_data() const;
  inline void clear_msg_data();
  static const int kMsgDataFieldNumber = 2;
  inline const ::std::string& msg_data() const;
  inline void set_msg_data(const ::std::string& value);
  inline void set_msg_data(const char* value);
  inline void set_msg_data(const void* value, size_t size);
  inline ::std::string* mutable_msg_data();
  inline ::std::string* release_msg_data();
  inline void set_allocated_msg_data(::std::string* msg_data);

  // repeated .NFMsg.Ident player_Client_list = 3;
  inline int player_client_list_size() const;
  inline void clear_player_client_list();
  static const int kPlayerClientListFieldNumber = 3;
  inline const ::NFMsg::Ident& player_client_list(int index) const;
  inline ::NFMsg::Ident* mutable_player_client_list(int index);
  inline ::NFMsg::Ident* add_player_client_list();
  inline const ::google::protobuf::RepeatedPtrField< ::NFMsg::Ident >&
      player_client_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::NFMsg::Ident >*
      mutable_player_client_list();

  // optional .NFMsg.Ident hash_ident = 4;
  inline bool has_hash_ident() const;
  inline void clear_hash_ident();
  static const int kHashIdentFieldNumber = 4;
  inline const ::NFMsg::Ident& hash_ident() const;
  inline ::NFMsg::Ident* mutable_hash_ident();
  inline ::NFMsg::Ident* release_hash_ident();
  inline void set_allocated_hash_ident(::NFMsg::Ident* hash_ident);

  // @@protoc_insertion_point(class_scope:NFMsg.MsgBase)
 private:
  inline void set_has_player_id();
  inline void clear_has_player_id();
  inline void set_has_msg_data();
  inline void clear_has_msg_data();
  inline void set_has_hash_ident();
  inline void clear_has_hash_ident();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::NFMsg::Ident* player_id_;
  ::std::string* msg_data_;
  ::google::protobuf::RepeatedPtrField< ::NFMsg::Ident > player_client_list_;
  ::NFMsg::Ident* hash_ident_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_item_2fNFMsg_2eproto();
  friend void protobuf_AssignDesc_item_2fNFMsg_2eproto();
  friend void protobuf_ShutdownFile_item_2fNFMsg_2eproto();

  void InitAsDefaultInstance();
  static MsgBase* default_instance_;
};
// ===================================================================


// ===================================================================

// Ident

// required int64 svrid = 1;
inline bool Ident::has_svrid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Ident::set_has_svrid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Ident::clear_has_svrid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Ident::clear_svrid() {
  svrid_ = GOOGLE_LONGLONG(0);
  clear_has_svrid();
}
inline ::google::protobuf::int64 Ident::svrid() const {
  return svrid_;
}
inline void Ident::set_svrid(::google::protobuf::int64 value) {
  set_has_svrid();
  svrid_ = value;
}

// required int64 index = 2;
inline bool Ident::has_index() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Ident::set_has_index() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Ident::clear_has_index() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Ident::clear_index() {
  index_ = GOOGLE_LONGLONG(0);
  clear_has_index();
}
inline ::google::protobuf::int64 Ident::index() const {
  return index_;
}
inline void Ident::set_index(::google::protobuf::int64 value) {
  set_has_index();
  index_ = value;
}

// -------------------------------------------------------------------

// MsgBase

// required .NFMsg.Ident player_id = 1;
inline bool MsgBase::has_player_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgBase::set_has_player_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgBase::clear_has_player_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgBase::clear_player_id() {
  if (player_id_ != NULL) player_id_->::NFMsg::Ident::Clear();
  clear_has_player_id();
}
inline const ::NFMsg::Ident& MsgBase::player_id() const {
  return player_id_ != NULL ? *player_id_ : *default_instance_->player_id_;
}
inline ::NFMsg::Ident* MsgBase::mutable_player_id() {
  set_has_player_id();
  if (player_id_ == NULL) player_id_ = new ::NFMsg::Ident;
  return player_id_;
}
inline ::NFMsg::Ident* MsgBase::release_player_id() {
  clear_has_player_id();
  ::NFMsg::Ident* temp = player_id_;
  player_id_ = NULL;
  return temp;
}
inline void MsgBase::set_allocated_player_id(::NFMsg::Ident* player_id) {
  delete player_id_;
  player_id_ = player_id;
  if (player_id) {
    set_has_player_id();
  } else {
    clear_has_player_id();
  }
}

// required bytes msg_data = 2;
inline bool MsgBase::has_msg_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgBase::set_has_msg_data() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgBase::clear_has_msg_data() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgBase::clear_msg_data() {
  if (msg_data_ != &::google::protobuf::internal::kEmptyString) {
    msg_data_->clear();
  }
  clear_has_msg_data();
}
inline const ::std::string& MsgBase::msg_data() const {
  return *msg_data_;
}
inline void MsgBase::set_msg_data(const ::std::string& value) {
  set_has_msg_data();
  if (msg_data_ == &::google::protobuf::internal::kEmptyString) {
    msg_data_ = new ::std::string;
  }
  msg_data_->assign(value);
}
inline void MsgBase::set_msg_data(const char* value) {
  set_has_msg_data();
  if (msg_data_ == &::google::protobuf::internal::kEmptyString) {
    msg_data_ = new ::std::string;
  }
  msg_data_->assign(value);
}
inline void MsgBase::set_msg_data(const void* value, size_t size) {
  set_has_msg_data();
  if (msg_data_ == &::google::protobuf::internal::kEmptyString) {
    msg_data_ = new ::std::string;
  }
  msg_data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* MsgBase::mutable_msg_data() {
  set_has_msg_data();
  if (msg_data_ == &::google::protobuf::internal::kEmptyString) {
    msg_data_ = new ::std::string;
  }
  return msg_data_;
}
inline ::std::string* MsgBase::release_msg_data() {
  clear_has_msg_data();
  if (msg_data_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = msg_data_;
    msg_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void MsgBase::set_allocated_msg_data(::std::string* msg_data) {
  if (msg_data_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_data_;
  }
  if (msg_data) {
    set_has_msg_data();
    msg_data_ = msg_data;
  } else {
    clear_has_msg_data();
    msg_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .NFMsg.Ident player_Client_list = 3;
inline int MsgBase::player_client_list_size() const {
  return player_client_list_.size();
}
inline void MsgBase::clear_player_client_list() {
  player_client_list_.Clear();
}
inline const ::NFMsg::Ident& MsgBase::player_client_list(int index) const {
  return player_client_list_.Get(index);
}
inline ::NFMsg::Ident* MsgBase::mutable_player_client_list(int index) {
  return player_client_list_.Mutable(index);
}
inline ::NFMsg::Ident* MsgBase::add_player_client_list() {
  return player_client_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::NFMsg::Ident >&
MsgBase::player_client_list() const {
  return player_client_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::NFMsg::Ident >*
MsgBase::mutable_player_client_list() {
  return &player_client_list_;
}

// optional .NFMsg.Ident hash_ident = 4;
inline bool MsgBase::has_hash_ident() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MsgBase::set_has_hash_ident() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MsgBase::clear_has_hash_ident() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MsgBase::clear_hash_ident() {
  if (hash_ident_ != NULL) hash_ident_->::NFMsg::Ident::Clear();
  clear_has_hash_ident();
}
inline const ::NFMsg::Ident& MsgBase::hash_ident() const {
  return hash_ident_ != NULL ? *hash_ident_ : *default_instance_->hash_ident_;
}
inline ::NFMsg::Ident* MsgBase::mutable_hash_ident() {
  set_has_hash_ident();
  if (hash_ident_ == NULL) hash_ident_ = new ::NFMsg::Ident;
  return hash_ident_;
}
inline ::NFMsg::Ident* MsgBase::release_hash_ident() {
  clear_has_hash_ident();
  ::NFMsg::Ident* temp = hash_ident_;
  hash_ident_ = NULL;
  return temp;
}
inline void MsgBase::set_allocated_hash_ident(::NFMsg::Ident* hash_ident) {
  delete hash_ident_;
  hash_ident_ = hash_ident;
  if (hash_ident) {
    set_has_hash_ident();
  } else {
    clear_has_hash_ident();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace NFMsg

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_item_2fNFMsg_2eproto__INCLUDED