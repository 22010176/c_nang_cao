#include <iostream>
#include "Triangle.h"

/*

g++ _2.cpp Triangle.cpp -o _2
./_2

*/

int main() {
    Triangle t1(1, 2, 3), t2(4, 1, 1);

    if (t1 != t2) std::cout << "Different" << std::endl;
    else std::cout << "Same" << std::endl;

    t1[0] = 4;
    t1[1] = 5;
    t1[2] = 6;

    t1.show();
}