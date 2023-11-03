//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

void Lec12(){
    std::cout << "Lecture 12: LOGICAL OPERATORS\n" << std::endl;

    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // !  = reverses the logical state of its operand

    int temp;
    bool sunny = false;

    cout << "Enter the temperature: ";
    cin >> temp;

    if(temp > 0 && temp < 30){cout << "The temperature is good!\n";}
    else{cout << "The temperature is bad!\n";}

    if(temp <= 0  || temp >= 30){cout << "The temperature is bad!\n";}
    else{cout << "The temperature is good!\n";}

    if(!sunny){cout << "It is cloudy outside!";}
    else{cout << "It is sunny outside!";}
}