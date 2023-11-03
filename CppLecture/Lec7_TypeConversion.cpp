//
// Created by Hà Tường Nguyên on 9/12/23.
//

#include "LecturePackage.h"

void Lec7(){
    std::cout << "Lecture 7: TYPE CONVERSION\n" << std::endl;

    // type conversion = conversion a value of one data type to another
    //                 Implicit = automatic
    //                 Explicit = precede value with new data type (int)

    int x = 3.14;
    cout << "Decimals are truncated: " << x << endl;

    // type conversion = conversion a value of one data type to another
    //                 Implicit = automatic
    //                 Explicit = precede value with new data type (int)

    cout << "Explicit" << endl;

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    std::cout << "Score: " << score << "%";
}