// testanalyticsengineconfiguration.cpp
//

///// Includes /////

#include <onviftypes/onviftypes.hpp>
#include <gtest/gtest.h>

#include "testtypes.hpp"

///// Namespaces /////

namespace onvif
{

namespace tests
{

///// Tests /////

TEST(TestAnalyticsEngineConfiguration, Compare)
{
  //TODO Compare(AnalyticsEngineConfiguration({ Config(ItemList({ SimpleItem(std::string("name1"), std::string("value1")), SimpleItem(std::string("name2"), std::string("value2")) }, { ElementItem({ Element("name", { { "a", "b" }, { "c", "d" } }, "text", { Element("name2", { { "e", "f" }, { "g", "h" } }, "text2", { Element("name3", { { "i", "j" }, { "k", "l" } }, "text3", {}) }) }) }), ElementItem({ Element("name", { { "z", "y" }, { "c", "d" } }, "text", { Element("name5", { { "e", "f" }, { "g", "h" } }, "text5", { Element("name6", { { "i", "j" }, { "k", "l" } }, "text6", {}) }) }) }) }), std::string("name"), std::string("type")) }));
}

}

}
