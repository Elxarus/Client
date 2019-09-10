// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SUBSCRIBERECORDINGJOBLOGRESPONSE_MONOCLE_H_
#define FLATBUFFERS_GENERATED_SUBSCRIBERECORDINGJOBLOGRESPONSE_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

#include "logmessage_generated.h"
#include "severity_generated.h"

namespace monocle {

struct RecordingJobLogMessages;

struct SubscribeRecordingJobLogResponse;

struct RecordingJobLogMessages FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TOKEN = 4,
    VT_MESSAGES = 6
  };
  uint64_t token() const {
    return GetField<uint64_t>(VT_TOKEN, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<monocle::LogMessage>> *messages() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<monocle::LogMessage>> *>(VT_MESSAGES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_TOKEN) &&
           VerifyOffset(verifier, VT_MESSAGES) &&
           verifier.VerifyVector(messages()) &&
           verifier.VerifyVectorOfTables(messages()) &&
           verifier.EndTable();
  }
};

struct RecordingJobLogMessagesBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_token(uint64_t token) {
    fbb_.AddElement<uint64_t>(RecordingJobLogMessages::VT_TOKEN, token, 0);
  }
  void add_messages(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<monocle::LogMessage>>> messages) {
    fbb_.AddOffset(RecordingJobLogMessages::VT_MESSAGES, messages);
  }
  explicit RecordingJobLogMessagesBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  RecordingJobLogMessagesBuilder &operator=(const RecordingJobLogMessagesBuilder &);
  flatbuffers::Offset<RecordingJobLogMessages> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<RecordingJobLogMessages>(end);
    return o;
  }
};

inline flatbuffers::Offset<RecordingJobLogMessages> CreateRecordingJobLogMessages(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t token = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<monocle::LogMessage>>> messages = 0) {
  RecordingJobLogMessagesBuilder builder_(_fbb);
  builder_.add_token(token);
  builder_.add_messages(messages);
  return builder_.Finish();
}

inline flatbuffers::Offset<RecordingJobLogMessages> CreateRecordingJobLogMessagesDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t token = 0,
    const std::vector<flatbuffers::Offset<monocle::LogMessage>> *messages = nullptr) {
  auto messages__ = messages ? _fbb.CreateVector<flatbuffers::Offset<monocle::LogMessage>>(*messages) : 0;
  return monocle::CreateRecordingJobLogMessages(
      _fbb,
      token,
      messages__);
}

struct SubscribeRecordingJobLogResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_RECORDINGJOBLOGMESSAGES = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<monocle::RecordingJobLogMessages>> *recordingjoblogmessages() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<monocle::RecordingJobLogMessages>> *>(VT_RECORDINGJOBLOGMESSAGES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_RECORDINGJOBLOGMESSAGES) &&
           verifier.VerifyVector(recordingjoblogmessages()) &&
           verifier.VerifyVectorOfTables(recordingjoblogmessages()) &&
           verifier.EndTable();
  }
};

struct SubscribeRecordingJobLogResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_recordingjoblogmessages(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<monocle::RecordingJobLogMessages>>> recordingjoblogmessages) {
    fbb_.AddOffset(SubscribeRecordingJobLogResponse::VT_RECORDINGJOBLOGMESSAGES, recordingjoblogmessages);
  }
  explicit SubscribeRecordingJobLogResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  SubscribeRecordingJobLogResponseBuilder &operator=(const SubscribeRecordingJobLogResponseBuilder &);
  flatbuffers::Offset<SubscribeRecordingJobLogResponse> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<SubscribeRecordingJobLogResponse>(end);
    return o;
  }
};

inline flatbuffers::Offset<SubscribeRecordingJobLogResponse> CreateSubscribeRecordingJobLogResponse(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<monocle::RecordingJobLogMessages>>> recordingjoblogmessages = 0) {
  SubscribeRecordingJobLogResponseBuilder builder_(_fbb);
  builder_.add_recordingjoblogmessages(recordingjoblogmessages);
  return builder_.Finish();
}

inline flatbuffers::Offset<SubscribeRecordingJobLogResponse> CreateSubscribeRecordingJobLogResponseDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<monocle::RecordingJobLogMessages>> *recordingjoblogmessages = nullptr) {
  auto recordingjoblogmessages__ = recordingjoblogmessages ? _fbb.CreateVector<flatbuffers::Offset<monocle::RecordingJobLogMessages>>(*recordingjoblogmessages) : 0;
  return monocle::CreateSubscribeRecordingJobLogResponse(
      _fbb,
      recordingjoblogmessages__);
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_SUBSCRIBERECORDINGJOBLOGRESPONSE_MONOCLE_H_
