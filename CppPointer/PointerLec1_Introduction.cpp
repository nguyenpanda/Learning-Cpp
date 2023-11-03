//
// Created by Hà Tường Nguyên on 9/25/23.
//

#include "PointerPackage.h"

void PointerLec1(){
    std::cout << "\t\t\tPOINTER" << endl << "Lecture 1: INTRODUCTION\n" << std::endl;

    cout << "\t\t\tMEMORY ADDRESS" << endl;
    int Num = 10;
    cout << "The value of the variable: " << Num << endl;
    cout << "Use & in front of <var> to access the memory address, &Num: " << &Num << endl;

    cout << "\t\t\tPOINTER" << endl;
    cout << "To contain the memory address, we use * after the data type,\n\t\te.g: int* pNum = &Num;" << endl;
    cout << "The variable containing the memory address is called pointer" << endl;
    int* pNum = &Num;
    cout << "cout << \"pNum\" << endl; -> " << pNum << endl;
    cout << "cout << \"*pNum\" << endl; -> " << *pNum << " Dereference" << endl;

    cout << "\nWe can change the value of the variable using pointer" << endl;
    cout << "*pNum = 22;\n"
            "1cout << Num;" << endl;
    *pNum = 22;
    cout << "Now, the variable Num is: " << Num;
}