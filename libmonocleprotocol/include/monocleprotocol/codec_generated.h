// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CODEC_MONOCLE_H_
#define FLATBUFFERS_GENERATED_CODEC_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

namespace monocle {

enum class Codec : int8_t {
  METADATA = 0,
  MJPEG = 1,
  MPEG4 = 2,
  H264 = 3,
  H265 = 4,
  MIN = METADATA,
  MAX = H265
};

inline const Codec (&EnumValuesCodec())[5] {
  static const Codec values[] = {
    Codec::METADATA,
    Codec::MJPEG,
    Codec::MPEG4,
    Codec::H264,
    Codec::H265
  };
  return values;
}

inline const char * const *EnumNamesCodec() {
  static const char * const names[6] = {
    "METADATA",
    "MJPEG",
    "MPEG4",
    "H264",
    "H265",
    nullptr
  };
  return names;
}

inline const char *EnumNameCodec(Codec e) {
  if (e < Codec::METADATA || e > Codec::H265) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesCodec()[index];
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_CODEC_MONOCLE_H_