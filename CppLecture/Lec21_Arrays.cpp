//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

void Lec21(){
    std::cout << "Lecture 21: ARRAYS\n" << std::endl;

    // array = a data structure that can hold multiple values
    //         are accessed by an index number
    //         "kind of like a variable that holds multiple values"

    string cars[3] = {"Corvette", "Mustang", "Camry"};

    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;

    cout << "Change an element in array: ";
    cars[0] = "BMW";
    cout << cars[0] << endl;
}