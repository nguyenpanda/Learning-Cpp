//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include <iomanip>
#include "LecturePackage.h"

double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }

    return total;
}

void Lec24(){
    std::cout << "Lecture 24: PASS ARRAY TO FUNCTION\n" << std::endl;

    double prices[] = {76.09, 14.85, 42.07, 0.08};
    int size = sizeof(prices) / sizeof(int);
    double total = getTotal(prices, size);

    cout << "The total is: $" << fixed << setprecision(2) << total;
}