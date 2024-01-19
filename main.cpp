// Created by Hà Tường Nguyên on 9/12/23.
#include "main.h"

void Fibonacci(size_t n, int* array) {
    if (n == 0) array[0] = 0;
    

        for (int i=0; i<n; i++) {

        }
}

int main(){
    cout << "\n\t\033[1;92mTHIS IS THE MAIN PROGRAM\033[0m" << endl;

    unsigned int size;
    cin >> size;

    int* array = new int(size);

    Fibonacci(2, array);







//    choiceLecture();
//    choiceClassLecture();
//    choicePointerLecture();
//    choiceLibLecture();
//    choiceSpecialLec();
//    choiceTest();

    return 0;
}

//    std::cout << "\033[1;31mThis is red text.\033[0m\n" << endl;
