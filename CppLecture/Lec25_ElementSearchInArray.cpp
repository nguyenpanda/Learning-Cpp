//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

int searchArray(string array[], int size, string element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}

void Lec25(){
    std::cout << "Lecture 25: ELEMENT SEARCH IN ARRAY\n" << std::endl;

    string foods[] = {"pizza", "hamburger", "hotdog"};
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    string myFood;

    cout << "Enter element to search for: " << '\n';
    getline(cin, myFood);

    index = searchArray(foods, size, myFood);

    if(index != -1){
        cout << myFood << " is at index: " << index << endl;
    }
    else{
        cerr << myFood << " is not in the array" << endl;
    }
}