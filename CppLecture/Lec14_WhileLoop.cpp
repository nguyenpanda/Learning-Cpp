//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

void Lec14(){
    std::cout << "Lecture 14: WHILE LOOP\n" << std::endl;

    cout << "\tWhile loop" << endl;
    int number;
    cout << "Enter a positive number: ";
    cin >> number;

    while (number < 0){
        cout << "Make sure that U enter a positive number: ";
        cin >> number;
    }

    cout << "\n\tDo while loop" << endl;
    // do while loop = do some block of code first,
    //              THEN repeat again if condition is true
    int num;
    do {
        cout << "Enter a negative integer: ";
        cin >> num;
    } while (num > 0);

    cout << num << endl;
}