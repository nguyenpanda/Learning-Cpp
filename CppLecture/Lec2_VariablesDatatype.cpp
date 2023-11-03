//
// Created by Hà Tường Nguyên on 9/12/23.
//

#include "LecturePackage.h"

void Lec2(){
    std::cout << "Lecture 2: VARIABLE AND DATATYPE\n" << std::endl;
    //int (whole number)
    int age = 21;
    int year = 2023;
    int days = 7;
    std::cout << "int (integer): " << age <<  '\t' << days << '\t' << year << std::endl;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;
    std::cout << "double: " << price <<  '\t' << gpa << '\t' << temperature << std::endl;

    //char (single character)
    char grade = 'A';
    char initial = 'C';
    char currency = '$';
    std::cout << "char (character): " << grade <<  '\t' << initial << '\t' << currency << std::endl;

    //wide character
    wchar_t WideChar = L'ந';
    std::cout << "wchar_t (wide character): " << WideChar << std::endl;

    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;
    std::cout << "bool (boolean): " << student <<  '\t' << power << '\t' << forSale << std::endl;

    //string (objects that represent a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";
    std::cout << "string: " << name <<  '\t' << day << '\t' << food << '\t' << address << std::endl;

    std::cout << "\nAdd string with variable" << std::endl;
    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;

    std::cout << "Display data type: " << typeid(age).name() << std::endl;
    std::cout << "Display data type: " << typeid(price).name() << std::endl;
    std::cout << "Display data type: " << typeid(grade).name() << std::endl;
    std::cout << "Display data type: " << typeid(WideChar).name() << std::endl;
    std::cout << "Display data type: " << typeid(student).name() << std::endl;
    std::cout << "Display data type: " << typeid(name).name() << std::endl;
}