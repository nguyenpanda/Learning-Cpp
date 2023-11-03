//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"

class Pizza{
public:
    std::string topping1;
    std::string topping2;

    Pizza() = default;
    explicit Pizza(std::string topping1){
        this->topping1 = topping1;
    }
    explicit Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

    void info() const{
        cout << topping1 << ", " << topping2;
    }
};

void Lec46(){
    std::cout << "Lecture 46: CONSTRUCTOR OVERLOADING\n" << std::endl;
//    overloaded constructors = multiple constructors w/ same name but different parameters
//                              allows for varying arguments when instantiating an object

    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "peppers");
    Pizza pizza3;

    pizza1.info();
}