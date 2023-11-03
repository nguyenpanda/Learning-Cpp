//
// Created by Hà Tường Nguyên on 9/17/23.
//

#include "main.h"
using namespace std;
// ######################################################
void choiceSpecialLec(){
    int SpecialLec;
    cout << "Enter the number special lecture: "; cin >> SpecialLec;
    runSpecialLecture(SpecialLec);
    cout << endl;
}
void choiceSpecialLec(const int SpecialLec){
    runSpecialLecture(SpecialLec);
}
void runSpecialLecture(const int SpecialLec){
    const int numSpecialLec = 5;
    std::function<void()> SpecialLecFunctions[numSpecialLec] = {
            Lec10X, Lec20XX, Lec30XXX, Lec40XL, Lec50L,
    };

    if (SpecialLec >= 1 && SpecialLec <= numSpecialLec) {
        SpecialLecFunctions[SpecialLec - 1](); // Call the selected lecture function
    } else {
        cerr << "Invalid special lecture number" << endl;
    }
}
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void choiceTest(){
    int test;
    cout << "Enter the number test: "; cin >> test;
    runTest(test);
    cout << endl;
}
void choiceTest(const int test){
    runTest(test);
}
void runTest(const int test){
    const int numTestes = 10;
    std::function<void()> testFunctions[numTestes] = {
            Test1,Test2,Test3,Test4,Test5,Test6,Test7,Test8,Test9,Test10,
    };

    if (test >= 1 && test <= numTestes) {
        testFunctions[test - 1](); // Call the selected lecture function
    } else {
        cerr << "Invalid test number" << endl;
    }
}
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void choiceLecture(){
    int lecture;
    cout << "Enter the number lecture: "; cin >> lecture;
    runLecture(lecture);
    cout << endl;
}
void choiceLecture(const int lecture){
    runLecture(lecture);
}
/**
 * \Basic_concept Lecture from 01-09:\n
 * 👉Lec1-3: Basic concept\n
 * 👉Lec4: Namespace⭐\n
 * 👉Lec5: Typedef - Aliases⭐\n
 * 👉Lec6-9: Basic concept\n
 *
 * \Logical_statement Lecture from 10-12:\n
 * 👉Lec10: If - Switch\n
 * 👉Lec11: Ternary Operator <statement> ? <true> : <false>\n
 * 👉Lec12: Logical operator\n
 *
 * \String_method Lecture 13: string method⭐\n
 *
 * \Loops Lecture from 14-16:\n
 * 👉Lec14: While - Do while loops\n
 * 👉Lec15: For loop\n
 * 👉Lec16: Break - Continue⭐\n
 *
 * \Pseudo_random Lecture 17: Pseudo random⭐\n
 *
 * \User_defined_function Lecture 18: User defined function\n
 *
 * \iomanip Lecture 19:\n
 * 👉Lec19: Set decimal number⭐\n
 *
 * \Array Lecture from 21-29:\n
 * 👉Lec22: sizeof(<var>) operator\n
 * 👉Lec25: Search in array\n
 * 👉Lec26: Brute force sort⭐\n
 * 👉Lec27: Fill(<array>, <array+index>, <element>) function\n
 * 👉Lec29: Multi-dimensional array\n
 * 👉Lec30: Quiz game⭐\n
 *
 * \Memory_Function_reference Lecture from 31-33\n
 * 👉Lec31: Memory address⭐\n
 * 👉Lec32: Pass value & Pass reference\n
 * 👉Lec33: Constant parameters\n
 *
 * \Luhn_algorithm Lecture 34: Luhn_Algorithm\n
 *
 * \Pointer Lecture from 35-37\n
 * 👉Lec35: Pointers⭐\n
 * 👉Lec36: Null pointer⭐\n
 * 👉Lec37: Tic Tac Toe game\n
 *
 * \Dynamic_Memory Lecture 38: Dynamic memory⭐⭐⭐\n
 *
 * \Recursion Lecture 39: Recursion\n
 *
 * \Function_template Lecture 40: Function template⭐\n
 *
 *
 */
void runLecture(const int lecture){
    const int numLectures = 50;
    std::function<void()> lectureFunctions[numLectures] = {
            Lec1, Lec2, Lec3, Lec4, Lec5, Lec6, Lec7, Lec8, Lec9,Lec10,
            Lec11, Lec12, Lec13, Lec14, Lec15, Lec16, Lec17, Lec18, Lec19,Lec20,
            Lec21, Lec22, Lec23, Lec24, Lec25, Lec26, Lec27, Lec28, Lec29,Lec30,
            Lec31, Lec32, Lec33, Lec34, Lec35, Lec36, Lec37, Lec38, Lec39,Lec40,
            Lec41, Lec42, Lec43, Lec44, Lec45, Lec46, Lec47, Lec48, Lec49, Lec50
    };


    if (lecture >= 1 && lecture <= numLectures) {
        lectureFunctions[lecture - 1](); // Call the selected lecture function
    } else {
        cerr << "Invalid lecture number" << endl;
    }
}
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void choicePointerLecture(){
    int pointerLecture;
    cout << "Enter the number pointer lecture: "; cin >> pointerLecture;
    runPointerLecture(pointerLecture);
    cout << endl;
}
void choicePointerLecture(const int pointerLecture){
    runPointerLecture(pointerLecture);
}
void runPointerLecture(const int pointerLecture){
    const int numPointerLectures = 21;
    std::function<void()> pointerLectureFunctions[numPointerLectures] = {
            PointerLec1, PointerLec2, PointerLec3, PointerLec4, PointerLec5, PointerLec6, PointerLec7, PointerLec8, PointerLec9, PointerLec10,
            PointerLec11, PointerLec12, PointerLec13, PointerLec14, PointerLec15, PointerLec16, PointerLec17, PointerLec18, PointerLec19, PointerLec20,
    };

    if (pointerLecture >= 1 && pointerLecture <= numPointerLectures) {
        pointerLectureFunctions[pointerLecture - 1](); // Call the selected lecture function
    } else {
        cerr << "Invalid pointer lecture number" << endl;
    }
}
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void choiceClassLecture(){
    int classLecture;
    cout << "Enter the number class lecture: "; cin >> classLecture;
    runClassLecture(classLecture);
    cout << endl;
}
void choiceClassLecture(const int classLecture){
    runClassLecture(classLecture);
}
void runClassLecture(const int classLecture){
    const int numClassLectures = 50;
    std::function<void()> classLectureFunctions[numClassLectures] = {
            ClassLec1, ClassLec2, ClassLec3, ClassLec4, ClassLec5, ClassLec6, ClassLec7, ClassLec8, ClassLec9, ClassLec10,
            ClassLec11, ClassLec12, ClassLec13, ClassLec14, ClassLec15, ClassLec16, ClassLec17, ClassLec18, ClassLec19, ClassLec20,
    };


    if (classLecture >= 1 && classLecture <= numClassLectures) {
        classLectureFunctions[classLecture - 1](); // Call the selected lecture function
    } else {
        cerr << "Invalid class lecture number" << endl;
    }
}
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void choiceLibLecture(){
    cout << "BUILD-IN LIBRARY ARE RUNNING" << endl;
    int lecture;
    int section;
    cout << "Enter the number lecture: "; cin >> lecture;
    cout << "Enter the number section: "; cin >> section;
    runBuildInLibrary(lecture, section);
    cout << endl;
}
void choiceLibLecture(const int section){
    cout << "SECTION " << section << " IN BUILD-IN LIBRARY ARE RUNNING" << endl;
    int lecture;
    cout << "Enter the number lecture: "; cin >> lecture;
    runBuildInLibrary(lecture, section);
    cout << endl;
}
void choiceLibLecture(const int lecture, const int section){
    cout << "BUILD-IN LIBRARY ARE RUNNING" << endl;
    runBuildInLibrary(lecture, section);
}
void runBuildInLibrary(const int lecture, const int section){
    const int numLecturesPerSection = 10;
    std::function<void()> lectureFunctions[][numLecturesPerSection] = {
            {Lec1_Iomanip, Lec2_Iomanip, Lec3_Iomanip, Lec4_Iomanip, Lec5_Iomanip, Lec6_Iomanip, Lec7_Iomanip, Lec8_Iomanip, Lec9_Iomanip, Lec10_Iomanip},
            {Lec1_Fstream, Lec1_Fstream, Lec1_Fstream, Lec1_Fstream, Lec1_Fstream, Lec1_Fstream, Lec1_Fstream, Lec1_Fstream, Lec1_Fstream, Lec1_Fstream},
    };

    if (lecture >= 1 && lecture <= numLecturesPerSection) {
        lectureFunctions[section - 1][lecture - 1](); // Call the selected lecture function
    } else {
        cerr << "Invalid lecture number" << endl;
    }
}