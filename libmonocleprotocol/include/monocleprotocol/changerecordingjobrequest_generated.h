// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CHANGERECORDINGJOBREQUEST_MONOCLE_H_
#define FLATBUFFERS_GENERATED_CHANGERECORDINGJOBREQUEST_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

#include "changerecordingjobsource_generated.h"
#include "receivermode_generated.h"

namespace monocle {

struct ChangeRecordingJobRequest;

struct ChangeRecordingJobRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_RECORDINGTOKEN = 4,
    VT_TOKEN = 6,
    VT_NAME = 8,
    VT_ENABLED = 10,
    VT_PRIORITY = 12,
    VT_SOURCES = 14
  };
  uint64_t recordingtoken() const {
    return GetField<uint64_t>(VT_RECORDINGTOKEN, 0);
  }
  uint64_t token() const {
    return GetField<uint64_t>(VT_TOKEN, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  bool enabled() const {
    return GetField<uint8_t>(VT_ENABLED, 0) != 0;
  }
  uint64_t priority() const {
    return GetField<uint64_t>(VT_PRIORITY, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<ChangeRecordingJobSource>> *sources() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<ChangeRecordingJobSource>> *>(VT_SOURCES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_RECORDINGTOKEN) &&
           VerifyField<uint64_t>(verifier, VT_TOKEN) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<uint8_t>(verifier, VT_ENABLED) &&
           VerifyField<uint64_t>(verifier, VT_PRIORITY) &&
           VerifyOffset(verifier, VT_SOURCES) &&
           verifier.VerifyVector(sources()) &&
           verifier.VerifyVectorOfTables(sources()) &&
           verifier.EndTable();
  }
};

struct ChangeRecordingJobRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_recordingtoken(uint64_t recordingtoken) {
    fbb_.AddElement<uint64_t>(ChangeRecordingJobRequest::VT_RECORDINGTOKEN, recordingtoken, 0);
  }
  void add_token(uint64_t token) {
    fbb_.AddElement<uint64_t>(ChangeRecordingJobRequest::VT_TOKEN, token, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(ChangeRecordingJobRequest::VT_NAME, name);
  }
  void add_enabled(bool enabled) {
    fbb_.AddElement<uint8_t>(ChangeRecordingJobRequest::VT_ENABLED, static_cast<uint8_t>(enabled), 0);
  }
  void add_priority(uint64_t priority) {
    fbb_.AddElement<uint64_t>(ChangeRecordingJobRequest::VT_PRIORITY, priority, 0);
  }
  void add_sources(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<ChangeRecordingJobSource>>> sources) {
    fbb_.AddOffset(ChangeRecordingJobRequest::VT_SOURCES, sources);
  }
  explicit ChangeRecordingJobRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ChangeRecordingJobRequestBuilder &operator=(const ChangeRecordingJobRequestBuilder &);
  flatbuffers::Offset<ChangeRecordingJobRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ChangeRecordingJobRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<ChangeRecordingJobRequest> CreateChangeRecordingJobRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t recordingtoken = 0,
    uint64_t token = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    bool enabled = false,
    uint64_t priority = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<ChangeRecordingJobSource>>> sources = 0) {
  ChangeRecordingJobRequestBuilder builder_(_fbb);
  builder_.add_priority(priority);
  builder_.add_token(token);
  builder_.add_recordingtoken(recordingtoken);
  builder_.add_sources(sources);
  builder_.add_name(name);
  builder_.add_enabled(enabled);
  return builder_.Finish();
}

inline flatbuffers::Offset<ChangeRecordingJobRequest> CreateChangeRecordingJobRequestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t recordingtoken = 0,
    uint64_t token = 0,
    const char *name = nullptr,
    bool enabled = false,
    uint64_t priority = 0,
    const std::vector<flatbuffers::Offset<ChangeRecordingJobSource>> *sources = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto sources__ = sources ? _fbb.CreateVector<flatbuffers::Offset<ChangeRecordingJobSource>>(*sources) : 0;
  return monocle::CreateChangeRecordingJobRequest(
      _fbb,
      recordingtoken,
      token,
      name__,
      enabled,
      priority,
      sources__);
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_CHANGERECORDINGJOBREQUEST_MONOCLE_H_
