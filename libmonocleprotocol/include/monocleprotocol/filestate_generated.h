// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FILESTATE_MONOCLE_H_
#define FLATBUFFERS_GENERATED_FILESTATE_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

namespace monocle {

enum class FileState : int8_t {
  Unmounted = 0,
  Mounted = 1,
  Mounting = 2,
  Unmounting = 3,
  MIN = Unmounted,
  MAX = Unmounting
};

inline const FileState (&EnumValuesFileState())[4] {
  static const FileState values[] = {
    FileState::Unmounted,
    FileState::Mounted,
    FileState::Mounting,
    FileState::Unmounting
  };
  return values;
}

inline const char * const *EnumNamesFileState() {
  static const char * const names[] = {
    "Unmounted",
    "Mounted",
    "Mounting",
    "Unmounting",
    nullptr
  };
  return names;
}

inline const char *EnumNameFileState(FileState e) {
  if (e < FileState::Unmounted || e > FileState::Unmounting) return "";
  const size_t index = static_cast<int>(e);
  return EnumNamesFileState()[index];
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_FILESTATE_MONOCLE_H_
