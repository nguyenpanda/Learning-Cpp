//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"

template<typename T>
void swap(T &stArg, T &ndArg){
    T box;
    box = stArg;
    stArg = ndArg;
    ndArg = box;
}

template<typename T, typename U>
auto maxAddress(T &x, U &y){
    return (x > y) ? x : y;
}

template<typename T, typename U>
auto maxPointer(T *x, U *y){
    return (*x > *y) ? *x : *y;
}

void Lec40(){
    std::cout << "Lecture 40: FUNCTION TEMPLATES\n" << std::endl;

    /**
     * Function template = describes what a function looks like.
     *                     Can be used to generate as many overloaded functions as needed,
     *                     each using different data types
     *
     * Ex. "It's like a cookie-cutter..."
     * "Cookies are the same shape, but the dough used can be different"
     *
     */

    string a = "Ha"; string b = "Tuong";
    swap(a, b);
    cout << a << endl; cout << b << endl;

    int x = 124; double y = 124.423;
    cout << maxAddress(x, y) << endl;
    cout << maxPointer(&x, &y) << endl;

}
