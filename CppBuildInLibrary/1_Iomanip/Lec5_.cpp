//
// Created by Hà Tường Nguyên on 9/17/23.
//

#include "../BuildInLibraryPackage.h"

void Lec5_Iomanip(){
    std::cout << "\t\t\tI Iomanip" << endl << "Lecture 5: \n" << std::endl;

    double value = 0.00123;
    std::cout << "Default: " << value << std::endl;
    std::cout << "Default: " << scientific << value << std::endl;
    std::cout << std::setiosflags(std::ios::scientific) << "Scientific: " << value << std::endl;

}