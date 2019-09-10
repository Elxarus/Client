// getsystemsupportinformationresponse.cpp
//

///// Includes /////

#include "onvifclient/deviceclient.hpp"

///// Namespaces /////

namespace onvif
{

namespace device
{

///// Methods /////

GetSystemSupportInformationResponse::GetSystemSupportInformationResponse(boost::shared_ptr<DeviceClient> client, const boost::asio::ip::address& localendpoint, int64_t latency, const std::string& message) :
  Response(client, localendpoint, latency, message)
{

}

GetSystemSupportInformationResponse::GetSystemSupportInformationResponse(boost::shared_ptr<DeviceClient> client, const boost::asio::ip::address& localendpoint, int64_t latency, const std::string& message, boost::optional<SupportInformation> supportinformation) :
  Response(client, localendpoint, latency, message),
  supportinformation_(supportinformation)
{

}

GetSystemSupportInformationResponse::~GetSystemSupportInformationResponse()
{

}

}

}
