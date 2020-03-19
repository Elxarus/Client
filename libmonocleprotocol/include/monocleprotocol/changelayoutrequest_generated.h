// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CHANGELAYOUTREQUEST_MONOCLE_H_
#define FLATBUFFERS_GENERATED_CHANGELAYOUTREQUEST_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

#include "layout_generated.h"

namespace monocle {

struct ChangeLayoutRequest;

struct ChangeLayoutRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_LAYOUT = 4
  };
  const monocle::Layout *layout() const {
    return GetPointer<const monocle::Layout *>(VT_LAYOUT);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_LAYOUT) &&
           verifier.VerifyTable(layout()) &&
           verifier.EndTable();
  }
};

struct ChangeLayoutRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_layout(flatbuffers::Offset<monocle::Layout> layout) {
    fbb_.AddOffset(ChangeLayoutRequest::VT_LAYOUT, layout);
  }
  explicit ChangeLayoutRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ChangeLayoutRequestBuilder &operator=(const ChangeLayoutRequestBuilder &);
  flatbuffers::Offset<ChangeLayoutRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ChangeLayoutRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<ChangeLayoutRequest> CreateChangeLayoutRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<monocle::Layout> layout = 0) {
  ChangeLayoutRequestBuilder builder_(_fbb);
  builder_.add_layout(layout);
  return builder_.Finish();
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_CHANGELAYOUTREQUEST_MONOCLE_H_
