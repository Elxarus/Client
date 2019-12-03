// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ADDTRACKREQUEST2_MONOCLE_H_
#define FLATBUFFERS_GENERATED_ADDTRACKREQUEST2_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

#include "tracktype_generated.h"

namespace monocle {

struct AddTrackRequest2;

struct AddTrackRequest2 FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_RECORDINGTOKEN = 4
  };
  uint64_t recordingtoken() const {
    return GetField<uint64_t>(VT_RECORDINGTOKEN, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_RECORDINGTOKEN) &&
           verifier.EndTable();
  }
};

struct AddTrackRequest2Builder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_recordingtoken(uint64_t recordingtoken) {
    fbb_.AddElement<uint64_t>(AddTrackRequest2::VT_RECORDINGTOKEN, recordingtoken, 0);
  }
  explicit AddTrackRequest2Builder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AddTrackRequest2Builder &operator=(const AddTrackRequest2Builder &);
  flatbuffers::Offset<AddTrackRequest2> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<AddTrackRequest2>(end);
    return o;
  }
};

inline flatbuffers::Offset<AddTrackRequest2> CreateAddTrackRequest2(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t recordingtoken = 0) {
  AddTrackRequest2Builder builder_(_fbb);
  builder_.add_recordingtoken(recordingtoken);
  return builder_.Finish();
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_ADDTRACKREQUEST2_MONOCLE_H_
