//
// Created by Hà Tường Nguyên on 9/12/23.
//

#include "LecturePackage.h"

void Lec8(){
    std::cout << "Lecture 8: USER INPUT\n" << std::endl;

    int age;
    cout << "What's your age?: ";
    cin >> age;
    cout << age << endl;

    string name;
    cout << "Multi-line comment" << endl;
    cout << "What's your full name?: ";
    getline(cin >> ws, name); // ws: white space: prevent /n from the cin above
    cout << name << endl;
}