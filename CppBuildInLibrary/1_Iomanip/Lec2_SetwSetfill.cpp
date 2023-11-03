//
// Created by Hà Tường Nguyên on 9/17/23.
//

#include "../BuildInLibraryPackage.h"

void Lec2_Iomanip(){
    std::cout << "\t\t\tI Iomanip" << endl << "Lecture 2: SET WIDTH OF FIELD\n" << std::endl;

    string name = "HaTuongNguyen";

    cout << "+ Normal cout:" << endl;
    cout << name << endl;

    cout << "+ Have setw(<int>) function:" << endl;
    cout << setw(20) << name << endl;

    cout << "+ Have setw(<int>) and setfill(<char>) function:" << endl;
    cout << setfill('#') << setw(20) << name << endl;
}