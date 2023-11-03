//
// Created by Hà Tường Nguyên on 9/12/23.
//

#include "LecturePackage.h"

void Lec10(){
    std::cout << "Lecture 10: IF and SWITCH STATEMENT\n" << std::endl;

    cout << "\tIf statement" << endl;
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the site!" << endl;
    }
    else if(age < 0){
        std::cout << "You haven't been born yet!" << endl;
    }
    else{
        std::cout << "You are not old enough to enter!" << endl;
    }

    cout << "\tSwitch statement" << endl << endl;
    char grade;

    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did great!" << endl;
            break;
        case 'B':
            std::cout << "You did good" << endl;
            break;
        case 'C':
            std::cout << "You did okay" << endl;
            break;
        case 'D':
            std::cout << "You did not do good" << endl;
            break;
        case 'F':
            std::cout << "YOU FAILED!" << endl;
            break;
        default:
            std::cout << "Please only enter in a letter grade (A-F)" << endl;
    }
}