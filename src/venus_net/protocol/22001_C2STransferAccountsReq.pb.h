// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 22001_C2STransferAccountsReq.proto

#ifndef PROTOBUF_22001_5fC2STransferAccountsReq_2eproto__INCLUDED
#define PROTOBUF_22001_5fC2STransferAccountsReq_2eproto__INCLUDED

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

namespace Protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_22001_5fC2STransferAccountsReq_2eproto();
void protobuf_AssignDesc_22001_5fC2STransferAccountsReq_2eproto();
void protobuf_ShutdownFile_22001_5fC2STransferAccountsReq_2eproto();

class C2STransferAccountsReq;

// ===================================================================

class C2STransferAccountsReq : public ::google::protobuf::Message {
 public:
  C2STransferAccountsReq();
  virtual ~C2STransferAccountsReq();

  C2STransferAccountsReq(const C2STransferAccountsReq& from);

  inline C2STransferAccountsReq& operator=(const C2STransferAccountsReq& from) {
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
  static const C2STransferAccountsReq& default_instance();

  void Swap(C2STransferAccountsReq* other);

  // implements Message ----------------------------------------------

  C2STransferAccountsReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const C2STransferAccountsReq& from);
  void MergeFrom(const C2STransferAccountsReq& from);
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

  // required int32 money_type = 1;
  inline bool has_money_type() const;
  inline void clear_money_type();
  static const int kMoneyTypeFieldNumber = 1;
  inline ::google::protobuf::int32 money_type() const;
  inline void set_money_type(::google::protobuf::int32 value);

  // required int32 money_count = 2;
  inline bool has_money_count() const;
  inline void clear_money_count();
  static const int kMoneyCountFieldNumber = 2;
  inline ::google::protobuf::int32 money_count() const;
  inline void set_money_count(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Protocol.C2STransferAccountsReq)
 private:
  inline void set_has_money_type();
  inline void clear_has_money_type();
  inline void set_has_money_count();
  inline void clear_has_money_count();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 money_type_;
  ::google::protobuf::int32 money_count_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_22001_5fC2STransferAccountsReq_2eproto();
  friend void protobuf_AssignDesc_22001_5fC2STransferAccountsReq_2eproto();
  friend void protobuf_ShutdownFile_22001_5fC2STransferAccountsReq_2eproto();

  void InitAsDefaultInstance();
  static C2STransferAccountsReq* default_instance_;
};
// ===================================================================


// ===================================================================

// C2STransferAccountsReq

// required int32 money_type = 1;
inline bool C2STransferAccountsReq::has_money_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void C2STransferAccountsReq::set_has_money_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void C2STransferAccountsReq::clear_has_money_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void C2STransferAccountsReq::clear_money_type() {
  money_type_ = 0;
  clear_has_money_type();
}
inline ::google::protobuf::int32 C2STransferAccountsReq::money_type() const {
  return money_type_;
}
inline void C2STransferAccountsReq::set_money_type(::google::protobuf::int32 value) {
  set_has_money_type();
  money_type_ = value;
}

// required int32 money_count = 2;
inline bool C2STransferAccountsReq::has_money_count() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void C2STransferAccountsReq::set_has_money_count() {
  _has_bits_[0] |= 0x00000002u;
}
inline void C2STransferAccountsReq::clear_has_money_count() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void C2STransferAccountsReq::clear_money_count() {
  money_count_ = 0;
  clear_has_money_count();
}
inline ::google::protobuf::int32 C2STransferAccountsReq::money_count() const {
  return money_count_;
}
inline void C2STransferAccountsReq::set_money_count(::google::protobuf::int32 value) {
  set_has_money_count();
  money_count_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_22001_5fC2STransferAccountsReq_2eproto__INCLUDED