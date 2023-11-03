//
// Created by Hà Tường Nguyên on 9/12/23.
//

#include "LecturePackage.h"
#include <cmath>

void Lec9(){
    std::cout << "Lecture 9: RELATED MATH FUNCTION\n" << std::endl;
    // https://en.cppreference.com/w/cpp/header/cmath

    double x = 3.99;
    double y = 4;
    double z;

    z = std::max(x, y);
    cout << "Max: " << z << endl;

    z = std::min(x, y);
    cout << "Min: " << z << endl;

    z = pow(2, 4);
    cout << "Power: " << z << endl;

    z = sqrt(9);
    cout << "Square root: " << z << endl;

    z = abs(-3);
    cout << "Absolute: " << z << endl;

    z = round(x);
    cout << "Round: " << z << endl;

    z = ceil(x);
    cout << "Ceiling: " << z << endl;

    z = floor(x);
    cout << "Floor: " << z << endl;
}