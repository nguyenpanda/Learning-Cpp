//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

//Function prototype: if you want to define a function at the bottom of the main function or after another function that uses those functions.

// Variable scope
string name = "HaTuongNguyen"; // Global scope
void myName(string name){
    cout << name << endl;
}
void myName1(){
    cout << name << '\n' << endl;
}

// Overloaded Function
void bakePizza(){
    cout << "Here is your pizza!\n";
}
void bakePizza(const string topping){
    cout << "Here is your " << topping << " pizza!\n";
}
void bakePizza(const string topping1, const string topping2){
    cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}

void Lec18(){
    std::cout << "Lecture 18: USER DEFINED FUNCTION\n" << std::endl;

    cout << "\t⭐⭐Syntax for function in C++" << endl;
    cout
        << "<return keyword> <function name>(){" << endl
        << "    \\\\ Your code" << endl
        << "<return> <return value>;\n" << endl;


    cout << "\n\t⭐⭐Variable Scope" << endl;
    myName(name);
    myName1();

    cout << "\n\t⭐⭐Overloaded Function" << endl;
    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni", "mushroom");
}