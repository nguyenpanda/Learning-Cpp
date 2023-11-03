//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"

string createSym(const int len, char hSym){
    string output;
    for (int i=0; i<len; i++){
        output += hSym;
    }
    return output;
}
void displaySym(const int column, int width, char nodeSym, char hSym){
    cout << nodeSym;
    for (int c = 0; c < column; c++){
        cout << createSym(width, hSym) << nodeSym;
    }
}
void table(int row, int column, int &width, int &height, char nodeSym='*', char hSym='-', char vSym='|'){
    for (int r = 0; r < row; r++){
        displaySym(column, width, nodeSym, hSym);
        cout << endl;
        for (int h = 0; h < height; h++){
            displaySym(column, width, vSym, ' ');
            cout << endl;
        }
    }
    displaySym(column, width, nodeSym, hSym);
}

void Lec37(){
    std::cout << "Lecture 37: TIC TAC TOE\n" << std::endl;

    int width = 5;
    int height = (width - 1) / 2;

    table(10, 10, width, height);
}
