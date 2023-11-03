//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"

void staticVarExam() {
    static int staticVariable = 0;
    staticVariable++;
    cout << "Static Variable: " << staticVariable << endl;
}

class staticClassMethodExam {
public:
    static void staticMethod() {
        cout << "Call a method without a class instance!" << endl;
    }
};

class staticDataMembersExam {
public:
    static int staticData; // Biến tĩnh trong lớp
};

int staticDataMembersExam::staticData = 0;

void Lec48(){
    std::cout << "Lecture 48: STATIC" << std::endl;

    cout << "\n\t1. Static Variables" << endl;
    /*
    Static Variables:
    When "static" is used before a variable inside a function or method, it signifies that the variable is a static variable.
    Static variables exist throughout the program's execution and are not destroyed when they go out of the scope of the function.
    All instances of the function share the same static variable.
    This is often used to store information between function calls.
    */
    staticVarExam();
    staticVarExam();



    cout << "\n\t2. Static Member Functions" << endl;
    /*
    You can declare a member function as "static" within a class.
    Static member functions are not associated with any specific instance of the class,
    and they can be called using the class name rather than an object.
    */
    staticClassMethodExam::staticMethod();



    cout << "\n\t3. Static Data Members" << endl;
    /*
    Static Data Members:
    Static variables within a class are variables that each instance of the class does not have individually,
    but they share them collectively. This is often used to store shared information for all instances of the class.
    */
    staticDataMembersExam object1;
    staticDataMembersExam object2;

    cout << "First object is assigned by 10!" << endl;
    object1.staticData = 10;
    cout << "Second object is called!" << endl;
    cout << object2.staticData << endl;
}