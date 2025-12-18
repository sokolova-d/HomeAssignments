/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number five.
*/

#include <gtest/gtest.h>
#include "Matrix.h"
#include "Rational.h"

//testing int type
TEST(MatrixIntTest, Addition)
{
    Matrix<int> A(2, 2);
    Matrix<int> B(2, 2);
    A(0,0)=1;
    A(0,1)=2;
    A(1,0)=3;
    A(1,1)=4;
    B(0,0)=5;
    B(0,1)=6;
    B(1,0)=7;
    B(1,1)=8;
    Matrix<int> C = A + B;
    EXPECT_EQ(C(0,0), 6);
    EXPECT_EQ(C(1,1), 12);
}

TEST(MatrixIntTest, ScalarMultiplication)
{
    Matrix<int> A(2,2);
    A(0,0)=1;
    A(0,1)=2;
    A(1,0)=3;
    A(1,1)=4;
    Matrix<int> B = A * 3;
    EXPECT_EQ(B(1,0), 9);
}

TEST(MatrixIntTest, MatrixMultiplication)
{
    Matrix<int> A(2,3);
    Matrix<int> B(3,2);

    int v = 1;
    for (size_t i=0; i<2; i++)
        for (size_t j=0; j<3; j++)
            A(i,j)=v++;

    B(0,0)=1;
    B(0,1)=0;
    B(1,0)=0;
    B(1,1)=1;
    B(2,0)=1;
    B(2,1)=1;

    Matrix<int> C = A * B;
    EXPECT_EQ(C(0,0), A(0,0)+A(0,2));
}

TEST(MatrixIntTest, Transpose)
{
    Matrix<int> A(2,3);
    A(1,2)=7;
    Matrix<int> T = A.transpose();
    EXPECT_EQ(T(2,1), 7);
}

//testing double type
TEST(MatrixDoubleTest, Addition)
{
    Matrix<double> A(1,2);
    Matrix<double> B(1,2);
    A(0,0)=1.5;
    A(0,1)=2.5;
    B(0,0)=0.5;
    B(0,1)=1.5;
    Matrix<double> C = A + B;
    EXPECT_DOUBLE_EQ(C(0,1), 4.0);
}

TEST(MatrixDoubleTest, ScalarMultiplication)
{
    Matrix<double> A(1,2);
    A(0,0)=2.0;
    A(0,1)=-1.5;
    Matrix<double> B = A * 2.0;
    EXPECT_DOUBLE_EQ(B(0,1), -3.0);
}

TEST(MatrixDoubleTest, MatrixMultiplication)
{
    Matrix<double> A(1,2);
    Matrix<double> B(2,1);
    A(0,0)=1.0;
    A(0,1)=2.0;
    B(0,0)=3.0;
    B(1,0)=4.0;
    Matrix<double> C = A * B;
    EXPECT_DOUBLE_EQ(C(0,0), 11.0);
}

TEST(MatrixDoubleTest, Transpose)
{
    Matrix<double> A(2,1);
    A(1,0)=3.14;
    Matrix<double> T = A.transpose();
    EXPECT_DOUBLE_EQ(T(0,1), 3.14);
}

//testing rational type
TEST(MatrixRationalTest, Addition)
{
    Matrix<Rational> A(1,2);
    Matrix<Rational> B(1,2);
    A(0,0)=Rational(1,2);
    A(0,1)=Rational(1,3);
    B(0,0)=Rational(1,2);
    B(0,1)=Rational(2,3);
    Matrix<Rational> C = A + B;
    EXPECT_TRUE(C(0,0) == Rational(1,1));
    EXPECT_TRUE(C(0,1) == Rational(1,1));
}

TEST(MatrixRationalTest, ScalarMultiplication)
{
    Matrix<Rational> A(1,1);
    A(0,0)=Rational(1,2);
    Matrix<Rational> B = A * Rational(2,3);
    EXPECT_TRUE(B(0,0) == Rational(1,3));
}

TEST(MatrixRationalTest, MatrixMultiplication)
{
    Matrix<Rational> A(1,2);
    Matrix<Rational> B(2,1);
    A(0,0)=Rational(1,2);
    A(0,1)=Rational(1,2);
    B(0,0)=Rational(2,1);
    B(1,0)=Rational(2,1);
    Matrix<Rational> C = A * B;
    EXPECT_TRUE(C(0,0) == Rational(2,1));
}

TEST(MatrixRationalTest, Transpose)
{
    Matrix<Rational> A(2,1);
    A(1,0)=Rational(2,4);
    Matrix<Rational> T = A.transpose();
    EXPECT_TRUE(T(0,1) == Rational(1,2));
}
