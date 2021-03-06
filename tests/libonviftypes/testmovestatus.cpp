// testmovestatus.cpp
//

///// Includes /////

#include <gtest/gtest.h>
#include <onviftypes/onviftypes.hpp>

#include "testtypes.hpp"

///// Namespaces /////

namespace onvif
{

namespace tests
{

///// Tests /////

TEST(TestMoveStatus, Compare)
{
  pugi::xml_document doc;
  ASSERT_TRUE(doc.load(ToXmlEnum(testing::UnitTest::GetInstance()->current_test_info()->name(), MOVESTATUS_MOVING).c_str()));
  ASSERT_EQ(MOVESTATUS_MOVING, *GetMoveStatus(doc.child(::testing::UnitTest::GetInstance()->current_test_info()->name()).text().get()));
}

}

}
