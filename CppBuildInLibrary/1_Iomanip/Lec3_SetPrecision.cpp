//
// Created by Hà Tường Nguyên on 9/17/23.
//

#include "../BuildInLibraryPackage.h"

void Lec3_Iomanip(){
    std::cout << "\t\t\tI Iomanip" << endl << "Lecture 3: PRECISION SETTING\n" << std::endl;

    double cost = 3.662367;
    cout << " - The double is: 33.662367" << endl;
    cout << " - Normal cout: " << cost << "\n" << endl;

    cout << "+ setprecision(<int>) only:" << endl;
    for (int i=3; i<9; i++){
        cout << " - std::setprecision(" << i << "): " << std::setprecision(i) << cost <<endl;
    }

    cout << endl;

    cout << "+ std::setprecision(<int>) and std::fixed:" << endl;
    for (int i=3; i<9; i++){
        cout << " - std::setprecision(" << i << "): " << std::fixed << std::setprecision(i) << cost <<endl;
    }
}