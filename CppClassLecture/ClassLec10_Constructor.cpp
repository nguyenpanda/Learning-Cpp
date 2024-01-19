//
// Created by Hà Tường Nguyên on 9/20/23.
//

#include "ClassLecturePackage.h"

class Book_Lec10_OOP {
public:
    string Title;
    string Author;
    int* Rates;
    int RatesCounter;
    int* Year;

    Book_Lec10_OOP(string title, string author) {
        Title = title;
        Author = author;

        RatesCounter = 2;
        Rates = new int[2];
        Rates[0] = 4;
        Rates[1] = 5;
        Year = new int;
        *Year = 10;

        cout << "Constructor invoked for "+Title<<endl;
    }

    ~Book_Lec10_OOP() {
        //use for array
        delete [] Rates;
        Rates = nullptr;
        //use for simple types
        delete Year;
        Year = nullptr;
        cout << "Destructor invoked for "+Title<<endl;
    }
};


void ClassLec10(){
    std::cout << "\t\tORIENTED OBJECT PROGRAMMING" << endl << "Lecture 10: Constructor\n" << std::endl;

    Book_Lec10_OOP book1("Millionaire Fastlane", "M. J. DeMarco");
    Book_Lec10_OOP book2("C++ Lambda Story", "Bartek Filipek");

    /*Let me know in the comments if you know why the line below will cause an error*/
    Book_Lec10_OOP book3 = book1;
    Book_Lec10_OOP book4(book1);


}