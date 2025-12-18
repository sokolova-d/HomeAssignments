/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number five.
*/

#ifndef RATIONAL_H
#define RATIONAL_H

#include <stdexcept>
#include <numeric>

class Rational
{
private:
    int num;
    int den; // den > 0

    void normalize();

public:
    Rational(int n = 0, int d = 1);

    int numerator() const;
    int denominator() const;

    Rational operator+(const Rational& other) const;
    Rational operator*(const Rational& other) const;

    bool operator==(const Rational& other) const;
};

#endif
