//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include <iomanip>
#include "LecturePackage.h"

class Product{
public:
    string name;
    string id;
    float price;

    Product(string name, string id, float price){
        this->name = name;
        this->id = id;
        this->price = price;
    };

    void info(){
        cout << name << " - " << id << ", $" << put_money(price) << endl;
    }

    void updatePrice(float newPrice){
        price = newPrice;
    }
};

class Custom{
public:
    string name;
    string id;
    string phoneNum;

    Custom(string name, string id, string phoneNum){
        this->name = name;
        this->id = id;
        this->phoneNum = phoneNum;
    };

    void info(){
        cout << name << " - " << id << ", Phone number: " << phoneNum << endl;
    }

    void updatePhoneNum(float newPhoneNum){
        phoneNum = newPhoneNum;
    }

};

void Lec50(){
    std::cout << "Lecture 50: \n" << std::endl;

    Product phone("Iphone", "12345", 300.49);
    phone.info();

    Custom nguyen("Nguyen", "2250013", "0789978919");
    nguyen.info();
}