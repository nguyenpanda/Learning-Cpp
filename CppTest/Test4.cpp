//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "../main.h"

int digitCount(int num){
    int maxLen = 0;
    if (num < 0) {
        num = -num;
        maxLen = 1;
    }

    while (num >= 1) {
        num /= 10;
        maxLen++;
    }
    return maxLen;
}
auto maxElement(const int row, const int column, int** matrix){
    int max = matrix[0][0];
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            if (max < matrix[i][j])
                max = matrix[i][j];
        }
    }
    return max;
}
auto minElement(const int row, const int column, int** matrix){
    int min = matrix[0][0];
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            if (min > matrix[i][j])
                min = matrix[i][j];
        }
    }
    return min;
}
void createMatrix(const int row, const int column, int** matrix){
    for (int i = 0; i < row; ++i) {
        matrix[i] = new int[column];
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
//            cout << "matrix[" << i << "][" << j << "]: " << (j+1) + column*i << endl;
            matrix[i][j] = (j+1) + column*i;
//            cout << "matrix[" << i << "][" << j << "]: ";
//            cin >> matrix[i][j];
        }
    }
}
void displayMatrix(const int row, const int column, int** matrix) {

    int max = digitCount(maxElement(row, column, matrix));
    int min = digitCount(minElement(row, column, matrix));

    int maxLen;
    if (max > min)
        maxLen = max;
    else
        maxLen = min;

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << setw(maxLen) << right << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void spiralMatrix(const int row, const int column, int **matrix){
    int x = 0, y = 0, num = 0;
    int x0 = column, y0 = row;
    while (num < column * row){
        for (int i = 0; i < column; ++i) {
            cout << "|" << matrix[y][i] << " ";
            num++;
        }
        y++;
        for (int i = 0; i < row; ++i) {
            cout << "|" << matrix[i][i] << " ";
            num++;
        }

        for (int i = 0; i < column; ++i) {
            cout << "|" << matrix[y][i] << " ";
            num++;
        }
        for (int i = 0; i < column; ++i) {
            cout << "|" << matrix[y][i] << " ";
            num++;
        }
    }
}

void Test4(){
    std::cout << "Test 4: \n" << std::endl;

    int row = 7, column = 7;
    int** myMatrix = new int*[row];
    createMatrix(row, column, myMatrix);
    displayMatrix(row, column, myMatrix);

    int Matrix[][4] = {{1,2,3,4},
                       {5,6,7,8},
                       {9,10,11,12},
                       {13,14,15,16}};

    cout << "\nSpiral matrix: " <<  endl;
    spiralMatrix(row, column, myMatrix);

    /* Normal function
     * 1 pointer
     * 2 ask memory
     * 3 get value
     * 4 return value
     * */

    /* Inline function
     * Copy the code is
     * */

}

//void printSpiralMatrix(int rows, int cols, int matrix[MAX][MAX]) {
//    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
//
//    while (top <= bottom && left <= right) {
//        // In phần trên cùng từ trái qua phải
//        for (int i = left; i <= right; i++) {
//            std::cout << matrix[top][i] << " ";
//        }
//        top++;
//
//        // In phần phải cùng từ trên xuống dưới
//        for (int i = top; i <= bottom; i++) {
//            std::cout << matrix[i][right] << " ";
//        }
//        right--;
//
//        // Kiểm tra xem còn phần dưới cùng để in không
//        if (top <= bottom) {
//            // In phần dưới cùng từ phải sang trái
//            for (int i = right; i >= left; i--) {
//                std::cout << matrix[bottom][i] << " ";
//            }
//            bottom--;
//        }
//
//        // Kiểm tra xem còn phần trái cùng để in không
//        if (left <= right) {
//            // In phần trái cùng từ dưới lên trên
//            for (int i = bottom; i >= top; i--) {
//                std::cout << matrix[i][left] << " ";
//            }
//            left++;
//        }
//    }
//}
/*
 *
    int rows, cols;
    std::cout << "Nhập số hàng của ma trận: ";
    std::cin >> rows;
    std::cout << "Nhập số cột của ma trận: ";
    std::cin >> cols;

    int matrix[MAX][MAX];

    std::cout << "Nhập các phần tử của ma trận:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "Ma trận xoắn ốc:" << std::endl;
    printSpiralMatrix(rows, cols, matrix);
    */