#include <iostream>
#include <cstdlib>
#include <cmath>

#include "Comlex_Num.h"

using namespace std;


/*

g++ _1.cpp Complex_num.cpp -o _1
./_1

*/

int main() {
    Complex_Num z1(1, 2), z2(3, 4);
    std::cout << z1 + z2 << z1 - z2 << z1 * z2 << z1 / z2;
    return 0;
}