//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

void Lec17(){
    std::cout << "Lecture 17: PSEUDO RANDOM\n" << std::endl;

    srand(time(NULL)); // set the seed for random
    int dice = (rand() % 6) + 1;
    cout << "The dice: " << dice << endl;

    for (int i = 0; i <= 20; i++){
        int num = (rand() % 6) + 1;
        cout << num;
    }
}