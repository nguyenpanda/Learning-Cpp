//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"

class Human{
public:
    string name;
    string occupation;
    int age = -1;

    void job() const{
        cout << "This human is " << occupation << endl;
    }

    void info() const{
        cout << name << " " << occupation << " " << age << endl;
    }
};

void Lec44(){
    std::cout << "Lecture 44: CLASS AND OBJECT\n" << std::endl;

//    object = A collection of attributes and methods
//            They can have characteristics and could perform actions
//            Can be used to mimic real world items (ex. Phone, Book, Dog)
//            Created from a class which acts as a "blue-print"

    Human human1 = {"Ha Tuong Nguyen", "Student", 19};
    human1.info();

    Human human2;
    human2.name = "HAHA";
    human2.occupation = "HAHA";
    human2.age = 100;

}