//
// Created by Hà Tường Nguyên on 9/17/23.
//

#include "../BuildInLibraryPackage.h"

void Lec4_Iomanip(){
    std::cout << "\t\t\tI Iomanip" << endl << "Lecture 4: TEXT ALIGNMENT\n" << std::endl;

    int wSize = 20;

    cout << setfill('-');
    cout << "*" << setw(wSize) << "Column 1" << "*" << setw(wSize) << "Column 2" << "*" << endl;

    cout << setfill(' ');

    for (int i=0; i<7; i++){
        cout
            << "|"
            << setw(wSize) << left << "Hello World" << "|"
            << setw(wSize) << right << "Hello World" << "|"
        << endl;
    }

    cout << setfill('-');
    cout << "*" << setw(wSize+1) << "*" << setw(wSize+1) << "*" << endl;
}