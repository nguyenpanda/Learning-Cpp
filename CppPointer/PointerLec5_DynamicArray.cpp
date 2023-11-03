//
// Created by Hà Tường Nguyên on 9/25/23.
//

#include "PointerPackage.h"

void PointerLec5(){
    std::cout << "\t\t\tPOINTER" << endl << "Lecture 5: DYNAMIC ARRAY\n" << std::endl;

    /*
     * To allocate (new): get dynamic memory
     * To deallocate (delete): free dynamic memory
     * */

    int arrSize;
    cout << "Enter the size of an array: ";
    cin >> arrSize;

    // This command means that an int pointer point to an int array when runtime
    int* myArray = new int[arrSize];

    cout << "The address of the <myArray>: " << &myArray << endl;
    for (int i = 0; i < arrSize; ++i) {
        cout << &myArray[i] << " : Array[" << i << "] = ";
        cin >> myArray[i];
    }
    cout << "The address of the <myArray>: " << &myArray << endl;

    for (int i = 0; i < arrSize; ++i) {
        cout << myArray[i] << " ";
    }

    delete[] myArray; // Delete myArray pointing to
    myArray = nullptr; // Delete the pointer
}