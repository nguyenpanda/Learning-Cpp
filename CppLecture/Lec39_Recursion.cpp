//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"

int iteration_factorial(int num){
    int result = 1;
    for (int i = 2; i <= num; i++){
        result *= i;
    }
    return result;
}
int recursion_factorial(int num){
    if(num > 1){
        return num * recursion_factorial(num - 1);
    }
    else{
        return 1;
    }
}

void Lec39(){
    std::cout << "Lecture 39: RECURSION\n" << std::endl;

    /*
      * recursion = a programming technique where a function
      *              invokes itself from within
      *              break a complex concept into a repeatable single step
      *
      * (iterative VS recursive)
      *
      * advantages = less code and is cleaner
      *             useful for sorting and searching algorithms
      */

    cout << iteration_factorial(10) << endl;
    cout << recursion_factorial(10) << endl;

}
