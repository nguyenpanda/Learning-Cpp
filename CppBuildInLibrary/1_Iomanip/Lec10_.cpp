//
// Created by Hà Tường Nguyên on 9/17/23.
//

#include "../BuildInLibraryPackage.h"

void Lec10_Iomanip(){
    std::cout << "\t\t\tI Iomanip" << endl << "Lecture 10: \n" << std::endl;
    double x = 1234.5678;
    cout << "Normal x as double datatype: " << x << endl;

    int wSize1 = 29, wSize2 = 15;
    cout << "Noted that width size of 1st and 2nd column are " << wSize1 << " and " << wSize2 << " respectively!" << endl;

    cout << setfill('-') << "*" << setw(wSize1-1) << "Column 1" << "*" << setw(wSize2+1) << "Column 2*" << setfill(' ') << endl;

    cout << "|" << setw(wSize1) << "x after using scientific|" << setw(wSize2) << scientific << x << "|" << endl;
    cout << "|" << setw(wSize1) << "x after using showpoint|" << setw(wSize2) << showpoint << x << "|" << endl;
    cout << "|" << setw(wSize1) << "x after using noshowpoint|" << setw(wSize2) << noshowpoint << x << "|" << endl;
    cout << "|" << setw(wSize1) << "x after using fixed|" << setw(wSize2) << fixed << x << "|" << endl;
    cout << "|" << setw(wSize1) << "x after using left|" << setw(wSize2) << left << x << "|" << endl << right;
    cout << "|" << setw(wSize1) << "x after using right|" << setw(wSize2) << right << x << "|" << endl;
    cout << "|" << setw(wSize1) << "x after using internal|" << setw(wSize2) << internal << x << "|" << endl;

    cout << "*" << setw(wSize1) << setfill('-') << "*" << setw(wSize2+1) << setfill('-') << "*";

}