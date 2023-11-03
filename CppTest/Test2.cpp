//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "../main.h"

void Test2() {
    cout << "Test 2: \n" << endl;
    char *pGrades = nullptr;
    int size;

    cout << "How many grades to enter in?: ";
    cin >> size;

    pGrades = new char[size];
    cout << "cout << pGrades << endl; -> " << pGrades << endl;
    cout << "cout << &pGrades << endl; -> " << &pGrades << endl;
    cout << "cout << *pGrades << endl; -> " << *pGrades << endl;
    for(int i = 0; i < size; i++){
        cout << "Enter grade #" << i + 1 << ": ";
        cin >> pGrades[i];
    }
    cout << "cout << pGrades << endl; -> " << pGrades << endl;
    cout << "cout << &pGrades << endl; -> " << &pGrades << endl;
    cout << "cout << *pGrades << endl; -> " << *pGrades << endl;
    for(int i = 0; i < size; i++){
        cout << pGrades[i] << " ";
    }

    delete[] pGrades; // [] to delete array
    //    delete pGrades;
}