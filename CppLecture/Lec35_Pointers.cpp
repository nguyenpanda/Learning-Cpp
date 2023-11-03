//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"

void Lec35(){
    std::cout << "Lecture 35: POINTERS\n" << std::endl;

    // pointers = variable that stores a memory address of another variable
    //                    sometimes it's easier to work with an address

    // & address-of operator
    // * dereference operator

    string name = "Bro";
    int age = 21;
    string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;

    cout << "Address: " << pName << "\n\tValue: " << *pName << endl; // Bro
    cout << "Address: " << pAge << "\n\tValue: " << *pAge << endl; // 21
    cout << "Address: " << pFreePizzas << "\n\tValue: " << *pFreePizzas << endl; // pizza1
}
