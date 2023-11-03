//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"

class Car{
public:
    string make;
    string model;
    int year;
    string color;

    Car(string make, string model, int year, string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

void Lec45(){
    std::cout << "Lecture 45: CONSTRUCTOR\n" << std::endl;

    //constructor =  special method that is automatically called when an object is instantiated
    //               useful for assigning values to attributes as arguments

    Car car1("Chevy", "Corvette", 2022, "blue");
    Car car2("Ford", "Mustang", 2023, "red");

    cout << car1.make << endl;
    cout << car1.model << endl;
    cout << car1.year << endl;
    cout << car1.color << endl;
}