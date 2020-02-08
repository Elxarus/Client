// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ADDTRACKREQUEST_MONOCLE_H_
#define FLATBUFFERS_GENERATED_ADDTRACKREQUEST_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

#include "tracktype_generated.h"

namespace monocle {

struct AddTrackRequest;

struct AddTrackRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_RECORDINGTOKEN = 4,
    VT_TRACKTYPE = 6,
    VT_DESCRIPTION = 8,
    VT_FIXEDFILES = 10,
    VT_DIGITALSIGNING = 12,
    VT_ENCRYPT = 14,
    VT_FLUSHFREQUENCY = 16,
    VT_FILES = 18
  };
  uint64_t recordingtoken() const {
    return GetField<uint64_t>(VT_RECORDINGTOKEN, 0);
  }
  TrackType tracktype() const {
    return static_cast<TrackType>(GetField<int8_t>(VT_TRACKTYPE, 0));
  }
  const flatbuffers::String *description() const {
    return GetPointer<const flatbuffers::String *>(VT_DESCRIPTION);
  }
  bool fixedfiles() const {
    return GetField<uint8_t>(VT_FIXEDFILES, 0) != 0;
  }
  bool digitalsigning() const {
    return GetField<uint8_t>(VT_DIGITALSIGNING, 0) != 0;
  }
  bool encrypt() const {
    return GetField<uint8_t>(VT_ENCRYPT, 0) != 0;
  }
  uint32_t flushfrequency() const {
    return GetField<uint32_t>(VT_FLUSHFREQUENCY, 0);
  }
  const flatbuffers::Vector<uint64_t> *files() const {
    return GetPointer<const flatbuffers::Vector<uint64_t> *>(VT_FILES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_RECORDINGTOKEN) &&
           VerifyField<int8_t>(verifier, VT_TRACKTYPE) &&
           VerifyOffset(verifier, VT_DESCRIPTION) &&
           verifier.VerifyString(description()) &&
           VerifyField<uint8_t>(verifier, VT_FIXEDFILES) &&
           VerifyField<uint8_t>(verifier, VT_DIGITALSIGNING) &&
           VerifyField<uint8_t>(verifier, VT_ENCRYPT) &&
           VerifyField<uint32_t>(verifier, VT_FLUSHFREQUENCY) &&
           VerifyOffset(verifier, VT_FILES) &&
           verifier.VerifyVector(files()) &&
           verifier.EndTable();
  }
};

struct AddTrackRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_recordingtoken(uint64_t recordingtoken) {
    fbb_.AddElement<uint64_t>(AddTrackRequest::VT_RECORDINGTOKEN, recordingtoken, 0);
  }
  void add_tracktype(TrackType tracktype) {
    fbb_.AddElement<int8_t>(AddTrackRequest::VT_TRACKTYPE, static_cast<int8_t>(tracktype), 0);
  }
  void add_description(flatbuffers::Offset<flatbuffers::String> description) {
    fbb_.AddOffset(AddTrackRequest::VT_DESCRIPTION, description);
  }
  void add_fixedfiles(bool fixedfiles) {
    fbb_.AddElement<uint8_t>(AddTrackRequest::VT_FIXEDFILES, static_cast<uint8_t>(fixedfiles), 0);
  }
  void add_digitalsigning(bool digitalsigning) {
    fbb_.AddElement<uint8_t>(AddTrackRequest::VT_DIGITALSIGNING, static_cast<uint8_t>(digitalsigning), 0);
  }
  void add_encrypt(bool encrypt) {
    fbb_.AddElement<uint8_t>(AddTrackRequest::VT_ENCRYPT, static_cast<uint8_t>(encrypt), 0);
  }
  void add_flushfrequency(uint32_t flushfrequency) {
    fbb_.AddElement<uint32_t>(AddTrackRequest::VT_FLUSHFREQUENCY, flushfrequency, 0);
  }
  void add_files(flatbuffers::Offset<flatbuffers::Vector<uint64_t>> files) {
    fbb_.AddOffset(AddTrackRequest::VT_FILES, files);
  }
  explicit AddTrackRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AddTrackRequestBuilder &operator=(const AddTrackRequestBuilder &);
  flatbuffers::Offset<AddTrackRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<AddTrackRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<AddTrackRequest> CreateAddTrackRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t recordingtoken = 0,
    TrackType tracktype = TrackType::Video,
    flatbuffers::Offset<flatbuffers::String> description = 0,
    bool fixedfiles = false,
    bool digitalsigning = false,
    bool encrypt = false,
    uint32_t flushfrequency = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint64_t>> files = 0) {
  AddTrackRequestBuilder builder_(_fbb);
  builder_.add_recordingtoken(recordingtoken);
  builder_.add_files(files);
  builder_.add_flushfrequency(flushfrequency);
  builder_.add_description(description);
  builder_.add_encrypt(encrypt);
  builder_.add_digitalsigning(digitalsigning);
  builder_.add_fixedfiles(fixedfiles);
  builder_.add_tracktype(tracktype);
  return builder_.Finish();
}

inline flatbuffers::Offset<AddTrackRequest> CreateAddTrackRequestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t recordingtoken = 0,
    TrackType tracktype = TrackType::Video,
    const char *description = nullptr,
    bool fixedfiles = false,
    bool digitalsigning = false,
    bool encrypt = false,
    uint32_t flushfrequency = 0,
    const std::vector<uint64_t> *files = nullptr) {
  auto description__ = description ? _fbb.CreateString(description) : 0;
  auto files__ = files ? _fbb.CreateVector<uint64_t>(*files) : 0;
  return monocle::CreateAddTrackRequest(
      _fbb,
      recordingtoken,
      tracktype,
      description__,
      fixedfiles,
      digitalsigning,
      encrypt,
      flushfrequency,
      files__);
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_ADDTRACKREQUEST_MONOCLE_H_
