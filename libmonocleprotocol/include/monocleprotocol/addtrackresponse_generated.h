// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ADDTRACKRESPONSE_MONOCLE_H_
#define FLATBUFFERS_GENERATED_ADDTRACKRESPONSE_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

namespace monocle {

struct AddTrackResponse;

struct AddTrackResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TOKEN = 4
  };
  uint32_t token() const {
    return GetField<uint32_t>(VT_TOKEN, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_TOKEN) &&
           verifier.EndTable();
  }
};

struct AddTrackResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_token(uint32_t token) {
    fbb_.AddElement<uint32_t>(AddTrackResponse::VT_TOKEN, token, 0);
  }
  explicit AddTrackResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AddTrackResponseBuilder &operator=(const AddTrackResponseBuilder &);
  flatbuffers::Offset<AddTrackResponse> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<AddTrackResponse>(end);
    return o;
  }
};

inline flatbuffers::Offset<AddTrackResponse> CreateAddTrackResponse(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t token = 0) {
  AddTrackResponseBuilder builder_(_fbb);
  builder_.add_token(token);
  return builder_.Finish();
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_ADDTRACKRESPONSE_MONOCLE_H_
