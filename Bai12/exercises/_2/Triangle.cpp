#include <iostream>
#include "Triangle.h"

Triangle::Triangle(float a, float b, float c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

bool Triangle::operator!=(const Triangle& other) {
    return  other.a != a || other.b != b || other.c != c;
}

float& Triangle::operator[](int index) {
    switch (index) {
    case 0: return a;
    case 1: return b;
    case 2: return c;
    default: exit(EXIT_FAILURE);
    }
}

void Triangle::show() const { std::cout << this->a << ' ' << this->b << ' ' << this->c << std::endl; }