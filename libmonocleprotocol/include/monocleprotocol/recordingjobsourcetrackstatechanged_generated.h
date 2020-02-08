// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_RECORDINGJOBSOURCETRACKSTATECHANGED_MONOCLE_H_
#define FLATBUFFERS_GENERATED_RECORDINGJOBSOURCETRACKSTATECHANGED_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

#include "recordingjobstate_generated.h"

namespace monocle {

struct RecordingJobSourceTrackStateChanged;

struct RecordingJobSourceTrackStateChanged FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_RECORDING = 4,
    VT_RECORDINGJOB = 6,
    VT_RECORDINGJOBSOURCE = 8,
    VT_RECORDINGJOBSOURCETRACK = 10,
    VT_TIME = 12,
    VT_STATE = 14,
    VT_ERROR = 16
  };
  uint64_t recording() const {
    return GetField<uint64_t>(VT_RECORDING, 0);
  }
  uint64_t recordingjob() const {
    return GetField<uint64_t>(VT_RECORDINGJOB, 0);
  }
  uint64_t recordingjobsource() const {
    return GetField<uint64_t>(VT_RECORDINGJOBSOURCE, 0);
  }
  uint64_t recordingjobsourcetrack() const {
    return GetField<uint64_t>(VT_RECORDINGJOBSOURCETRACK, 0);
  }
  uint64_t time() const {
    return GetField<uint64_t>(VT_TIME, 0);
  }
  RecordingJobState state() const {
    return static_cast<RecordingJobState>(GetField<int8_t>(VT_STATE, 0));
  }
  const flatbuffers::String *error() const {
    return GetPointer<const flatbuffers::String *>(VT_ERROR);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_RECORDING) &&
           VerifyField<uint64_t>(verifier, VT_RECORDINGJOB) &&
           VerifyField<uint64_t>(verifier, VT_RECORDINGJOBSOURCE) &&
           VerifyField<uint64_t>(verifier, VT_RECORDINGJOBSOURCETRACK) &&
           VerifyField<uint64_t>(verifier, VT_TIME) &&
           VerifyField<int8_t>(verifier, VT_STATE) &&
           VerifyOffset(verifier, VT_ERROR) &&
           verifier.VerifyString(error()) &&
           verifier.EndTable();
  }
};

struct RecordingJobSourceTrackStateChangedBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_recording(uint64_t recording) {
    fbb_.AddElement<uint64_t>(RecordingJobSourceTrackStateChanged::VT_RECORDING, recording, 0);
  }
  void add_recordingjob(uint64_t recordingjob) {
    fbb_.AddElement<uint64_t>(RecordingJobSourceTrackStateChanged::VT_RECORDINGJOB, recordingjob, 0);
  }
  void add_recordingjobsource(uint64_t recordingjobsource) {
    fbb_.AddElement<uint64_t>(RecordingJobSourceTrackStateChanged::VT_RECORDINGJOBSOURCE, recordingjobsource, 0);
  }
  void add_recordingjobsourcetrack(uint64_t recordingjobsourcetrack) {
    fbb_.AddElement<uint64_t>(RecordingJobSourceTrackStateChanged::VT_RECORDINGJOBSOURCETRACK, recordingjobsourcetrack, 0);
  }
  void add_time(uint64_t time) {
    fbb_.AddElement<uint64_t>(RecordingJobSourceTrackStateChanged::VT_TIME, time, 0);
  }
  void add_state(RecordingJobState state) {
    fbb_.AddElement<int8_t>(RecordingJobSourceTrackStateChanged::VT_STATE, static_cast<int8_t>(state), 0);
  }
  void add_error(flatbuffers::Offset<flatbuffers::String> error) {
    fbb_.AddOffset(RecordingJobSourceTrackStateChanged::VT_ERROR, error);
  }
  explicit RecordingJobSourceTrackStateChangedBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  RecordingJobSourceTrackStateChangedBuilder &operator=(const RecordingJobSourceTrackStateChangedBuilder &);
  flatbuffers::Offset<RecordingJobSourceTrackStateChanged> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<RecordingJobSourceTrackStateChanged>(end);
    return o;
  }
};

inline flatbuffers::Offset<RecordingJobSourceTrackStateChanged> CreateRecordingJobSourceTrackStateChanged(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t recording = 0,
    uint64_t recordingjob = 0,
    uint64_t recordingjobsource = 0,
    uint64_t recordingjobsourcetrack = 0,
    uint64_t time = 0,
    RecordingJobState state = RecordingJobState::Idle,
    flatbuffers::Offset<flatbuffers::String> error = 0) {
  RecordingJobSourceTrackStateChangedBuilder builder_(_fbb);
  builder_.add_time(time);
  builder_.add_recordingjobsourcetrack(recordingjobsourcetrack);
  builder_.add_recordingjobsource(recordingjobsource);
  builder_.add_recordingjob(recordingjob);
  builder_.add_recording(recording);
  builder_.add_error(error);
  builder_.add_state(state);
  return builder_.Finish();
}

inline flatbuffers::Offset<RecordingJobSourceTrackStateChanged> CreateRecordingJobSourceTrackStateChangedDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t recording = 0,
    uint64_t recordingjob = 0,
    uint64_t recordingjobsource = 0,
    uint64_t recordingjobsourcetrack = 0,
    uint64_t time = 0,
    RecordingJobState state = RecordingJobState::Idle,
    const char *error = nullptr) {
  auto error__ = error ? _fbb.CreateString(error) : 0;
  return monocle::CreateRecordingJobSourceTrackStateChanged(
      _fbb,
      recording,
      recordingjob,
      recordingjobsource,
      recordingjobsourcetrack,
      time,
      state,
      error__);
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_RECORDINGJOBSOURCETRACKSTATECHANGED_MONOCLE_H_
