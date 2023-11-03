//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"

typedef struct Car{
    string model;
    int year;
    string color;
} car;

void InputCar(Car& car, string model, int year, string color){
    car.model = model;
    car.year = year;
    car.color = color;
}
void printCar(Car& car){
    cout << car.model << endl;
    cout << car.year << endl;
    cout << car.color << endl;
}
void paintCar(Car& car, string color){
    car.color = color;
}

void Lec42(){
    std::cout << "Lecture 42: PASS STRUCTS AS ARGUMENTS\n" << std::endl;

    Car car1, car2, car3;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    InputCar(car3, "BMW", 2023, "nigger");
    printCar(car3);

    car car4 = {"Audi", 2021, "pinky doggy"};
    printCar(car4);

    Car car5 = {"Audi", 2021, "pinky doggy"};
}
