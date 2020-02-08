// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FILE_MONOCLE_H_
#define FLATBUFFERS_GENERATED_FILE_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

#include "filemonitorstate_generated.h"
#include "filestate_generated.h"

namespace monocle {

struct File;

struct File FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TOKEN = 4,
    VT_PATH = 6,
    VT_MOUNTPOINT = 8,
    VT_NUMCHUNKS = 10,
    VT_CHUNKSIZE = 12,
    VT_AUTOMOUNT = 14,
    VT_STATE = 16,
    VT_MONITORSTATE = 18
  };
  uint64_t token() const {
    return GetField<uint64_t>(VT_TOKEN, 0);
  }
  const flatbuffers::String *path() const {
    return GetPointer<const flatbuffers::String *>(VT_PATH);
  }
  const flatbuffers::String *mountpoint() const {
    return GetPointer<const flatbuffers::String *>(VT_MOUNTPOINT);
  }
  uint64_t numchunks() const {
    return GetField<uint64_t>(VT_NUMCHUNKS, 0);
  }
  uint64_t chunksize() const {
    return GetField<uint64_t>(VT_CHUNKSIZE, 0);
  }
  bool automount() const {
    return GetField<uint8_t>(VT_AUTOMOUNT, 0) != 0;
  }
  FileState state() const {
    return static_cast<FileState>(GetField<int8_t>(VT_STATE, 0));
  }
  FileMonitorState monitorstate() const {
    return static_cast<FileMonitorState>(GetField<int8_t>(VT_MONITORSTATE, 0));
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_TOKEN) &&
           VerifyOffset(verifier, VT_PATH) &&
           verifier.VerifyString(path()) &&
           VerifyOffset(verifier, VT_MOUNTPOINT) &&
           verifier.VerifyString(mountpoint()) &&
           VerifyField<uint64_t>(verifier, VT_NUMCHUNKS) &&
           VerifyField<uint64_t>(verifier, VT_CHUNKSIZE) &&
           VerifyField<uint8_t>(verifier, VT_AUTOMOUNT) &&
           VerifyField<int8_t>(verifier, VT_STATE) &&
           VerifyField<int8_t>(verifier, VT_MONITORSTATE) &&
           verifier.EndTable();
  }
};

struct FileBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_token(uint64_t token) {
    fbb_.AddElement<uint64_t>(File::VT_TOKEN, token, 0);
  }
  void add_path(flatbuffers::Offset<flatbuffers::String> path) {
    fbb_.AddOffset(File::VT_PATH, path);
  }
  void add_mountpoint(flatbuffers::Offset<flatbuffers::String> mountpoint) {
    fbb_.AddOffset(File::VT_MOUNTPOINT, mountpoint);
  }
  void add_numchunks(uint64_t numchunks) {
    fbb_.AddElement<uint64_t>(File::VT_NUMCHUNKS, numchunks, 0);
  }
  void add_chunksize(uint64_t chunksize) {
    fbb_.AddElement<uint64_t>(File::VT_CHUNKSIZE, chunksize, 0);
  }
  void add_automount(bool automount) {
    fbb_.AddElement<uint8_t>(File::VT_AUTOMOUNT, static_cast<uint8_t>(automount), 0);
  }
  void add_state(FileState state) {
    fbb_.AddElement<int8_t>(File::VT_STATE, static_cast<int8_t>(state), 0);
  }
  void add_monitorstate(FileMonitorState monitorstate) {
    fbb_.AddElement<int8_t>(File::VT_MONITORSTATE, static_cast<int8_t>(monitorstate), 0);
  }
  explicit FileBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FileBuilder &operator=(const FileBuilder &);
  flatbuffers::Offset<File> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<File>(end);
    return o;
  }
};

inline flatbuffers::Offset<File> CreateFile(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t token = 0,
    flatbuffers::Offset<flatbuffers::String> path = 0,
    flatbuffers::Offset<flatbuffers::String> mountpoint = 0,
    uint64_t numchunks = 0,
    uint64_t chunksize = 0,
    bool automount = false,
    FileState state = FileState::Unmounted,
    FileMonitorState monitorstate = FileMonitorState::Unavailable) {
  FileBuilder builder_(_fbb);
  builder_.add_chunksize(chunksize);
  builder_.add_numchunks(numchunks);
  builder_.add_token(token);
  builder_.add_mountpoint(mountpoint);
  builder_.add_path(path);
  builder_.add_monitorstate(monitorstate);
  builder_.add_state(state);
  builder_.add_automount(automount);
  return builder_.Finish();
}

inline flatbuffers::Offset<File> CreateFileDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t token = 0,
    const char *path = nullptr,
    const char *mountpoint = nullptr,
    uint64_t numchunks = 0,
    uint64_t chunksize = 0,
    bool automount = false,
    FileState state = FileState::Unmounted,
    FileMonitorState monitorstate = FileMonitorState::Unavailable) {
  auto path__ = path ? _fbb.CreateString(path) : 0;
  auto mountpoint__ = mountpoint ? _fbb.CreateString(mountpoint) : 0;
  return monocle::CreateFile(
      _fbb,
      token,
      path__,
      mountpoint__,
      numchunks,
      chunksize,
      automount,
      state,
      monitorstate);
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_FILE_MONOCLE_H_
