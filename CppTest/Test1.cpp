//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "../main.h"

void middleReplace(string &str, const string& symbol){
    int index = (int) str.length() / 2;
    str.erase(index);
    str.insert(index, symbol);
}
/**
 * Need to fix some bug
 */
void disUTriangle(const int size, const char sym, int right=1){
    for (int i=0; i<size; i++){
        for (int k=0; k<size-i; k++){
            cout << sym << " ";
        }

        if (right == 1) {
            cout << endl << setw((2 * i + 3));
        } else {
            cout << endl;
        }
    }
}
void disMTriangle(const int size, const char sym, int upper=1){
    if (upper){
        for (int i=0; i<size; i++){
            cout << setw(size - i);
            for (int k=0; k<2*i+1; k++){
                cout << sym;
            }
            cout << endl;
        }
    } else {
        for (int i=0; i<size; i++){
            cout << setw(i + 1);
            for (int k=0; k < 2*(size-i)-1; k++){
                cout << sym;
            }
            cout << endl;
        }
    }
}
void disDiamond(const int size, const char sym){
    for (int i=0; i<size; i++){
        cout << setw(size - i);
        for (int k=0; k<2*i+1; k++){
            cout << sym;
        }
        cout << endl;
    }
}

void Test1(){
    std::cout << "Test 1: \n" << std::endl;

    int a[][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

//    disUTriangle(4, '@');
//    disUTriangle(4, '@', 0);
//    disMTriangle(4, '@');
//    disMTriangle(4, '@', 0);
}



void displayAllAscii(){
    cout << "ASCII" << endl; // 32-126
    for (int i=0; i<=255; i++){
        cout << (char) i;
        if (i%10==0){
            cout << endl;
        }
    }
}
string crtHorizSym(const int len, char hSym){
    string output;
    for (int i=0; i<len; i++){
        output += hSym;
    }
    return output;
}
void disHorizSym(const int column, const int width, const char nodeSym, const char hSym){
    cout << nodeSym;
    for (int c = 0; c < column; c++){
        cout << crtHorizSym(width, hSym) << nodeSym;
    }
}
void disVerSym(const int column, const int width, const int height, const char vSym){
    cout << vSym;
    for (int c = 0; c < column; c++) {
        cout << setw(width + 1) << vSym;
    }
}
void table1(const int &row, const int &column, const int &width, const int &height, const char &nodeSym, const char &hSym, const char &vSym){
    for (int r = 0; r < row; r++){
        disHorizSym(column, width, nodeSym, hSym);
        cout << endl;
        for (int h = 0; h < height; h++){
            disVerSym(column, width, height, vSym);
            cout << endl;
        }
    }
    disHorizSym(column, width, nodeSym, hSym);
}


/*

    @---------@
    |  $   $  |
    |    $    |
    |  $   $  |
    @---------@

    @---------@
    |   &&&   |
    |  &   &  |
    |   &&&   |
    @---------@

    @-------------@
    |#############|
    |#############|
    |#############|
    |#############|
    |#############|
    @-------------@

    @---------------@
    | # # # # # # # |
    | # # # # # # # |
    | # # # # # # # |
    | # # # # # # # |
    | # # # # # # # |
    @---------------@
 */