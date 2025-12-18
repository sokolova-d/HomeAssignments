/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#include <gtest/gtest.h>
#include <sstream>
#include "Autobot.h"
#include "Weapon.h"

TEST(AutobotTest, SetGet)
{
    Weapon w("Blaster", 80);
    Autobot a("Bee", 7, 120, &w, "Car", 50, 200);

    EXPECT_EQ(a.getName(), "Bee");
    EXPECT_EQ(a.getLvl(), 7);
    EXPECT_EQ(a.getFuel(), 120);
    EXPECT_EQ(a.getVehicle(), "Car");
    EXPECT_EQ(a.getArmor(), 50);
    EXPECT_EQ(a.getSpeed(), 200);

    a.setVehicle("Jeep");
    a.setArmor(42);
    a.setSpeed(250);

    EXPECT_EQ(a.getVehicle(), "Jeep");
    EXPECT_EQ(a.getArmor(), 42);
    EXPECT_EQ(a.getSpeed(), 250);
}

TEST(AutobotTest, TransformOverriden)
{
    Weapon w("Blaster", 80);
    Autobot a("Bee", 7, 120, &w, "Car", 50, 200);

    testing::internal::CaptureStdout();
    a.transform();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Bee transforms into Car."), std::string::npos);
}

TEST(AutobotTest, RepairTest)
{
    Weapon w("Blaster", 80);
    Autobot a("Bee", 7, 120, &w, "Car", 50, 200);

    testing::internal::CaptureStdout();
    a.repair();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Bee is repairing allies."), std::string::npos);
}

TEST(AutobotTest, DefendMethod)
{
    Weapon w("Blaster", 80);
    Autobot a("Bee", 7, 120, &w, "Car", 50, 200);

    testing::internal::CaptureStdout();
    a.defend();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("defends"), std::string::npos);
}

TEST(AutobotTest, OperatorOutput)
{
    Weapon w("Blaster", 80);
    Autobot a("Bee", 7, 120, &w, "Car", 50, 200);

    std::stringstream ss;
    ss << a;
    std::string out = ss.str();

    EXPECT_NE(out.find("Autobot"), std::string::npos);
}

