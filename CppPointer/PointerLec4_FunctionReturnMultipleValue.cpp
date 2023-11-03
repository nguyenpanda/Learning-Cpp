//
// Created by Hà Tường Nguyên on 9/25/23.
//

#include "PointerPackage.h"

void getMinMax(const int numArray[], int size, int* min, int* max){
    for (int i = 1; i < size; ++i) {
        if (*min > numArray[i]) {
            *min = numArray[i];
        }
        if (*max < numArray[i]) {
            *max = numArray[i];
        }
    }
}

void PointerLec4(){
    std::cout << "\t\t\tPOINTER" << endl << "Lecture 4: FUNCTION RETURN MULTIPLE VALUE USING POINTER\n" << std::endl;

    int numbers[5] = {5, 4, -2, 29, 6};
    int arrSize = sizeof(numbers) / sizeof(numbers[0]);

    int minNum = numbers[0];
    int maxNum = numbers[0];

    getMinMax(numbers, arrSize, &minNum, &maxNum);

    cout << "Min: " << minNum << endl;
    cout << "Max: " << maxNum << endl;

}