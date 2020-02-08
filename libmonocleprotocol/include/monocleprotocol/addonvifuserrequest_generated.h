// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ADDONVIFUSERREQUEST_MONOCLE_H_
#define FLATBUFFERS_GENERATED_ADDONVIFUSERREQUEST_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

#include "onvifuserlevel_generated.h"

namespace monocle {

struct AddONVIFUserRequest;

struct AddONVIFUserRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_USERNAME = 4,
    VT_PASSWORD = 6,
    VT_ONVIFUSERLEVEL = 8
  };
  const flatbuffers::String *username() const {
    return GetPointer<const flatbuffers::String *>(VT_USERNAME);
  }
  const flatbuffers::String *password() const {
    return GetPointer<const flatbuffers::String *>(VT_PASSWORD);
  }
  ONVIFUserlevel onvifuserlevel() const {
    return static_cast<ONVIFUserlevel>(GetField<int8_t>(VT_ONVIFUSERLEVEL, 1));
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_USERNAME) &&
           verifier.VerifyString(username()) &&
           VerifyOffset(verifier, VT_PASSWORD) &&
           verifier.VerifyString(password()) &&
           VerifyField<int8_t>(verifier, VT_ONVIFUSERLEVEL) &&
           verifier.EndTable();
  }
};

struct AddONVIFUserRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_username(flatbuffers::Offset<flatbuffers::String> username) {
    fbb_.AddOffset(AddONVIFUserRequest::VT_USERNAME, username);
  }
  void add_password(flatbuffers::Offset<flatbuffers::String> password) {
    fbb_.AddOffset(AddONVIFUserRequest::VT_PASSWORD, password);
  }
  void add_onvifuserlevel(ONVIFUserlevel onvifuserlevel) {
    fbb_.AddElement<int8_t>(AddONVIFUserRequest::VT_ONVIFUSERLEVEL, static_cast<int8_t>(onvifuserlevel), 1);
  }
  explicit AddONVIFUserRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AddONVIFUserRequestBuilder &operator=(const AddONVIFUserRequestBuilder &);
  flatbuffers::Offset<AddONVIFUserRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<AddONVIFUserRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<AddONVIFUserRequest> CreateAddONVIFUserRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> username = 0,
    flatbuffers::Offset<flatbuffers::String> password = 0,
    ONVIFUserlevel onvifuserlevel = ONVIFUserlevel::Anonymous) {
  AddONVIFUserRequestBuilder builder_(_fbb);
  builder_.add_password(password);
  builder_.add_username(username);
  builder_.add_onvifuserlevel(onvifuserlevel);
  return builder_.Finish();
}

inline flatbuffers::Offset<AddONVIFUserRequest> CreateAddONVIFUserRequestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *username = nullptr,
    const char *password = nullptr,
    ONVIFUserlevel onvifuserlevel = ONVIFUserlevel::Anonymous) {
  auto username__ = username ? _fbb.CreateString(username) : 0;
  auto password__ = password ? _fbb.CreateString(password) : 0;
  return monocle::CreateAddONVIFUserRequest(
      _fbb,
      username__,
      password__,
      onvifuserlevel);
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_ADDONVIFUSERREQUEST_MONOCLE_H_
