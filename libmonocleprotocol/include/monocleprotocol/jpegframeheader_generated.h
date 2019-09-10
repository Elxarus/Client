// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_JPEGFRAMEHEADER_MONOCLE_H_
#define FLATBUFFERS_GENERATED_JPEGFRAMEHEADER_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

namespace monocle {

struct JPEGFrameHeader;

struct JPEGFrameHeader FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TOKEN = 4,
    VT_PLAYREQUESTINDEX = 6,
    VT_CODECINDEX = 8,
    VT_TIMESTAMP = 10,
    VT_SEQUENCENUM = 12,
    VT_PROGRESS = 14,
    VT_SIGNATURE = 16,
    VT_RESTARTINTERVAL = 18,
    VT_TYPESPECIFICFRAGMENTOFFSET = 20,
    VT_TYPE = 22,
    VT_Q = 24,
    VT_WIDTH = 26,
    VT_HEIGHT = 28,
    VT_LQT = 30,
    VT_CQT = 32
  };
  uint64_t token() const {
    return GetField<uint64_t>(VT_TOKEN, 0);
  }
  uint64_t playrequestindex() const {
    return GetField<uint64_t>(VT_PLAYREQUESTINDEX, 0);
  }
  uint64_t codecindex() const {
    return GetField<uint64_t>(VT_CODECINDEX, 0);
  }
  uint64_t timestamp() const {
    return GetField<uint64_t>(VT_TIMESTAMP, 0);
  }
  int64_t sequencenum() const {
    return GetField<int64_t>(VT_SEQUENCENUM, 0);
  }
  float progress() const {
    return GetField<float>(VT_PROGRESS, 0.0f);
  }
  const flatbuffers::Vector<uint8_t> *signature() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_SIGNATURE);
  }
  uint16_t restartinterval() const {
    return GetField<uint16_t>(VT_RESTARTINTERVAL, 0);
  }
  uint32_t typespecificfragmentoffset() const {
    return GetField<uint32_t>(VT_TYPESPECIFICFRAGMENTOFFSET, 0);
  }
  uint8_t type() const {
    return GetField<uint8_t>(VT_TYPE, 0);
  }
  uint8_t q() const {
    return GetField<uint8_t>(VT_Q, 0);
  }
  uint8_t width() const {
    return GetField<uint8_t>(VT_WIDTH, 0);
  }
  uint8_t height() const {
    return GetField<uint8_t>(VT_HEIGHT, 0);
  }
  const flatbuffers::Vector<uint8_t> *lqt() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_LQT);
  }
  const flatbuffers::Vector<uint8_t> *cqt() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_CQT);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_TOKEN) &&
           VerifyField<uint64_t>(verifier, VT_PLAYREQUESTINDEX) &&
           VerifyField<uint64_t>(verifier, VT_CODECINDEX) &&
           VerifyField<uint64_t>(verifier, VT_TIMESTAMP) &&
           VerifyField<int64_t>(verifier, VT_SEQUENCENUM) &&
           VerifyField<float>(verifier, VT_PROGRESS) &&
           VerifyOffset(verifier, VT_SIGNATURE) &&
           verifier.VerifyVector(signature()) &&
           VerifyField<uint16_t>(verifier, VT_RESTARTINTERVAL) &&
           VerifyField<uint32_t>(verifier, VT_TYPESPECIFICFRAGMENTOFFSET) &&
           VerifyField<uint8_t>(verifier, VT_TYPE) &&
           VerifyField<uint8_t>(verifier, VT_Q) &&
           VerifyField<uint8_t>(verifier, VT_WIDTH) &&
           VerifyField<uint8_t>(verifier, VT_HEIGHT) &&
           VerifyOffset(verifier, VT_LQT) &&
           verifier.VerifyVector(lqt()) &&
           VerifyOffset(verifier, VT_CQT) &&
           verifier.VerifyVector(cqt()) &&
           verifier.EndTable();
  }
};

struct JPEGFrameHeaderBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_token(uint64_t token) {
    fbb_.AddElement<uint64_t>(JPEGFrameHeader::VT_TOKEN, token, 0);
  }
  void add_playrequestindex(uint64_t playrequestindex) {
    fbb_.AddElement<uint64_t>(JPEGFrameHeader::VT_PLAYREQUESTINDEX, playrequestindex, 0);
  }
  void add_codecindex(uint64_t codecindex) {
    fbb_.AddElement<uint64_t>(JPEGFrameHeader::VT_CODECINDEX, codecindex, 0);
  }
  void add_timestamp(uint64_t timestamp) {
    fbb_.AddElement<uint64_t>(JPEGFrameHeader::VT_TIMESTAMP, timestamp, 0);
  }
  void add_sequencenum(int64_t sequencenum) {
    fbb_.AddElement<int64_t>(JPEGFrameHeader::VT_SEQUENCENUM, sequencenum, 0);
  }
  void add_progress(float progress) {
    fbb_.AddElement<float>(JPEGFrameHeader::VT_PROGRESS, progress, 0.0f);
  }
  void add_signature(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signature) {
    fbb_.AddOffset(JPEGFrameHeader::VT_SIGNATURE, signature);
  }
  void add_restartinterval(uint16_t restartinterval) {
    fbb_.AddElement<uint16_t>(JPEGFrameHeader::VT_RESTARTINTERVAL, restartinterval, 0);
  }
  void add_typespecificfragmentoffset(uint32_t typespecificfragmentoffset) {
    fbb_.AddElement<uint32_t>(JPEGFrameHeader::VT_TYPESPECIFICFRAGMENTOFFSET, typespecificfragmentoffset, 0);
  }
  void add_type(uint8_t type) {
    fbb_.AddElement<uint8_t>(JPEGFrameHeader::VT_TYPE, type, 0);
  }
  void add_q(uint8_t q) {
    fbb_.AddElement<uint8_t>(JPEGFrameHeader::VT_Q, q, 0);
  }
  void add_width(uint8_t width) {
    fbb_.AddElement<uint8_t>(JPEGFrameHeader::VT_WIDTH, width, 0);
  }
  void add_height(uint8_t height) {
    fbb_.AddElement<uint8_t>(JPEGFrameHeader::VT_HEIGHT, height, 0);
  }
  void add_lqt(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> lqt) {
    fbb_.AddOffset(JPEGFrameHeader::VT_LQT, lqt);
  }
  void add_cqt(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> cqt) {
    fbb_.AddOffset(JPEGFrameHeader::VT_CQT, cqt);
  }
  explicit JPEGFrameHeaderBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  JPEGFrameHeaderBuilder &operator=(const JPEGFrameHeaderBuilder &);
  flatbuffers::Offset<JPEGFrameHeader> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<JPEGFrameHeader>(end);
    return o;
  }
};

inline flatbuffers::Offset<JPEGFrameHeader> CreateJPEGFrameHeader(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t token = 0,
    uint64_t playrequestindex = 0,
    uint64_t codecindex = 0,
    uint64_t timestamp = 0,
    int64_t sequencenum = 0,
    float progress = 0.0f,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> signature = 0,
    uint16_t restartinterval = 0,
    uint32_t typespecificfragmentoffset = 0,
    uint8_t type = 0,
    uint8_t q = 0,
    uint8_t width = 0,
    uint8_t height = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> lqt = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> cqt = 0) {
  JPEGFrameHeaderBuilder builder_(_fbb);
  builder_.add_sequencenum(sequencenum);
  builder_.add_timestamp(timestamp);
  builder_.add_codecindex(codecindex);
  builder_.add_playrequestindex(playrequestindex);
  builder_.add_token(token);
  builder_.add_cqt(cqt);
  builder_.add_lqt(lqt);
  builder_.add_typespecificfragmentoffset(typespecificfragmentoffset);
  builder_.add_signature(signature);
  builder_.add_progress(progress);
  builder_.add_restartinterval(restartinterval);
  builder_.add_height(height);
  builder_.add_width(width);
  builder_.add_q(q);
  builder_.add_type(type);
  return builder_.Finish();
}

inline flatbuffers::Offset<JPEGFrameHeader> CreateJPEGFrameHeaderDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t token = 0,
    uint64_t playrequestindex = 0,
    uint64_t codecindex = 0,
    uint64_t timestamp = 0,
    int64_t sequencenum = 0,
    float progress = 0.0f,
    const std::vector<uint8_t> *signature = nullptr,
    uint16_t restartinterval = 0,
    uint32_t typespecificfragmentoffset = 0,
    uint8_t type = 0,
    uint8_t q = 0,
    uint8_t width = 0,
    uint8_t height = 0,
    const std::vector<uint8_t> *lqt = nullptr,
    const std::vector<uint8_t> *cqt = nullptr) {
  auto signature__ = signature ? _fbb.CreateVector<uint8_t>(*signature) : 0;
  auto lqt__ = lqt ? _fbb.CreateVector<uint8_t>(*lqt) : 0;
  auto cqt__ = cqt ? _fbb.CreateVector<uint8_t>(*cqt) : 0;
  return monocle::CreateJPEGFrameHeader(
      _fbb,
      token,
      playrequestindex,
      codecindex,
      timestamp,
      sequencenum,
      progress,
      signature__,
      restartinterval,
      typespecificfragmentoffset,
      type,
      q,
      width,
      height,
      lqt__,
      cqt__);
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_JPEGFRAMEHEADER_MONOCLE_H_
