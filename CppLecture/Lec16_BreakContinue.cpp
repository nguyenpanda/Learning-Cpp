//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

void Lec16(){
    std::cout << "Lecture 16: BREAK AND CONTINUE\n" << std::endl;

    // break = break out of a loop
    // continue = skip current iteration

    cout << "Origin: ";
    for(int i = 1; i <= 9; i++){
        cout << i;
    }

    cout << endl;

    cout << "Break: ";
    for(int i = 1; i <= 9; i++){
        if(i == 4){
            break;
        }
        cout << i;
    }

    cout << endl;

    cout << "Continue: ";
    for(int i = 1; i <= 9; i++){
        if(i == 4){
            continue;
        }
        cout << i;
    }
}