//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"

void Lec43(){
    std::cout << "Lecture 43: ENUM\n" << std::endl;

    //    enums: a user-defined data type that consists
    //            of paired named-integer constants.
    //            GREAT if you have a set of potential options

    enum Day {monday, tuesday, wednesday, thursday, friday, saturday, sunday};
    enum Color {red=1, green=2, blue=3};

    Day today = friday;

    switch(today) {
        case sunday:
            std::cout << "It is Sunday!\n";
            break;
        case monday:
            std::cout << "It is Monday!\n";
            break;
        case tuesday:
            std::cout << "It is Tuesday!\n";
            break;
        case wednesday:
            std::cout << "It is Wednesday!\n";
            break;
        case thursday:
            std::cout << "It is Thursday!\n";
            break;
        case friday:
            std::cout << "It is Friday!\n";
            break;
        case saturday:
            std::cout << "It is Saturday!\n";
            break;
    }
}