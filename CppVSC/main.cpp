#include <iostream>
#include <sstream>
#include "color.h"
using namespace std;

class AA{
public:
    AA() {
        cout << GREEN << "Constructor AA();" << RESET << endl;
    }

    ~AA() {
        cout << RED << "Destructor AA();" << RESET << endl;
    }

    virtual void display() {
        cout << "AA::display" << RESET << endl;
    }
};

class BB: public AA{
public:
    BB() {
        cout << GREEN << "Constructor BB();" << RESET << endl;
    }

    ~BB() {
        cout << RED << "Destructor BB();" << RESET << endl;
    }

    void display() {
        cout << "BB::display" << RESET << endl;
    }
};

class CC: public BB{
public:
    CC() {
        cout << GREEN << "Constructor CC();" << RESET << endl;
    }

    ~CC() {
        cout << RED << "Destructor CC();" << RESET << endl;
    }

    void display() {
        cout << "CC::display" << RESET << endl;
    }
};

class DD: public CC{
public:
    DD() {
        cout << GREEN << "Constructor DD();" << RESET << endl;
    }

    ~DD() {
        cout << RED << "Destructor DD();" << RESET << endl;
    }

    void display() {
        cout << "DD::display" << RESET << endl;
    }
};

void demo1(){
    cout << CYAN << "Demo1" << RESET << endl;
    AA a;
    BB b;
    DD d;
    a = d;
}

void demo2(){
    cout << CYAN << "Demo2" << RESET << endl;
    AA a;
    DD d;
    a = d;
    a.display();
    d.display();
}

void demo3(){
    cout << CYAN << "Demo3: Polymorphism" << RESET << endl;
    AA *pa, *paa;
    pa = paa = new AA();
    DD *pd = new DD();
    pa = pd;
    pa = new CC();
    pa->display();
    pd->display();
}

void demo4(){
    cout << CYAN << "Demo4" << RESET << endl;
    BB *pa = new CC();
    //Some code lines here
    pa->display(); //What is the output?
}
 
int main() {

    return 0;
}