/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number five.
*/

#include <gtest/gtest.h>
#include "Rational.h"

TEST(RationalTest, InvariantReduction)
{
    Rational r(2, 4);
    EXPECT_EQ(r.numerator(), 1);
    EXPECT_EQ(r.denominator(), 2);
}

TEST(RationalTest, Addition)
{
    Rational a(1, 2);
    Rational b(1, 3);
    Rational c = a + b;
    EXPECT_TRUE(c == Rational(5, 6));
}

TEST(RationalTest, Multiplication)
{
    Rational a(2, 3);
    Rational b(3, 4);
    Rational c = a * b;
    EXPECT_TRUE(c == Rational(1, 2));
}
