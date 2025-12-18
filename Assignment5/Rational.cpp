/*
* Sokolova Dasha
* st141899@student.spbu.ru
* My project number five.
*/

#include "Rational.h"

void Rational::normalize()
{
    if (den == 0)
        throw std::invalid_argument("Denominator cannot be zero");
    if (den < 0)
    {
        den = -den;
        num = -num;
    }
    int g = std::gcd(num, den);
    num /= g;
    den /= g;
}

Rational::Rational(int n, int d) : num(n), den(d)
{
    normalize();
}

int Rational::numerator() const
{
    return num;
}

int Rational::denominator() const
{
    return den;
}

Rational Rational::operator+(const Rational& other) const
{
    return Rational(num * other.den + other.num * den,
                    den * other.den);
}

Rational Rational::operator*(const Rational& other) const
{
    return Rational(num * other.num, den * other.den);
}

bool Rational::operator==(const Rational& other) const
{
    return num == other.num && den == other.den;
}
