//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"


void Lec31(){
    std::cout << "Lecture 31: MEMORY ADDRESSES\n" << std::endl;

    // memory address = a location in memory where data is stored
    //                  a memory address can access with & (address-of operator)

    string name = "Bro";
    int age  = 21;
    bool student = true;

    cout << &name << endl;
    cout << &age << endl;
    cout << &student << endl;
}