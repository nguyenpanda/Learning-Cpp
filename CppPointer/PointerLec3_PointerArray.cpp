//
// Created by Hà Tường Nguyên on 9/25/23.
//

#include "PointerPackage.h"

void PointerLec3(){
    std::cout << "\t\t\tPOINTER" << endl << "Lecture 3: ARRAY WITH POINTER\n" << std::endl;

    int LuckyNumber[5] = {1, 2, 3, 4, 5};
    cout << "When we cout an array, we receipt the address of the first element: " << LuckyNumber << endl;
    cout << "Address of the first element: " << &LuckyNumber[0] << endl;
    cout << endl;
    cout << "Value of the second element LuckyNumber[1]: " << LuckyNumber[1] << endl;
    cout << "Value of the second element *(LuckyNumber + 1): " << *(LuckyNumber + 1) << endl;
    cout << "Address of the second element LuckyNumber[0] + 1: " << LuckyNumber + 1 << endl;
    /*
     * It means that LuckyNumber is an address, LuckyNumber[1] is the address of LuckyNumber[0] + 1
     * Another word, LuckyNumber[1] = (address of LuckyNumber[0]) + 1
     * */
    cout << endl;

    int numList[5];

    for (int i = 0; i < 5; ++i) {
        cout << "Enter a number: ";
        cin >> numList[i];
    }

    for (int i = 0; i < 5; ++i) {
        cout << *(numList + i) << " ";
    }
}