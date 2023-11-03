//
// Created by Hà Tường Nguyên on 9/25/23.
//

#include "PointerPackage.h"

void printNumber(int* numberPtr) {
    cout << *numberPtr << endl;
}

void printLetter(char* charPtr) {
    cout << *charPtr << endl;

}
void print(void* ptr, char type) {
    switch (type) {
        case 'i': //handle int*
            cout << (int *) ptr << endl;
            break;
        case 'c': //handle char*
            cout << (int *) ptr << endl;
            break;
        case 'f': //handle float*
            cout << (int *) ptr << endl;
            break;
    }
}

void PointerLec2(){
    std::cout << "\t\t\tPOINTER" << endl << "Lecture 2: VOID POINTER\n" << std::endl;

    /*
     * Void pointer can hold any kind of datatype pointer, for example, float pointer, int pointer,...
     * We can't directly dereference void pointer
     */


    int Num = 10;
    char letter = 'a';

    print(&Num, 'i');

    /*
     * Be careful when using void pointer, because Compiler can't know we make the error or not
     * */

}