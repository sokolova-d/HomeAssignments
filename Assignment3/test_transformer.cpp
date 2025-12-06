/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number three.
*/

#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Maximal.h"
#include "Weapon.h"

TEST(TransformerTest, SetGet)
{
    Weapon* w = new Weapon("Blaster", 50);
    Weapon* weap = new Weapon("Rifle", 70);
    Autobot t("Optimus", 10, 100, w, "Truck", 80, 60);

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

TEST(TransformerTest, MoveConsumesFuel)
{
    Weapon* w = new Weapon("Gun", 10);
    Autobot t("Bumblebee", 5, 15, w, "Truck", 80, 60);

    t.move();
    EXPECT_EQ(t.getFuel(), 10);

}

TEST(TransformerTest, FireConsumesAmmo)
{
    Weapon* w = new Weapon("Gun", 10);
    Autobot t("Jazz", 5, 20, w, "Truck", 80, 60);

    t.fire();
    EXPECT_EQ(t.getAmmo(), 9);

}

TEST(TransformerTest, TransformingOutput)
{
    Weapon* w = new Weapon("Gun", 10);
    Transformer* t = new Autobot("Bumblebee", 5, 15, w, "Truck", 80, 60);

    testing::internal::CaptureStdout();
    t->transform();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Bumblebee transforms"), std::string::npos);

    delete t;
}

TEST(TransformerTest, Vector)
{
    Weapon* w = new Weapon("Gun", 10);

    std::vector<Transformer*> vec =
    {
        new Autobot("A1", 1, 10, w, "Car", 5, 50),
        new Autobot("A2", 2, 20, w, "Truck", 6, 60),
        new Autobot("A3", 3, 30, w, "Bike", 7, 70),
        new Decepticon("D1", 1, 10, w, 10, 20, false),
        new Decepticon("D2", 2, 20, w, 20, 30, true),
        new Decepticon("D3", 3, 30, w, 30, 40, false),
        new Maximal("M1", 1, 10, w, true, 10, 20),
        new Maximal("M2", 2, 20, w, false, 20, 30),
        new Maximal("M3", 3, 30, w, true, 30, 40),
    };

    for (auto* t : vec)
    {
        testing::internal::CaptureStdout();
        t->transform();
        std::string out = testing::internal::GetCapturedStdout();
        EXPECT_FALSE(out.empty());
    }

    for (auto* t : vec) delete t;
}