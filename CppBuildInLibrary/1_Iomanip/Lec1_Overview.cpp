//
// Created by Hà Tường Nguyên on 9/17/23.
//

#include "../BuildInLibraryPackage.h"

/**
 *
 * https://www.youtube.com/watch?v=co_imDB70go&ab_channel=LeeFalin
 * https://www.youtube.com/watch?v=JAEKyNfqm0A&ab_channel=Shmeowlex
 *
 *
 */
void Lec1_Iomanip(){
    std::cout << "\t\t\tI Iomanip" << endl << "Lecture 1: IOMANIP OVERVIEW\n" << std::endl;

    cout << "https://www.youtube.com/watch?v=Bozcjme5Stg&ab_channel=ZebraCode" << endl;
    cout << "https://cplusplus.com/reference/iomanip/" << endl;

    cout << "- Iomanip stand for Input/Output manipulator." << endl;
    cout << "- It is used to format data on the screen." << endl;
    cout << "- It needs to be included as a header file." << endl;
    cout << "- All functions in the iomanip header file are in the std namespace (use std:: prefix for functions or simply add the using namespace std;)" << endl;
    cout << "- The iomanip function applies to the data that immediately follows it." << endl;
    cout << "- More iomanip functions are available in later versions of C++ (eg C++11)" << "\n" << endl;

    cout << "Function for out spacing, formatting, text aligning, and data presenting:" << endl;
    cout << "+ std::setw(<int>)" << endl;
    cout << "+ std::setfill(<char>)" << endl;
    cout << "+ std::left" << endl;
    cout << "+ std::fixed" << endl;
    cout << "+ std::right" << endl;
    cout << "+ std::setprecision(<int>)" << endl;
    cout << "+ std::setbase()" << endl;
    cout << "+ std::setioflags()" << endl;
    cout << "+ std::resetioflags()" << "\n" << endl;

    cout << "For C++ 11 and later: " << endl;
    cout << "+ std::get_time()" << endl;
    cout << "+ std::put_time()" << endl;
    cout << "+ std::get_money()" << endl;
    cout << "+ std::put_money()" << endl;
}