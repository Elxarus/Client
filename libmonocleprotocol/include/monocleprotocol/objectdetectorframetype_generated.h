// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_OBJECTDETECTORFRAMETYPE_MONOCLE_H_
#define FLATBUFFERS_GENERATED_OBJECTDETECTORFRAMETYPE_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

namespace monocle {

enum class ObjectDetectorFrameType : uint16_t {
  OBJECT_DETECTION = 1,
  MIN = OBJECT_DETECTION,
  MAX = OBJECT_DETECTION
};

inline const ObjectDetectorFrameType (&EnumValuesObjectDetectorFrameType())[1] {
  static const ObjectDetectorFrameType values[] = {
    ObjectDetectorFrameType::OBJECT_DETECTION
  };
  return values;
}

inline const char * const *EnumNamesObjectDetectorFrameType() {
  static const char * const names[2] = {
    "OBJECT_DETECTION",
    nullptr
  };
  return names;
}

inline const char *EnumNameObjectDetectorFrameType(ObjectDetectorFrameType e) {
  if (e < ObjectDetectorFrameType::OBJECT_DETECTION || e > ObjectDetectorFrameType::OBJECT_DETECTION) return "";
  const size_t index = static_cast<size_t>(e) - static_cast<size_t>(ObjectDetectorFrameType::OBJECT_DETECTION);
  return EnumNamesObjectDetectorFrameType()[index];
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_OBJECTDETECTORFRAMETYPE_MONOCLE_H_
