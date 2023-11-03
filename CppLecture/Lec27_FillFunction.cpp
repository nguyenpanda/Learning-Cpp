//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

void Lec27(){
    std::cout << "Lecture 27: FILL FUNCTION\n" << std::endl;

    // fill() = Fills a range of elements with a specified value
    //            fill(first, last, value)
    // first: first index
    // last: last index
    // value: fill value

    const int size = 9;
    string foods[size];

    fill(foods, foods + (size/3), "pizza");
    fill(foods + (size/3), foods + (size/3)*2, "hamburger");
    fill(foods + (size/3)*2, foods + size, "hotdog");

    for(string food : foods){
        cout << food << '\n';
    }
}