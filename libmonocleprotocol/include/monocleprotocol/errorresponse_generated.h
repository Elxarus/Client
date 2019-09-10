// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ERRORRESPONSE_MONOCLE_H_
#define FLATBUFFERS_GENERATED_ERRORRESPONSE_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

#include "errorcode_generated.h"

namespace monocle {

struct ErrorResponse;

struct ErrorResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_CODE = 4,
    VT_TEXT = 6
  };
  monocle::ErrorCode code() const {
    return static_cast<monocle::ErrorCode>(GetField<uint16_t>(VT_CODE, 0));
  }
  const flatbuffers::String *text() const {
    return GetPointer<const flatbuffers::String *>(VT_TEXT);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint16_t>(verifier, VT_CODE) &&
           VerifyOffset(verifier, VT_TEXT) &&
           verifier.VerifyString(text()) &&
           verifier.EndTable();
  }
};

struct ErrorResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_code(monocle::ErrorCode code) {
    fbb_.AddElement<uint16_t>(ErrorResponse::VT_CODE, static_cast<uint16_t>(code), 0);
  }
  void add_text(flatbuffers::Offset<flatbuffers::String> text) {
    fbb_.AddOffset(ErrorResponse::VT_TEXT, text);
  }
  explicit ErrorResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ErrorResponseBuilder &operator=(const ErrorResponseBuilder &);
  flatbuffers::Offset<ErrorResponse> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ErrorResponse>(end);
    return o;
  }
};

inline flatbuffers::Offset<ErrorResponse> CreateErrorResponse(
    flatbuffers::FlatBufferBuilder &_fbb,
    monocle::ErrorCode code = monocle::ErrorCode::Success,
    flatbuffers::Offset<flatbuffers::String> text = 0) {
  ErrorResponseBuilder builder_(_fbb);
  builder_.add_text(text);
  builder_.add_code(code);
  return builder_.Finish();
}

inline flatbuffers::Offset<ErrorResponse> CreateErrorResponseDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    monocle::ErrorCode code = monocle::ErrorCode::Success,
    const char *text = nullptr) {
  auto text__ = text ? _fbb.CreateString(text) : 0;
  return monocle::CreateErrorResponse(
      _fbb,
      code,
      text__);
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_ERRORRESPONSE_MONOCLE_H_
