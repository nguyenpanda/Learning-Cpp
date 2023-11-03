//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include <iomanip>
#include "LecturePackage.h"

struct Book {
    string title;
    string author;
    int year{};
    int page{};
    bool available{};
};

void Lec41(){
    std::cout << "Lecture 41: STRUCTS\n" << std::endl;

    Book b1;
    b1.title = "Harry Potter";
    b1.author = "J.K. Rowling";
    b1.year = 2005;
    b1.page = 10000;
    b1.available = true;
    cout << "Title: " << b1.title << endl;
    cout << "Author: " << b1.author << endl;
    cout << "Year: " << b1.year << endl;
    cout << "Page: " << b1.page << endl;
    cout << "Available: " << b1.available << endl;

    Book b2 = {"50 Shades of Grey", "E.L. James", 2020, 1000, true};

    cout << "Title: " << b2.title << endl;
    cout << "Author: " << b2.author << endl;
    cout << "Year: " << b2.year << endl;
    cout << "Page: " << b2.page << endl;
    cout << "Available: " << b2.available << endl;

    Book b3;
    b3 = {"50 Shades of Grey", "E.L. James", 2020, 1000, true};
}