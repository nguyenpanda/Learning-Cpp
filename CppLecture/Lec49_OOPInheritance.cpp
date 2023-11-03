//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"

class Animal{
public:
    bool alive = true;
    string name;
    int age;

    static void eat(){
        std::cout << "This animal is eating\n";
    }
};
class Dog : public Animal{
public:
    Dog(string name){
        this->name = name;
    }

    static void bark(){
        std::cout << "The dog named goes woof!" << endl;
    }
};
class Cat : public Animal{
public:
    Cat(string name){
        this->name = name;
    }

    static void meow(){
        std::cout << "The cat goes meow!" << endl;
    }
};

class Shape{
public:
    double area;
    double volume;
};
class Cube : public Shape{
public:
    double side;
    Cube(double side){
        this->side = side;
        this->area = 6 * side * side;
        this->volume = side * side * side;
    }
};
class Sphere: public Shape{
public:
    double radius;
    const double PI = 3.14159;
    Sphere(double radius){
        this-> radius = radius;
        this-> area = PI * 4 * radius * radius;
        this-> volume = (4/3.0) * PI * radius * radius * radius;
    }
};

void Lec49(){
    std::cout << "Lecture 49: OOP INHERITANCE\n" << std::endl;

    Dog dog("Ánh");
    Cat cat("Nguyên");

    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    Cube cube(10);
    Sphere sphere(10);

    cout << "The area of the cube is: " << cube.area << endl;
    cout << "The volume of the cube is: " << cube.volume << endl;

    cout << "The area of the sphere is: " << sphere.area << endl;
    cout << "The volume of the sphere is: " << sphere.volume << endl;
}