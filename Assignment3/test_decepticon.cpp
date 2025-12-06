/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#include <gtest/gtest.h>
#include "Decepticon.h"
#include "Weapon.h"

TEST(DecepticonTest, SetGet)
{
    Weapon w("Laser", 120);
    Decepticon d("Megatron", 15, 200, &w, 90, 70, true);

    EXPECT_EQ(d.getName(), "Megatron");
    EXPECT_EQ(d.getLvl(), 15);
    EXPECT_EQ(d.getFuel(), 200);
    EXPECT_EQ(d.getAgression(), 90);
    EXPECT_EQ(d.getStealth(), 70);
    EXPECT_EQ(d.getIsLeader(), true);

    d.setAgression(70);
    d.setStealth(40);
    d.setIsLeader(true);

    EXPECT_EQ(d.getAgression(), 70);
    EXPECT_EQ(d.getStealth(), 40);
    EXPECT_EQ(d.getIsLeader(), true);
}

TEST(DecepticonTest, FireOverriden)
{
    Weapon w("Laser", 120);
    Decepticon d("Megatron", 15, 200, &w, 90, 70, true);

    testing::internal::CaptureStdout();
    d.fire();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Megatron fires weapon with damage"), std::string::npos);
}

TEST(DecepticonTest, TerrorizeTest)
{
    Weapon w("Laser", 120);
    Decepticon d("Megatron", 15, 200, &w, 90, 70, true);

    testing::internal::CaptureStdout();
    d.terrorize();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Megatron agression level: 90"), std::string::npos);
}

TEST(DecepticonTest, Intimidate)
{
    Weapon w("Laser", 120);
    Decepticon d("Megatron", 15, 200, &w, 90, 70, true);

    testing::internal::CaptureStdout();
    d.intimidate();
    std::string out = testing::internal::GetCapturedStdout();

    EXPECT_NE(out.find("intimidates"), std::string::npos);
}

TEST(DecepticonTest, OperatorOutput)
{
    Weapon w("Laser", 120);
    Decepticon d("Megatron", 15, 200, &w, 90, 70, true);

    std::stringstream ss;
    ss << d;
    std::string out = ss.str();

    EXPECT_NE(out.find("Decepticon"), std::string::npos);
}
