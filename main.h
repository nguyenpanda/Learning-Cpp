//
// Created by Hà Tường Nguyên on 9/17/23.
//
#ifndef CPP_MAIN_H
#define CPP_MAIN_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <cmath>
#include <sstream>
#include "CppLecture/LecturePackage.h" //#include <cstdio> //#include <functional>
#include "CppBuildInLibrary/BuildInLibraryPackage.h"
#include "CppPointer/PointerPackage.h"
#include "CppClassLecture/ClassLecturePackage.h"
#include "CppTest/TestPackage.h"
using namespace std;

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    void runLecture(int lecture);
    void choiceLecture();
    void choiceLecture(int lecture);
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    void runSpecialLecture(int SpecialLec);
    void choiceSpecialLec();
    void choiceSpecialLec(int SpecialLec);
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    void runBuildInLibrary(int lecture, int section);
    void choiceLibLecture();
    void choiceLibLecture(int section);
    void choiceLibLecture(int lecture, int section);
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    void choicePointerLecture();
    void choicePointerLecture(int pointerLecture);
    void runPointerLecture(int pointerLecture);
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    void choiceClassLecture();
    void choiceClassLecture(int classLecture);
    void runClassLecture(int classLecture);
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    void runTest(int test);
    void choiceTest();
    void choiceTest(int test);
#endif //CPP_MAIN_H
