// g711decoptions.cpp
//

///// Includes /////

#include "onviftypes/onviftypes.hpp"

#include <pugixml.hpp>

///// Namespaces /////

namespace onvif
{

///// Classes /////

G711DecOptions::G711DecOptions()
{

}

G711DecOptions::G711DecOptions(const boost::optional<IntList>& bitrate, const boost::optional<IntList>& sampleraterange) :
  bitrate_(bitrate),
  sampleraterange_(sampleraterange)
{

}

G711DecOptions::G711DecOptions(const pugi::xml_node& node)
{
  for (const auto& element : node)
  {
    const std::string name = TrimNamespace(element.name());
    if (name == "Bitrate")
    {
      bitrate_ = IntList(element);

    }
    else if (name == "SampleRateRange")
    {
      sampleraterange_ = IntList(element);

    }
  }
}

std::string G711DecOptions::ToXml(const std::string& name) const
{
  return ("<"+name+">" + ToXmlClass("tt:Bitrate", sampleraterange_) + ToXmlClass("tt:SampleRateRange", sampleraterange_) + "</"+name+">");
}

bool G711DecOptions::operator==(const G711DecOptions& rhs) const
{
  return ((sampleraterange_ == rhs.sampleraterange_) && (sampleraterange_ == rhs.sampleraterange_));
}

}
