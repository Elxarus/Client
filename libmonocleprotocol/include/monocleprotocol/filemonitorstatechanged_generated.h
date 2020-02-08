// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FILEMONITORSTATECHANGED_MONOCLE_H_
#define FLATBUFFERS_GENERATED_FILEMONITORSTATECHANGED_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

#include "filemonitorstate_generated.h"

namespace monocle {

struct FileMonitorStateChanged;

struct FileMonitorStateChanged FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TOKEN = 4,
    VT_STATE = 6
  };
  uint64_t token() const {
    return GetField<uint64_t>(VT_TOKEN, 0);
  }
  FileMonitorState state() const {
    return static_cast<FileMonitorState>(GetField<int8_t>(VT_STATE, 0));
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_TOKEN) &&
           VerifyField<int8_t>(verifier, VT_STATE) &&
           verifier.EndTable();
  }
};

struct FileMonitorStateChangedBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_token(uint64_t token) {
    fbb_.AddElement<uint64_t>(FileMonitorStateChanged::VT_TOKEN, token, 0);
  }
  void add_state(FileMonitorState state) {
    fbb_.AddElement<int8_t>(FileMonitorStateChanged::VT_STATE, static_cast<int8_t>(state), 0);
  }
  explicit FileMonitorStateChangedBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FileMonitorStateChangedBuilder &operator=(const FileMonitorStateChangedBuilder &);
  flatbuffers::Offset<FileMonitorStateChanged> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<FileMonitorStateChanged>(end);
    return o;
  }
};

inline flatbuffers::Offset<FileMonitorStateChanged> CreateFileMonitorStateChanged(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t token = 0,
    FileMonitorState state = FileMonitorState::Unavailable) {
  FileMonitorStateChangedBuilder builder_(_fbb);
  builder_.add_token(token);
  builder_.add_state(state);
  return builder_.Finish();
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_FILEMONITORSTATECHANGED_MONOCLE_H_
