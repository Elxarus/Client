// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_MESSAGE_MONOCLE_H_
#define FLATBUFFERS_GENERATED_MESSAGE_MONOCLE_H_

#include "flatbuffers/flatbuffers.h"

namespace monocle {

enum class Message : uint16_t {
  ADDFILE = 0,
  ADDGROUP = 1,
  ADDONVIFUSER = 2,
  ADDRECEIVER = 3,
  ADDRECORDING = 4,
  ADDRECORDINGJOB = 5,
  ADDTRACK = 6,
  ADDUSER = 7,
  AUTHENTICATE = 8,
  CHANGEGROUP = 9,
  CHANGEONVIFUSER = 10,
  CHANGERECEIVER = 11,
  CHANGERECORDING = 12,
  CHANGERECORDINGJOB = 13,
  CHANGETRACK = 14,
  CHANGEUSER = 15,
  CONTROLSTREAM = 16,
  CONTROLSTREAMFRAMESTEP = 17,
  CONTROLSTREAMLIVE = 18,
  CONTROLSTREAMPAUSE = 19,
  CREATESTREAM = 20,
  DISCOVERYBROADCAST = 21,
  GETAUTHNETICATIONNONCE = 22,
  GETFILES = 23,
  GETRECEIVERS = 24,
  GETRECORDINGS = 25,
  GETTIME = 26,
  KEEPALIVE = 27,
  MOUNTFILE = 28,
  REMOVEFILE = 29,
  REMOVEGROUP = 30,
  REMOVEONVIFUSER = 31,
  REMOVERECEIVER = 32,
  REMOVERECORDING = 33,
  REMOVERECORDINGJOB = 34,
  REMOVETRACK = 35,
  REMOVEUSER = 36,
  SUBSCRIBE = 37,
  SUBSCRIBEDISCOVERY = 38,
  SUBSCRIBEHARDWARESTATS = 39,
  SUBSCRIBERECORDINGJOBLOG = 40,
  SUBSCRIBERECORDINGJOBSOURCETRACKLOG = 41,
  SUBSCRIBERECORDINGLOG = 42,
  SUBSCRIBERECORDINGTRACKLOG = 43,
  UNMOUNTFILE = 44,
  UNSUBSCRIBEDISCOVERY = 45,
  UNSUBSCRIBEHARDWARESTATS = 46,
  UNSUBSCRIBERECORDINGJOBLOG = 47,
  UNSUBSCRIBERECORDINGJOBSOURCETRACKLOG = 48,
  UNSUBSCRIBERECORDINGLOG = 49,
  UNSUBSCRIBERECORDINGTRACKLOG = 50,
  ADDMAP = 51,
  CHANGEMAP = 52,
  REMOVEMAP = 53,
  REMOVERECORDINGJOBSOURCE = 54,
  DESTROYSTREAM = 55,
  SETNAME = 56,
  SETLOCATION = 57,
  GETSTATE = 58,
  GETRECORDING = 59,
  CREATEFINDMOTION = 60,
  DESTROYFINDMOTION = 61,
  GETSNAPSHOT = 62,
  CREATEFINDOBJECT = 63,
  DESTROYFINDOBJECT = 64,
  CONTROLSTREAMEND = 8000,
  DISCOVERYHELLO = 8001,
  FILEADDED = 8002,
  FILEREMOVED = 8003,
  FILEMONITORSTATECHANGED = 8004,
  FILESTATECHANGED = 8005,
  GOODBYE = 8006,
  GROUPADDED = 8007,
  GROUPCHANGED = 8008,
  GROUPREMOVED = 8009,
  H264FRAME = 8010,
  HARDWARESTATS = 8011,
  JPEGFRAME = 8012,
  METADATAFRAME = 8013,
  MPEG4FRAME = 8014,
  NEWCODECINDEX = 8015,
  ONVIFUSERADDED = 8016,
  ONVIFUSERCHANGED = 8017,
  ONVIFUSERREMOVED = 8018,
  RECEIVERADDED = 8019,
  RECEIVERREMOVED = 8020,
  RECEIVERCHANGED = 8021,
  RECORDINGACTIVEJOBCHANGED = 8022,
  RECORDINGADDED = 8023,
  RECORDINGCHANGED = 8024,
  RECORDINGJOBADDED = 8025,
  RECORDINGJOBCHANGED = 8026,
  RECORDINGJOBREMOVED = 8027,
  RECORDINGJOBSOURCEADDED = 8028,
  RECORDINGJOBSOURCEREMOVED = 8029,
  RECORDINGREMOVED = 8030,
  RECORDINGJOBLOGMESSAGE = 8031,
  RECORDINGJOBSOURCETRACKACTIVEPARAMETERSCHANGED = 8032,
  RECORDINGJOBSOURCETRACKADDED = 8033,
  RECORDINGJOBSOURCETRACKLOGMESSAGE = 8034,
  RECORDINGJOBSOURCETRACKREMOVED = 8035,
  RECORDINGJOBSOURCETRACKSTATECHANGED = 8036,
  RECORDINGLOGMESSAGE = 8037,
  RECORDINGTRACKLOGMESSAGE = 8038,
  SERVERLOGMESSAGE = 8039,
  TRACKADDED = 8040,
  TRACKCHANGED = 8041,
  TRACKDELETEDATA = 8042,
  TRACKREMOVED = 8043,
  TRACKSETDATA = 8044,
  USERADDED = 8045,
  USERCHANGED = 8046,
  USERREMOVED = 8047,
  MAPADDED = 8048,
  MAPCHANGED = 8049,
  MAPREMOVED = 8050,
  MOUNTPOINTADDED = 8051,
  MOUNTPOINTREMOVED = 8052,
  GETCHILDFOLDERS = 8053,
  H265FRAME = 8054,
  NAMECHANGED = 8056,
  LOCATIONCHANGED = 8057,
  FINDMOTIONEND = 8058,
  FINDMOTIONRESULT = 8059,
  FINDMOTIONPROGRESS = 8060,
  FINDOBJECTEND = 8061,
  FINDOBJECTRESULT = 8062,
  FINDOBJECTPROGRESS = 8063,
  RECORDINGTRACKCODECADDED = 8064,
  RECORDINGTRACKCODECREMOVED = 8065,
  MIN = ADDFILE,
  MAX = RECORDINGTRACKCODECREMOVED
};

inline const Message (&EnumValuesMessage())[130] {
  static const Message values[] = {
    Message::ADDFILE,
    Message::ADDGROUP,
    Message::ADDONVIFUSER,
    Message::ADDRECEIVER,
    Message::ADDRECORDING,
    Message::ADDRECORDINGJOB,
    Message::ADDTRACK,
    Message::ADDUSER,
    Message::AUTHENTICATE,
    Message::CHANGEGROUP,
    Message::CHANGEONVIFUSER,
    Message::CHANGERECEIVER,
    Message::CHANGERECORDING,
    Message::CHANGERECORDINGJOB,
    Message::CHANGETRACK,
    Message::CHANGEUSER,
    Message::CONTROLSTREAM,
    Message::CONTROLSTREAMFRAMESTEP,
    Message::CONTROLSTREAMLIVE,
    Message::CONTROLSTREAMPAUSE,
    Message::CREATESTREAM,
    Message::DISCOVERYBROADCAST,
    Message::GETAUTHNETICATIONNONCE,
    Message::GETFILES,
    Message::GETRECEIVERS,
    Message::GETRECORDINGS,
    Message::GETTIME,
    Message::KEEPALIVE,
    Message::MOUNTFILE,
    Message::REMOVEFILE,
    Message::REMOVEGROUP,
    Message::REMOVEONVIFUSER,
    Message::REMOVERECEIVER,
    Message::REMOVERECORDING,
    Message::REMOVERECORDINGJOB,
    Message::REMOVETRACK,
    Message::REMOVEUSER,
    Message::SUBSCRIBE,
    Message::SUBSCRIBEDISCOVERY,
    Message::SUBSCRIBEHARDWARESTATS,
    Message::SUBSCRIBERECORDINGJOBLOG,
    Message::SUBSCRIBERECORDINGJOBSOURCETRACKLOG,
    Message::SUBSCRIBERECORDINGLOG,
    Message::SUBSCRIBERECORDINGTRACKLOG,
    Message::UNMOUNTFILE,
    Message::UNSUBSCRIBEDISCOVERY,
    Message::UNSUBSCRIBEHARDWARESTATS,
    Message::UNSUBSCRIBERECORDINGJOBLOG,
    Message::UNSUBSCRIBERECORDINGJOBSOURCETRACKLOG,
    Message::UNSUBSCRIBERECORDINGLOG,
    Message::UNSUBSCRIBERECORDINGTRACKLOG,
    Message::ADDMAP,
    Message::CHANGEMAP,
    Message::REMOVEMAP,
    Message::REMOVERECORDINGJOBSOURCE,
    Message::DESTROYSTREAM,
    Message::SETNAME,
    Message::SETLOCATION,
    Message::GETSTATE,
    Message::GETRECORDING,
    Message::CREATEFINDMOTION,
    Message::DESTROYFINDMOTION,
    Message::GETSNAPSHOT,
    Message::CREATEFINDOBJECT,
    Message::DESTROYFINDOBJECT,
    Message::CONTROLSTREAMEND,
    Message::DISCOVERYHELLO,
    Message::FILEADDED,
    Message::FILEREMOVED,
    Message::FILEMONITORSTATECHANGED,
    Message::FILESTATECHANGED,
    Message::GOODBYE,
    Message::GROUPADDED,
    Message::GROUPCHANGED,
    Message::GROUPREMOVED,
    Message::H264FRAME,
    Message::HARDWARESTATS,
    Message::JPEGFRAME,
    Message::METADATAFRAME,
    Message::MPEG4FRAME,
    Message::NEWCODECINDEX,
    Message::ONVIFUSERADDED,
    Message::ONVIFUSERCHANGED,
    Message::ONVIFUSERREMOVED,
    Message::RECEIVERADDED,
    Message::RECEIVERREMOVED,
    Message::RECEIVERCHANGED,
    Message::RECORDINGACTIVEJOBCHANGED,
    Message::RECORDINGADDED,
    Message::RECORDINGCHANGED,
    Message::RECORDINGJOBADDED,
    Message::RECORDINGJOBCHANGED,
    Message::RECORDINGJOBREMOVED,
    Message::RECORDINGJOBSOURCEADDED,
    Message::RECORDINGJOBSOURCEREMOVED,
    Message::RECORDINGREMOVED,
    Message::RECORDINGJOBLOGMESSAGE,
    Message::RECORDINGJOBSOURCETRACKACTIVEPARAMETERSCHANGED,
    Message::RECORDINGJOBSOURCETRACKADDED,
    Message::RECORDINGJOBSOURCETRACKLOGMESSAGE,
    Message::RECORDINGJOBSOURCETRACKREMOVED,
    Message::RECORDINGJOBSOURCETRACKSTATECHANGED,
    Message::RECORDINGLOGMESSAGE,
    Message::RECORDINGTRACKLOGMESSAGE,
    Message::SERVERLOGMESSAGE,
    Message::TRACKADDED,
    Message::TRACKCHANGED,
    Message::TRACKDELETEDATA,
    Message::TRACKREMOVED,
    Message::TRACKSETDATA,
    Message::USERADDED,
    Message::USERCHANGED,
    Message::USERREMOVED,
    Message::MAPADDED,
    Message::MAPCHANGED,
    Message::MAPREMOVED,
    Message::MOUNTPOINTADDED,
    Message::MOUNTPOINTREMOVED,
    Message::GETCHILDFOLDERS,
    Message::H265FRAME,
    Message::NAMECHANGED,
    Message::LOCATIONCHANGED,
    Message::FINDMOTIONEND,
    Message::FINDMOTIONRESULT,
    Message::FINDMOTIONPROGRESS,
    Message::FINDOBJECTEND,
    Message::FINDOBJECTRESULT,
    Message::FINDOBJECTPROGRESS,
    Message::RECORDINGTRACKCODECADDED,
    Message::RECORDINGTRACKCODECREMOVED
  };
  return values;
}

inline const char *EnumNameMessage(Message e) {
  switch (e) {
    case Message::ADDFILE: return "ADDFILE";
    case Message::ADDGROUP: return "ADDGROUP";
    case Message::ADDONVIFUSER: return "ADDONVIFUSER";
    case Message::ADDRECEIVER: return "ADDRECEIVER";
    case Message::ADDRECORDING: return "ADDRECORDING";
    case Message::ADDRECORDINGJOB: return "ADDRECORDINGJOB";
    case Message::ADDTRACK: return "ADDTRACK";
    case Message::ADDUSER: return "ADDUSER";
    case Message::AUTHENTICATE: return "AUTHENTICATE";
    case Message::CHANGEGROUP: return "CHANGEGROUP";
    case Message::CHANGEONVIFUSER: return "CHANGEONVIFUSER";
    case Message::CHANGERECEIVER: return "CHANGERECEIVER";
    case Message::CHANGERECORDING: return "CHANGERECORDING";
    case Message::CHANGERECORDINGJOB: return "CHANGERECORDINGJOB";
    case Message::CHANGETRACK: return "CHANGETRACK";
    case Message::CHANGEUSER: return "CHANGEUSER";
    case Message::CONTROLSTREAM: return "CONTROLSTREAM";
    case Message::CONTROLSTREAMFRAMESTEP: return "CONTROLSTREAMFRAMESTEP";
    case Message::CONTROLSTREAMLIVE: return "CONTROLSTREAMLIVE";
    case Message::CONTROLSTREAMPAUSE: return "CONTROLSTREAMPAUSE";
    case Message::CREATESTREAM: return "CREATESTREAM";
    case Message::DISCOVERYBROADCAST: return "DISCOVERYBROADCAST";
    case Message::GETAUTHNETICATIONNONCE: return "GETAUTHNETICATIONNONCE";
    case Message::GETFILES: return "GETFILES";
    case Message::GETRECEIVERS: return "GETRECEIVERS";
    case Message::GETRECORDINGS: return "GETRECORDINGS";
    case Message::GETTIME: return "GETTIME";
    case Message::KEEPALIVE: return "KEEPALIVE";
    case Message::MOUNTFILE: return "MOUNTFILE";
    case Message::REMOVEFILE: return "REMOVEFILE";
    case Message::REMOVEGROUP: return "REMOVEGROUP";
    case Message::REMOVEONVIFUSER: return "REMOVEONVIFUSER";
    case Message::REMOVERECEIVER: return "REMOVERECEIVER";
    case Message::REMOVERECORDING: return "REMOVERECORDING";
    case Message::REMOVERECORDINGJOB: return "REMOVERECORDINGJOB";
    case Message::REMOVETRACK: return "REMOVETRACK";
    case Message::REMOVEUSER: return "REMOVEUSER";
    case Message::SUBSCRIBE: return "SUBSCRIBE";
    case Message::SUBSCRIBEDISCOVERY: return "SUBSCRIBEDISCOVERY";
    case Message::SUBSCRIBEHARDWARESTATS: return "SUBSCRIBEHARDWARESTATS";
    case Message::SUBSCRIBERECORDINGJOBLOG: return "SUBSCRIBERECORDINGJOBLOG";
    case Message::SUBSCRIBERECORDINGJOBSOURCETRACKLOG: return "SUBSCRIBERECORDINGJOBSOURCETRACKLOG";
    case Message::SUBSCRIBERECORDINGLOG: return "SUBSCRIBERECORDINGLOG";
    case Message::SUBSCRIBERECORDINGTRACKLOG: return "SUBSCRIBERECORDINGTRACKLOG";
    case Message::UNMOUNTFILE: return "UNMOUNTFILE";
    case Message::UNSUBSCRIBEDISCOVERY: return "UNSUBSCRIBEDISCOVERY";
    case Message::UNSUBSCRIBEHARDWARESTATS: return "UNSUBSCRIBEHARDWARESTATS";
    case Message::UNSUBSCRIBERECORDINGJOBLOG: return "UNSUBSCRIBERECORDINGJOBLOG";
    case Message::UNSUBSCRIBERECORDINGJOBSOURCETRACKLOG: return "UNSUBSCRIBERECORDINGJOBSOURCETRACKLOG";
    case Message::UNSUBSCRIBERECORDINGLOG: return "UNSUBSCRIBERECORDINGLOG";
    case Message::UNSUBSCRIBERECORDINGTRACKLOG: return "UNSUBSCRIBERECORDINGTRACKLOG";
    case Message::ADDMAP: return "ADDMAP";
    case Message::CHANGEMAP: return "CHANGEMAP";
    case Message::REMOVEMAP: return "REMOVEMAP";
    case Message::REMOVERECORDINGJOBSOURCE: return "REMOVERECORDINGJOBSOURCE";
    case Message::DESTROYSTREAM: return "DESTROYSTREAM";
    case Message::SETNAME: return "SETNAME";
    case Message::SETLOCATION: return "SETLOCATION";
    case Message::GETSTATE: return "GETSTATE";
    case Message::GETRECORDING: return "GETRECORDING";
    case Message::CREATEFINDMOTION: return "CREATEFINDMOTION";
    case Message::DESTROYFINDMOTION: return "DESTROYFINDMOTION";
    case Message::GETSNAPSHOT: return "GETSNAPSHOT";
    case Message::CREATEFINDOBJECT: return "CREATEFINDOBJECT";
    case Message::DESTROYFINDOBJECT: return "DESTROYFINDOBJECT";
    case Message::CONTROLSTREAMEND: return "CONTROLSTREAMEND";
    case Message::DISCOVERYHELLO: return "DISCOVERYHELLO";
    case Message::FILEADDED: return "FILEADDED";
    case Message::FILEREMOVED: return "FILEREMOVED";
    case Message::FILEMONITORSTATECHANGED: return "FILEMONITORSTATECHANGED";
    case Message::FILESTATECHANGED: return "FILESTATECHANGED";
    case Message::GOODBYE: return "GOODBYE";
    case Message::GROUPADDED: return "GROUPADDED";
    case Message::GROUPCHANGED: return "GROUPCHANGED";
    case Message::GROUPREMOVED: return "GROUPREMOVED";
    case Message::H264FRAME: return "H264FRAME";
    case Message::HARDWARESTATS: return "HARDWARESTATS";
    case Message::JPEGFRAME: return "JPEGFRAME";
    case Message::METADATAFRAME: return "METADATAFRAME";
    case Message::MPEG4FRAME: return "MPEG4FRAME";
    case Message::NEWCODECINDEX: return "NEWCODECINDEX";
    case Message::ONVIFUSERADDED: return "ONVIFUSERADDED";
    case Message::ONVIFUSERCHANGED: return "ONVIFUSERCHANGED";
    case Message::ONVIFUSERREMOVED: return "ONVIFUSERREMOVED";
    case Message::RECEIVERADDED: return "RECEIVERADDED";
    case Message::RECEIVERREMOVED: return "RECEIVERREMOVED";
    case Message::RECEIVERCHANGED: return "RECEIVERCHANGED";
    case Message::RECORDINGACTIVEJOBCHANGED: return "RECORDINGACTIVEJOBCHANGED";
    case Message::RECORDINGADDED: return "RECORDINGADDED";
    case Message::RECORDINGCHANGED: return "RECORDINGCHANGED";
    case Message::RECORDINGJOBADDED: return "RECORDINGJOBADDED";
    case Message::RECORDINGJOBCHANGED: return "RECORDINGJOBCHANGED";
    case Message::RECORDINGJOBREMOVED: return "RECORDINGJOBREMOVED";
    case Message::RECORDINGJOBSOURCEADDED: return "RECORDINGJOBSOURCEADDED";
    case Message::RECORDINGJOBSOURCEREMOVED: return "RECORDINGJOBSOURCEREMOVED";
    case Message::RECORDINGREMOVED: return "RECORDINGREMOVED";
    case Message::RECORDINGJOBLOGMESSAGE: return "RECORDINGJOBLOGMESSAGE";
    case Message::RECORDINGJOBSOURCETRACKACTIVEPARAMETERSCHANGED: return "RECORDINGJOBSOURCETRACKACTIVEPARAMETERSCHANGED";
    case Message::RECORDINGJOBSOURCETRACKADDED: return "RECORDINGJOBSOURCETRACKADDED";
    case Message::RECORDINGJOBSOURCETRACKLOGMESSAGE: return "RECORDINGJOBSOURCETRACKLOGMESSAGE";
    case Message::RECORDINGJOBSOURCETRACKREMOVED: return "RECORDINGJOBSOURCETRACKREMOVED";
    case Message::RECORDINGJOBSOURCETRACKSTATECHANGED: return "RECORDINGJOBSOURCETRACKSTATECHANGED";
    case Message::RECORDINGLOGMESSAGE: return "RECORDINGLOGMESSAGE";
    case Message::RECORDINGTRACKLOGMESSAGE: return "RECORDINGTRACKLOGMESSAGE";
    case Message::SERVERLOGMESSAGE: return "SERVERLOGMESSAGE";
    case Message::TRACKADDED: return "TRACKADDED";
    case Message::TRACKCHANGED: return "TRACKCHANGED";
    case Message::TRACKDELETEDATA: return "TRACKDELETEDATA";
    case Message::TRACKREMOVED: return "TRACKREMOVED";
    case Message::TRACKSETDATA: return "TRACKSETDATA";
    case Message::USERADDED: return "USERADDED";
    case Message::USERCHANGED: return "USERCHANGED";
    case Message::USERREMOVED: return "USERREMOVED";
    case Message::MAPADDED: return "MAPADDED";
    case Message::MAPCHANGED: return "MAPCHANGED";
    case Message::MAPREMOVED: return "MAPREMOVED";
    case Message::MOUNTPOINTADDED: return "MOUNTPOINTADDED";
    case Message::MOUNTPOINTREMOVED: return "MOUNTPOINTREMOVED";
    case Message::GETCHILDFOLDERS: return "GETCHILDFOLDERS";
    case Message::H265FRAME: return "H265FRAME";
    case Message::NAMECHANGED: return "NAMECHANGED";
    case Message::LOCATIONCHANGED: return "LOCATIONCHANGED";
    case Message::FINDMOTIONEND: return "FINDMOTIONEND";
    case Message::FINDMOTIONRESULT: return "FINDMOTIONRESULT";
    case Message::FINDMOTIONPROGRESS: return "FINDMOTIONPROGRESS";
    case Message::FINDOBJECTEND: return "FINDOBJECTEND";
    case Message::FINDOBJECTRESULT: return "FINDOBJECTRESULT";
    case Message::FINDOBJECTPROGRESS: return "FINDOBJECTPROGRESS";
    case Message::RECORDINGTRACKCODECADDED: return "RECORDINGTRACKCODECADDED";
    case Message::RECORDINGTRACKCODECREMOVED: return "RECORDINGTRACKCODECREMOVED";
    default: return "";
  }
}

}  // namespace monocle

#endif  // FLATBUFFERS_GENERATED_MESSAGE_MONOCLE_H_
