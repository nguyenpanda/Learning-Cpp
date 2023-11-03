//
// Created by Hà Tường Nguyên on 9/12/23.
//

#include "LecturePackage.h"

void Lec3(){
    std::cout << "Lecture 3: CONSTANT IN C++\n" << std::endl;

    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    const double PI = 3.14159;
    //PI = 420.69; This will cause an error
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";
}