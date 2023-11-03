//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include <iomanip> // set width
#include "LecturePackage.h"

void Lec15(){
    std::cout << "Lecture 15: FOR LOOP\n" << std::endl;

    int sum = 0;
    for (int i = 0; i <= 100; i++) {
        sum += i;
        cout << "Sum of first " << i << " integers: " << sum << endl;
    }
    cout << "Result: " << sum << endl;

    cout << "\nNested loops" << endl;
    for (int i = 0; i <= 9; i++) {
        for (int k = 0; k <= 9; k++) {
            cout << k << setw(3);
        }
        cout << '\n';
    }
}