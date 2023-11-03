//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "../main.h"
#include <sstream>

struct Point{
    float x, y; //data fields

    Point(){
        this->x = this->y = 0; //default bahavior
        cout << "in Point(): " << this->tostring() << endl;
    }

    Point(float x, float y=0){ // constructor
        this->x = x;
        this->y = y;
        cout << "in Point(float x, float y=0): " << this->tostring() << endl;
    }
    ~Point(){ //Destructor
        cout << "in ~Point(): " << this->tostring() << endl;
    }
    string tostring(){//a normal method
        stringstream os;
        os << "(" << setw(5) << setprecision(2) << this->x << ", " << this->y << ")";
        return os.str();
    }
};


void Test5(){
    std::cout << "Test 5: \n" << std::endl;

//    cout << "checkpoint (1)" << endl;
//    {
//        cout << "checkpoint (2)" << endl;
//        Point p(3,5);
//        cout << "checkpoint (3)" << endl;
//    }
//    cout << "checkpoint (4)" << endl;
//    Point* ptr = new Point(99, 88);
//    cout << ptr->tostring() << endl;
//    cout << "checkpoint (5)" << endl;
//    delete ptr;
//    cout << "checkpoint (6)" << endl;


}