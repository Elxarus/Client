// whitebalance20.cpp
//

///// Includes /////

#include "onviftypes/onviftypes.hpp"

///// Namespaces /////

namespace onvif
{

///// Classes /////

WhiteBalance20::WhiteBalance20()
{

}

WhiteBalance20::WhiteBalance20(const boost::optional<WHITEBALANCEMODE>& mode, const boost::optional<float>& crgain, const boost::optional<float>& cbgain) :
  mode_(mode),
  crgain_(crgain),
  cbgain_(cbgain)
{

}

WhiteBalance20::WhiteBalance20(const pugi::xml_node& node)
{
  for (const auto& element : node)
  {
    const std::string name = TrimNamespace(element.name());
    if (name == "Mode")
    {
      mode_ = GetWhiteBalanceMode(element.text().get());

    }
    else if (name == "CrGain")
    {
      crgain_ = element.text().as_float();

    }
    else if (name == "CbGain")
    {
      cbgain_ = element.text().as_float();

    }
  }
}

std::string WhiteBalance20::ToXml(const std::string& name) const
{
  return ("<"+name+">" + onvif::ToXmlEnum("tt:Mode", mode_) + onvif::ToXml("tt:CrGain", crgain_) + onvif::ToXml("tt:CbGain", cbgain_) + "</"+name+">");
}

bool WhiteBalance20::operator==(const WhiteBalance20& rhs) const
{
  return ((mode_ == rhs.mode_) && (crgain_ == rhs.crgain_) && (cbgain_ == rhs.cbgain_));
}

}
