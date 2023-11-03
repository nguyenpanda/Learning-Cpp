//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"


class Stove{
private:
    int temperature = 0;
public:

    // Getter
    int getTemperature() const{
        return temperature;
    }

    // Setter
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 10){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
    }
};

void Lec47(){
    std::cout << "Lecture 47: GETTER AND SETTER\n" << std::endl;

//    Abstraction = hiding unnecessary data from outside a class
//    getter = function that makes a private attribute READABLE
//    setter = function that makes a private attribute WRITEABLE

    Stove stove;
    cout << stove.getTemperature() << endl;
    stove.setTemperature(5);
    std::cout << "The temperature setting is: " << stove.getTemperature();
}