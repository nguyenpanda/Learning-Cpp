//
// Created by Hà Tường Nguyên on 9/12/23.
//

#include "LecturePackage.h"

void Lec6(){
    std::cout << "Lecture 6: ARITHMETIC OPERATORS\n" << std::endl;

    // arithmetic operators = return the result of a specific
    //                        arithmetic operation ( + - * /)

    int students1 = 20;
    int students2 = 20;
    int students3 = 20;
    int students4 = 20;
    int students5 = 20;

    cout << "Addition" << endl;
    students1 = students1 + 1;
    students1+=1;
    students1++;
    std::cout << students1 << endl;


    cout << "Subtraction" << endl;
    students2 = students2 - 1;
    students2-=1;
    students2--;
    std::cout << students2 << endl;

    cout << "Multiplication" << endl;
    students3 = students3 * 2;
    students3*=2;
    std::cout << students3 << endl;

    cout << "division" << endl;
    students4 = students4 / 2;
    students4/=2;
    std::cout << students4 << endl;

    cout << "Modulus" << endl;
    int remainder = students5 % 3;
    std::cout << remainder << endl;
}