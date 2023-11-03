//
// Created by Hà Tường Nguyên on 9/12/23.
//

#include <vector>
#include "LecturePackage.h"

void Lec5(){
    std::cout << "Lecture 5: TYPEDEF AND ALIASES\n" << std::endl;
    /* ALIASES: biệt hiệu, biệt danh
    typedef = reserved keyword used to create an additional name
                    (alias) for another data type.
                    New identifier for an existing type
                    Helps with readability and reduces typos
                    Use when there is a clear benefit
                    Replaced with 'using' (work better w/ templates)
    */

    std::cout << "\tTYPEDEF" << endl;
    std::vector<std::pair<std::string, int>> fruits; // vector<pair<string, int>> fruits;
    typedef std::string text_t;
    typedef int integer;

    // Declare a vector of pairs
    fruits.emplace_back("apple", 10);
    fruits.emplace_back("banana", 5);
    fruits.emplace_back("cherry", 8);
    // Display the contents of the vector
    for (const auto& fruit : fruits) {
        cout << "Fruit: " << fruit.first << ", Quantity: " << fruit.second << endl;
    }

    text_t name = "Ha Tuong Nguyen"; cout << name << endl;
    integer num = 100; cout << num << endl;


    /*
     Recommend "using" keyword
     */
    std::cout << "\tUSING KEYWORD" << endl;
    using text_t = std::string;
    using number_t = int;
    text_t UsingNamespace_name = "Ha TUong Nguyen";
    number_t UsingNamespace_number = 100;

    cout << UsingNamespace_name << endl;
    cout << UsingNamespace_number << endl;
}