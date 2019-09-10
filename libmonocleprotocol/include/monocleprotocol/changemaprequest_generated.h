// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CHANGEMAPREQUEST_MONOCLE_H_
#define FLATBUFFERS_GENERATED_CHANGEMAPREQUEST_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

namespace monocle {

struct ChangeMapRequest;

struct ChangeMapRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TOKEN = 4,
    VT_NAME = 6,
    VT_LOCATION = 8,
    VT_IMAGE = 10
  };
  uint64_t token() const {
    return GetField<uint64_t>(VT_TOKEN, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::String *location() const {
    return GetPointer<const flatbuffers::String *>(VT_LOCATION);
  }
  const flatbuffers::Vector<int8_t> *image() const {
    return GetPointer<const flatbuffers::Vector<int8_t> *>(VT_IMAGE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_TOKEN) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_LOCATION) &&
           verifier.VerifyString(location()) &&
           VerifyOffset(verifier, VT_IMAGE) &&
           verifier.VerifyVector(image()) &&
           verifier.EndTable();
  }
};

struct ChangeMapRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_token(uint64_t token) {
    fbb_.AddElement<uint64_t>(ChangeMapRequest::VT_TOKEN, token, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(ChangeMapRequest::VT_NAME, name);
  }
  void add_location(flatbuffers::Offset<flatbuffers::String> location) {
    fbb_.AddOffset(ChangeMapRequest::VT_LOCATION, location);
  }
  void add_image(flatbuffers::Offset<flatbuffers::Vector<int8_t>> image) {
    fbb_.AddOffset(ChangeMapRequest::VT_IMAGE, image);
  }
  explicit ChangeMapRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ChangeMapRequestBuilder &operator=(const ChangeMapRequestBuilder &);
  flatbuffers::Offset<ChangeMapRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ChangeMapRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<ChangeMapRequest> CreateChangeMapRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t token = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::String> location = 0,
    flatbuffers::Offset<flatbuffers::Vector<int8_t>> image = 0) {
  ChangeMapRequestBuilder builder_(_fbb);
  builder_.add_token(token);
  builder_.add_image(image);
  builder_.add_location(location);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<ChangeMapRequest> CreateChangeMapRequestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t token = 0,
    const char *name = nullptr,
    const char *location = nullptr,
    const std::vector<int8_t> *image = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto location__ = location ? _fbb.CreateString(location) : 0;
  auto image__ = image ? _fbb.CreateVector<int8_t>(*image) : 0;
  return monocle::CreateChangeMapRequest(
      _fbb,
      token,
      name__,
      location__,
      image__);
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_CHANGEMAPREQUEST_MONOCLE_H_
