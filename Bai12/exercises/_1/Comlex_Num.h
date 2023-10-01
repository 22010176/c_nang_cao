#ifndef _COMPLEX_NUM_
#define _COMPLEX_NUM_

#include <iostream>

class Complex_Num {
private:
    float a, b;
public:
    Complex_Num(float a, float b);
    Complex_Num operator+ (const Complex_Num& other);
    Complex_Num operator- (const Complex_Num& other);
    Complex_Num operator* (const Complex_Num& other);
    Complex_Num operator/ (const Complex_Num& other);
    friend std::ostream& operator<< (std::ostream& out, const Complex_Num& z);
};
#endif  