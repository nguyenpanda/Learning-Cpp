//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

void Lec22(){
    std::cout << "Lecture 22: SIZEOF OPERATOR\n" << std::endl;

    // sizeof() = determines the size in bytes of a: 
    //                   variable, data type, class, objects, etc.

    string name = "Bro Code";
    cout << "String size: " <<  sizeof(name) << " bytes" << endl;

    double gpa = 2.5234;
    cout << "Double size: " <<  sizeof(gpa) << " bytes" << endl;

    float num = 2.5234;
    cout << "Float size: " <<  sizeof(num) << " bytes" << endl;

    char grade = 'F';
    cout << "Character size: " <<  sizeof(grade) << " bytes" << endl;

    bool student = true;
    cout << "Boolean size: " <<  sizeof(student) << " bytes" << endl;

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    cout << "Character array size: " <<  sizeof(grades) << " bytes" << endl;
    cout << sizeof(grades)/sizeof(char) << " elements" << endl;

    string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    cout << "String array size: " <<  sizeof(students) << " bytes" << endl;
    cout << sizeof(students)/sizeof(string) << " elements" << endl;
}