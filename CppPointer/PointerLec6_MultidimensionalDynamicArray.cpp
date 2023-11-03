//
// Created by Hà Tường Nguyên on 9/25/23.
//

#include "PointerPackage.h"

void PointerLec6(){
    std::cout << "\t\t\tPOINTER" << endl << "Lecture 6: MULTIDIMENSIONAL DYNAMIC ARRAY\n" << std::endl;

    int row, column;
    cout << "Enter number of row: ";
    cin >> row;
    cout << "Enter number of column: ";
    cin >> column;

    // Create dynamic array containing array
    int** matrix = new int*[row];

    // Create dynamic array containing integer
    for (int i = 0; i < row; ++i) {
        matrix[i] = new int[column];
    }

    // Assign value to multi-dimensional array
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << "matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Cout value of multidimensional array
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Delete dynamic array containing integer
    for (int i = 0; i < row; ++i) {
        delete[] matrix[i];
    }

    // Delete dynamic array containing array
    delete[] matrix;
    matrix = nullptr;
}