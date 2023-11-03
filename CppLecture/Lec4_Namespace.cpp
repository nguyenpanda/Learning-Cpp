//
// Created by Hà Tường Nguyên on 9/12/23.
//

#include "LecturePackage.h"

namespace first{
    int x = 1;
    const float PI = 3.14;
}
namespace second{
    int x = 2;
}

void Lec4(){
    std::cout << "Lecture 4: NAMESPACE\n" << std::endl;

    // Namespace = provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name
    //             A namespace allows for identically named entities
    //             as long as the namespaces are different.

    int x = 0;
    using namespace first;
    std::cout << x << std::endl;
    std::cout << first::PI << std::endl;
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;
}