//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

void BruteForceSort(int array[], int size){
    int box;
    for (int i = 0; i < size - 1; i++){
        for (int k = 0; k < size - i - 1; k++){
            if (array[k] > array[k+1]){
                box = array[k];
                array[k] = array[k+1];
                array[k+1] = box;
            }
        }
    }
}

void Lec26(){
    std::cout << "Lecture 26: BRUTE FORCE SORT\n" << std::endl;

    int array[] = {5, 10, 1, 9, 2, 8, 3, 7, 4, 6, 5, 10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array)/sizeof(array[0]);

    BruteForceSort(array, size);

    for(int element : array){
        cout << element << " ";
    }
}