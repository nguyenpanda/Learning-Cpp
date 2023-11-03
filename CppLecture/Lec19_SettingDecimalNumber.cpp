//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include <iomanip> // input/output manipulators
#include "LecturePackage.h"

void Lec19(){
    std::cout << "Lecture 19: SETTING DECIMAL NUMBER\n" << std::endl;

    cout << "⭐Use #include <iomanip> to set the number of decimal number" << endl;

    double x = 1;
    double y = 3;
    cout << "1 divide by 3 equal: " << setprecision(3) << x / y << endl;
}