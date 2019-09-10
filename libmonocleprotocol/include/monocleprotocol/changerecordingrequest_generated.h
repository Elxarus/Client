// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CHANGERECORDINGREQUEST_MONOCLE_H_
#define FLATBUFFERS_GENERATED_CHANGERECORDINGREQUEST_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

#include "token_generated.h"

namespace monocle {

struct ChangeRecordingRequest;

struct ChangeRecordingRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TOKEN = 4,
    VT_SOURCEID = 6,
    VT_NAME = 8,
    VT_LOCATION = 10,
    VT_DESCRIPTION = 12,
    VT_ADDRESS = 14,
    VT_CONTENT = 16,
    VT_RETENTIONTIME = 18,
    VT_ACTIVEJOB = 20
  };
  uint64_t token() const {
    return GetField<uint64_t>(VT_TOKEN, 0);
  }
  const flatbuffers::String *sourceid() const {
    return GetPointer<const flatbuffers::String *>(VT_SOURCEID);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::String *location() const {
    return GetPointer<const flatbuffers::String *>(VT_LOCATION);
  }
  const flatbuffers::String *description() const {
    return GetPointer<const flatbuffers::String *>(VT_DESCRIPTION);
  }
  const flatbuffers::String *address() const {
    return GetPointer<const flatbuffers::String *>(VT_ADDRESS);
  }
  const flatbuffers::String *content() const {
    return GetPointer<const flatbuffers::String *>(VT_CONTENT);
  }
  uint64_t retentiontime() const {
    return GetField<uint64_t>(VT_RETENTIONTIME, 0);
  }
  const monocle::TOKEN *activejob() const {
    return GetStruct<const monocle::TOKEN *>(VT_ACTIVEJOB);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_TOKEN) &&
           VerifyOffset(verifier, VT_SOURCEID) &&
           verifier.VerifyString(sourceid()) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_LOCATION) &&
           verifier.VerifyString(location()) &&
           VerifyOffset(verifier, VT_DESCRIPTION) &&
           verifier.VerifyString(description()) &&
           VerifyOffset(verifier, VT_ADDRESS) &&
           verifier.VerifyString(address()) &&
           VerifyOffset(verifier, VT_CONTENT) &&
           verifier.VerifyString(content()) &&
           VerifyField<uint64_t>(verifier, VT_RETENTIONTIME) &&
           VerifyField<monocle::TOKEN>(verifier, VT_ACTIVEJOB) &&
           verifier.EndTable();
  }
};

struct ChangeRecordingRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_token(uint64_t token) {
    fbb_.AddElement<uint64_t>(ChangeRecordingRequest::VT_TOKEN, token, 0);
  }
  void add_sourceid(flatbuffers::Offset<flatbuffers::String> sourceid) {
    fbb_.AddOffset(ChangeRecordingRequest::VT_SOURCEID, sourceid);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(ChangeRecordingRequest::VT_NAME, name);
  }
  void add_location(flatbuffers::Offset<flatbuffers::String> location) {
    fbb_.AddOffset(ChangeRecordingRequest::VT_LOCATION, location);
  }
  void add_description(flatbuffers::Offset<flatbuffers::String> description) {
    fbb_.AddOffset(ChangeRecordingRequest::VT_DESCRIPTION, description);
  }
  void add_address(flatbuffers::Offset<flatbuffers::String> address) {
    fbb_.AddOffset(ChangeRecordingRequest::VT_ADDRESS, address);
  }
  void add_content(flatbuffers::Offset<flatbuffers::String> content) {
    fbb_.AddOffset(ChangeRecordingRequest::VT_CONTENT, content);
  }
  void add_retentiontime(uint64_t retentiontime) {
    fbb_.AddElement<uint64_t>(ChangeRecordingRequest::VT_RETENTIONTIME, retentiontime, 0);
  }
  void add_activejob(const monocle::TOKEN *activejob) {
    fbb_.AddStruct(ChangeRecordingRequest::VT_ACTIVEJOB, activejob);
  }
  explicit ChangeRecordingRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ChangeRecordingRequestBuilder &operator=(const ChangeRecordingRequestBuilder &);
  flatbuffers::Offset<ChangeRecordingRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ChangeRecordingRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<ChangeRecordingRequest> CreateChangeRecordingRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t token = 0,
    flatbuffers::Offset<flatbuffers::String> sourceid = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::String> location = 0,
    flatbuffers::Offset<flatbuffers::String> description = 0,
    flatbuffers::Offset<flatbuffers::String> address = 0,
    flatbuffers::Offset<flatbuffers::String> content = 0,
    uint64_t retentiontime = 0,
    const monocle::TOKEN *activejob = 0) {
  ChangeRecordingRequestBuilder builder_(_fbb);
  builder_.add_retentiontime(retentiontime);
  builder_.add_token(token);
  builder_.add_activejob(activejob);
  builder_.add_content(content);
  builder_.add_address(address);
  builder_.add_description(description);
  builder_.add_location(location);
  builder_.add_name(name);
  builder_.add_sourceid(sourceid);
  return builder_.Finish();
}

inline flatbuffers::Offset<ChangeRecordingRequest> CreateChangeRecordingRequestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t token = 0,
    const char *sourceid = nullptr,
    const char *name = nullptr,
    const char *location = nullptr,
    const char *description = nullptr,
    const char *address = nullptr,
    const char *content = nullptr,
    uint64_t retentiontime = 0,
    const monocle::TOKEN *activejob = 0) {
  auto sourceid__ = sourceid ? _fbb.CreateString(sourceid) : 0;
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto location__ = location ? _fbb.CreateString(location) : 0;
  auto description__ = description ? _fbb.CreateString(description) : 0;
  auto address__ = address ? _fbb.CreateString(address) : 0;
  auto content__ = content ? _fbb.CreateString(content) : 0;
  return monocle::CreateChangeRecordingRequest(
      _fbb,
      token,
      sourceid__,
      name__,
      location__,
      description__,
      address__,
      content__,
      retentiontime,
      activejob);
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_CHANGERECORDINGREQUEST_MONOCLE_H_
