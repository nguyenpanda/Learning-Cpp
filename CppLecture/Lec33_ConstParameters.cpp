//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"

void printInfo(const string &name, const int &age){
    //name = "";
    //age = 0;
    cout << name << endl;
    cout << age << endl;
}

void Lec33(){
    std::cout << "Lecture 33: CONST PARAMETERS\n" << std::endl;

    // const parameter = parameter that is effectively read-only
    //                                  conveys intent & code is more secure
    //                                  useful for pointers and references

    string name = "Bro";
    int age = 21;

    printInfo(name, age);
}
