//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

void Lec23(){
    std::cout << "Lecture 23: ITERATOR OVER ARRAY\n" << std::endl;

    cout << "\tStandard for loop over array" << endl;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    for (int i = 0; i < sizeof(grades)/sizeof(grades[0]); i++) {
        cout << grades[i] << '\n';
    }

    cout << "\n\tForeach loop" << endl;
    // foreach loop = loop that eases the traversal
    //                over an iterable data set
    string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    for (string student : students) {
        cout << student << endl;
    }
}