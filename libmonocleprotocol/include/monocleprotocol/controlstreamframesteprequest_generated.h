// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CONTROLSTREAMFRAMESTEPREQUEST_MONOCLE_H_
#define FLATBUFFERS_GENERATED_CONTROLSTREAMFRAMESTEPREQUEST_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

namespace monocle {

struct ControlStreamFrameStepRequest;

struct ControlStreamFrameStepRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TOKEN = 4,
    VT_PLAYREQUESTINDEX = 6,
    VT_FORWARDS = 8,
    VT_SEQUENCENUM = 10
  };
  uint64_t token() const {
    return GetField<uint64_t>(VT_TOKEN, 0);
  }
  uint64_t playrequestindex() const {
    return GetField<uint64_t>(VT_PLAYREQUESTINDEX, 0);
  }
  bool forwards() const {
    return GetField<uint8_t>(VT_FORWARDS, 0) != 0;
  }
  uint64_t sequencenum() const {
    return GetField<uint64_t>(VT_SEQUENCENUM, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_TOKEN) &&
           VerifyField<uint64_t>(verifier, VT_PLAYREQUESTINDEX) &&
           VerifyField<uint8_t>(verifier, VT_FORWARDS) &&
           VerifyField<uint64_t>(verifier, VT_SEQUENCENUM) &&
           verifier.EndTable();
  }
};

struct ControlStreamFrameStepRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_token(uint64_t token) {
    fbb_.AddElement<uint64_t>(ControlStreamFrameStepRequest::VT_TOKEN, token, 0);
  }
  void add_playrequestindex(uint64_t playrequestindex) {
    fbb_.AddElement<uint64_t>(ControlStreamFrameStepRequest::VT_PLAYREQUESTINDEX, playrequestindex, 0);
  }
  void add_forwards(bool forwards) {
    fbb_.AddElement<uint8_t>(ControlStreamFrameStepRequest::VT_FORWARDS, static_cast<uint8_t>(forwards), 0);
  }
  void add_sequencenum(uint64_t sequencenum) {
    fbb_.AddElement<uint64_t>(ControlStreamFrameStepRequest::VT_SEQUENCENUM, sequencenum, 0);
  }
  explicit ControlStreamFrameStepRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ControlStreamFrameStepRequestBuilder &operator=(const ControlStreamFrameStepRequestBuilder &);
  flatbuffers::Offset<ControlStreamFrameStepRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ControlStreamFrameStepRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<ControlStreamFrameStepRequest> CreateControlStreamFrameStepRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t token = 0,
    uint64_t playrequestindex = 0,
    bool forwards = false,
    uint64_t sequencenum = 0) {
  ControlStreamFrameStepRequestBuilder builder_(_fbb);
  builder_.add_sequencenum(sequencenum);
  builder_.add_playrequestindex(playrequestindex);
  builder_.add_token(token);
  builder_.add_forwards(forwards);
  return builder_.Finish();
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_CONTROLSTREAMFRAMESTEPREQUEST_MONOCLE_H_
