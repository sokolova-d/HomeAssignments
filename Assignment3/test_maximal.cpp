/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#include <gtest/gtest.h>
#include "Maximal.h"
#include "Weapon.h"

TEST(MaximalTest, SetGet) {
    Weapon w("Claws", 60);
    Maximal m("Cheetor", 9, 130, &w, true, 85, 70);

    EXPECT_EQ(m.getName(), "Cheetor");
    EXPECT_EQ(m.getLvl(), 9);
    EXPECT_EQ(m.getFuel(), 130);
    EXPECT_EQ(m.getisCamouflaged(), true);
    EXPECT_EQ(m.getAgility(), 85);
    EXPECT_EQ(m.getEndurance(), 70);

    m.setisCamouflaged(true);
    m.setAgility(100);
    m.setEndurance(80);

    EXPECT_EQ(m.getisCamouflaged(), true);
    EXPECT_EQ(m.getAgility(), 100);
    EXPECT_EQ(m.getEndurance(), 80);
}

TEST(MaximalTest, StealthOutput) {
    Weapon w("Claws", 60);
    Maximal m("Cheetor", 9, 130, &w, true, 85, 70);

    testing::internal::CaptureStdout();
    m.actStealth();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Cheetor activates stealth mode"), std::string::npos);
}

TEST(MaximalTest, OverrideMove) {
    Weapon w("Claws", 60);
    Maximal m("Cheetor", 9, 130, &w, true, 85, 70);

    testing::internal::CaptureStdout();
    m.move();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Cheetor moves forward"), std::string::npos);
}
