//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

void Lec13(){
    std::cout << "Lecture 13: STRING METHOD\n" << std::endl;

    // https://cplusplus.com/reference/string/string/
    cout << "https://cplusplus.com/reference/string/string/" << endl;

    string name = "Ha Tuong Nguyennnnnnn";

    cout << "Length of string - .length(): ";
    cout << name.length() << endl;

    cout << "Size of string - .size(): ";
    cout << name.size() << endl; // For container data structure

    cout << "Checking empty string - .empty(): ";
    cout << name.empty() << endl;

    cout << "Finding character at index - .at(<index>): ";
    cout << name.at(4) << endl;

    cout << "Sub-string - .at(<index>): ";
    cout << name.substr(0, 5) << endl;

    cout << "Find a matching character - .find(<str>): ";
    cout << name.find(' ') << '\n' << endl;

    cout << "Insert string - .insert(<index>, <str>): ";
    cout << name.insert(0, "@") << endl;

    cout << "Insert at front and back of string: ";
    name.back() = '!';
    name.front() = '@';
    cout << name << endl;

    cout << "Appending string - .append(<str>): ";
    cout << name.append("@gmail.com") << endl;

    cout << "Erasing string - .erase(<index>, <length>): ";
    cout << name.erase(0, 1) << '\n' << endl;

    name.clear();
    cout << "Clear string - .clear(): ";
    cout << name << endl;
}