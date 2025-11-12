/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#include <gtest/gtest.h>
#include "Transformer.h"
#include "Weapon.h"

TEST(TransformerTest, SetGet) {
    Weapon* w = new Weapon("Blaster", 50);
    Weapon* weap = new Weapon("Rifle", 70);
    Transformer t("Optimus", 10, 100, w);

    EXPECT_EQ(t.getName(), "Optimus");
    EXPECT_EQ(t.getLvl(), 10);
    EXPECT_EQ(t.getFuel(), 100);
    EXPECT_EQ(t.getAmmo(), 10);
    EXPECT_EQ(t.getWeapon()->getName(), "Blaster");
    EXPECT_EQ(t.getWeapon()->getDamage(), 50);

    t.setName("RatchetPrime");
    t.setLvl(6);
    t.setFuel(50);
    t.setAmmo(2);
    t.setWeapon(weap);

    EXPECT_EQ(t.getName(), "RatchetPrime");
    EXPECT_EQ(t.getLvl(), 6);
    EXPECT_EQ(t.getFuel(), 50);
    EXPECT_EQ(t.getAmmo(), 2);
    EXPECT_EQ(t.getWeapon()->getName(), "Rifle");

}

TEST(TransformerTest, MoveConsumesFuel) {
    Weapon* w = new Weapon("Gun", 10);
    Transformer t("Bumblebee", 5, 15, w);

    t.move();
    EXPECT_EQ(t.getFuel(), 10);

}

TEST(TransformerTest, FireConsumesAmmo) {
    Weapon* w = new Weapon("Gun", 10);
    Transformer t("Jazz", 5, 20, w);

    t.fire();
    EXPECT_EQ(t.getAmmo(), 9);

}

TEST(TransformerTest, TransformingOutput) {
    Weapon* w = new Weapon("Gun", 10);
    Transformer t("Bumblebee", 5, 15, w);

    testing::internal::CaptureStdout();
    t.transform();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Bumblebee is transforming."), std::string::npos);
}
