// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CREATESTREAMREQUEST_MONOCLE_H_
#define FLATBUFFERS_GENERATED_CREATESTREAMREQUEST_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

namespace monocle {

struct CreateStreamRequest;

struct CreateStreamRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_RECORDINGTOKEN = 4,
    VT_TRACKTOKEN = 6
  };
  uint64_t recordingtoken() const {
    return GetField<uint64_t>(VT_RECORDINGTOKEN, 0);
  }
  uint64_t tracktoken() const {
    return GetField<uint64_t>(VT_TRACKTOKEN, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_RECORDINGTOKEN) &&
           VerifyField<uint64_t>(verifier, VT_TRACKTOKEN) &&
           verifier.EndTable();
  }
};

struct CreateStreamRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_recordingtoken(uint64_t recordingtoken) {
    fbb_.AddElement<uint64_t>(CreateStreamRequest::VT_RECORDINGTOKEN, recordingtoken, 0);
  }
  void add_tracktoken(uint64_t tracktoken) {
    fbb_.AddElement<uint64_t>(CreateStreamRequest::VT_TRACKTOKEN, tracktoken, 0);
  }
  explicit CreateStreamRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  CreateStreamRequestBuilder &operator=(const CreateStreamRequestBuilder &);
  flatbuffers::Offset<CreateStreamRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<CreateStreamRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<CreateStreamRequest> CreateCreateStreamRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t recordingtoken = 0,
    uint64_t tracktoken = 0) {
  CreateStreamRequestBuilder builder_(_fbb);
  builder_.add_tracktoken(tracktoken);
  builder_.add_recordingtoken(recordingtoken);
  return builder_.Finish();
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_CREATESTREAMREQUEST_MONOCLE_H_
