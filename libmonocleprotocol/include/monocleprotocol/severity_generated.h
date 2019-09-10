// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SEVERITY_MONOCLE_H_
#define FLATBUFFERS_GENERATED_SEVERITY_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

namespace monocle {

enum class Severity : int8_t {
  Trace = 0,
  Debug = 1,
  Info = 2,
  Warn = 3,
  Err = 4,
  Critical = 5,
  MIN = Trace,
  MAX = Critical
};

inline const Severity (&EnumValuesSeverity())[6] {
  static const Severity values[] = {
    Severity::Trace,
    Severity::Debug,
    Severity::Info,
    Severity::Warn,
    Severity::Err,
    Severity::Critical
  };
  return values;
}

inline const char * const *EnumNamesSeverity() {
  static const char * const names[7] = {
    "Trace",
    "Debug",
    "Info",
    "Warn",
    "Err",
    "Critical",
    nullptr
  };
  return names;
}

inline const char *EnumNameSeverity(Severity e) {
  if (e < Severity::Trace || e > Severity::Critical) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesSeverity()[index];
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_SEVERITY_MONOCLE_H_
