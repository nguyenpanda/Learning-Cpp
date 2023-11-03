//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

void Lec29(){
    std::cout << "Lecture 29: MULTIDIMENSIONAL ARRAYS\n" << std::endl;

    // Must have column size
    string cars[][3] = {{"Mustang", "Escape", "F-150"},
                         {"Corvette", "Equinox", "Silverado"},
                         {"Challenger", "Durango", "Ram 1500"}};

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << cars[i][j] << " ";
        }
        cout << endl;
    }
}