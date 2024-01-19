//
// Created by Hà Tường Nguyên on 9/20/23.
//

#include "ClassLecturePackage.h"

// Abstract class
class SmartPhone{
public:
    virtual void TakeASelfie() = 0; // -> this line making this class becomes abstraction
    virtual void MakeACall(std::string name) = 0;
};

class Iphone:public SmartPhone{
public:
    void TakeASelfie(){
        std::cout << "Iphone is taking a selfie" << std::endl;
    }

    void MakeACall(std::string name){
        std::cout << "Iphone is connecting to " << name << "'s phone..." << std::endl;
    }
};

class Android:public SmartPhone{
public:
    void TakeASelfie(){
        std::cout << "Android is taking a selfie" << std::endl;
    }

    void MakeACall(std::string name){
        std::cout << "Android is connecting to " << name << "'s phone..." << std::endl;
    }
};

void ClassLec7(){
    std::cout << "\t\tORIENTED OBJECT PROGRAMMING" << endl << "Lecture 7: Abstraction\n" << std::endl;

    // Abstraction: showing important info, hiding unimportant info, and complex details
    // e.g. all coffee machines have a UI, but the mechanism of those machines, which is abstract class in Class, are difference

    SmartPhone* s1 = new Iphone();
    std::cout << s1 << std::endl;
    s1->TakeASelfie();
    s1->MakeACall("TNguyen");

    cout << setw(20) << setfill('-') << "" << endl;

    SmartPhone* s2 = new Android();
    std::cout << s2 << std::endl;
    s2->TakeASelfie();
    s2->MakeACall("Tuong Nguyen");

    cout << setw(20) << setfill('-') << "" << endl;
    Iphone s3;
    s3.MakeACall("Ha Tuong Nguyen");
}