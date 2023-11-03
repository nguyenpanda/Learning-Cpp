//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"

void swap(string &x, string &y){
    string box;
    box = x;
    x = y;
    y = box;
}

void Lec32(){
    std::cout << "Lecture 32: Pass by VALUE vs Pass by REFERENCE\n" << std::endl;

    cout << "When we pass a variable into a function in C++,\n"
            "C++ creates another value with the same value but a different memory address.\n" << endl;

    string x = "Kool-Aid";
    string y = "Water";
    cout << "---" << endl;
    cout << "Initial X: " << x << endl;
    cout << "Initial Y: " << y << endl;

    swap(x, y);

    cout << "After Swap X: " << x << endl;
    cout << "After Swap Y: " << y << endl;
}
