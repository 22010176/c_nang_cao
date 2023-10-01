#include <cmath>
#include <cstdlib>

#include "Comlex_Num.h"

Complex_Num::Complex_Num(float a = 0, float b = 0) {
    this->a = a;
    this->b = b;
}

Complex_Num Complex_Num::operator+(const Complex_Num& other) {
    float _a = a + other.a;
    float _b = b + other.b;

    return Complex_Num(_a, _b);
}

Complex_Num Complex_Num::operator-(const Complex_Num& other) {
    float _a = a - other.a;
    float _b = b - other.b;

    return Complex_Num(_a, _b);
}

Complex_Num Complex_Num::operator*(const Complex_Num& other) {
    float _a = a * other.a - b * other.b;
    float _b = b * other.a + a * other.b;

    return Complex_Num(_a, _b);
}

Complex_Num Complex_Num::operator/(const Complex_Num& other) {
    float _c = pow(other.a, 2) + pow(other.b, 2);

    float _a = a * other.a + b * other.b;
    float _b = b * other.a - a * other.b;

    return Complex_Num(_a / _c, _b / _c);
}
std::ostream& operator<< (std::ostream& out, const Complex_Num& z) {
    out << std::showpos << "z = " << z.a << z.b << 'j' << std::endl;
    return out;
}