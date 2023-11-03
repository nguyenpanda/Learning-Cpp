//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"

void Lec36(){
    std::cout << "Lecture 36: NULL POINTER\n" << std::endl;

    /* Null value = a special value that means something has no value.
     *            When a pointer is holding a null value,
     *            that pointer is not pointing at anything (null pointer)
     *
     * nullptr = keyword represents a null pointer literal
     *
     * Nullptrs are helpful when determining if an address
     * was successfully assigned to a pointer
     *
     * When using pointers, be careful that your code isn't
     * dereferencing nullptr or pointing to free memory
     * this will cause undefined behavior
     */


    int *pointer = nullptr;
    cout << "This is the nullptr pointer: " << pointer << endl;

    int x = 123;
    pointer = &x;

    if(pointer == nullptr){
        cout << "address was not assigned!\n";
    }
    else{
        cout << "address was assigned!\n";
        cout << *pointer;
    }
}
