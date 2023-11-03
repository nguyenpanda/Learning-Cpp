//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

void Lec11(){
    std::cout << "Lecture 11: TERNARY OPERATOR\n" << std::endl;

    //  ternary operator ?: = replacement to an if/else statement
    //  condition ? expression1 : expression2;

    int grade = 50;
    grade >= 60 ? cout << "You pass!" : cout << "You fail!" << endl;

    int number = 9;
    number % 2 ? cout << "ODD" << endl : cout << "EVEN" << endl;

    bool hungry = true;
    hungry ? cout << "You are hungry" : cout << "You are full" << endl;
}