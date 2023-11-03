//
// Created by Hà Tường Nguyên on 9/12/23.
//

#include "LecturePackage.h"

void Lec1(){
    std::cout << "Lecture 1: CONSOLE OUT AND COMMENT\n" << std::endl;

    std::cout << "I like pizza!" << '\n';
    std::cout << "It's really good!" << '\n';


    // This is comment
    /*
     std means stand not sexual transmission disease
     std::cout = to character out
     */
    printf("Stdio.h\n"); // Likes std::cout

    // << std::endl = to have a new line below and flush the output buffer
    std::cout << "Hello World!" << std::endl;

    // to cout other things
    std::cout << "Hello" << " World!" << std::endl;

    // dont have std::edl; the "studies" will have the same line with "Nguyen"
    std::cout << "Ha Tuong Nguyen";
    std::cout << " studies Chemical Engineering at HCM University of Technoloy" << std::endl;

    // Using '\n' to create a new line but this commend don't delete the memory of the output buffer
    std::cout << "This don't reset the memory of the computer" << '\n';

    // Because we use "using namespace:: std;" so we don't need std::
    cout << "I'm happy because C++ have the \"using namespace\" commend" << endl;
}
