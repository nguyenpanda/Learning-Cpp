//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

void Lec28(){
    std::cout << "Lecture 28: FILL ARRAY WITH USER INPUT\n" << std::endl;

    string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    string temp;

    for(int i = 0; i < size; i++){
        cout << "Enter in food you like or 'q' to quit #" << i + 1 << ": ";
        getline(cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    cout << "You like the following food:\n";

    for(int i = 0; !foods[i].empty(); i++){
        cout << foods[i] << '\n';
    }

}