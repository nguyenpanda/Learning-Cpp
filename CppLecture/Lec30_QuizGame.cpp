//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include "LecturePackage.h"

template<typename T> void displayArrElement(T array[], int size){
    for (int i = 0; i<size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
int totalSum(bool array[], int size){
    int total = 0;

    for(int i = 0; i < size; i++){
        total += array[i];
    }

    return total;
}
namespace quiz{
    string question[] = {"",
                         "",
                         "",
                         "",
                         "",
                         "",
                         "",
                         ""};
    int questionSize = sizeof(quiz::question) / sizeof(quiz::question[0]);

    const int optionSize = 4; // Max 6
    string option[][optionSize] ={{"", "", "", ""},
              {"", "", "", ""},
              {"", "", "", ""},
              {"", "", "", ""},
              {"", "", "", ""},
              {"", "", "", ""},
              {"", "", "", ""},
              {"", "", "", ""}};

    char key[] = {'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D'};
}
void displayQuestion(string question[], int index){
    cout << "#########################" << endl;
    cout << "Q" << index+1 << ". " << question[index] << endl;
    cout << "~ ~ ~" << endl;
}
void displayOption(string option[][4], int size, int index){
    int i = 0;
    do {
        switch (i) {
            case 0:
                cout << "A: " << option[index][i] << endl;
                break;
            case 1:
                cout << "B: " << option[index][i] << endl;
                break;
            case 2:
                cout << "C: " << option[index][i] << endl;
                break;
            case 3:
                cout << "D: " << option[index][i] << endl;
                break;
            case 4:
                cout << "E: " << option[index][i] << endl;
                break;
            case 5:
                cout << "F: " << option[index][i] << endl;
                break;
            default:
                cerr << "Error: void DisplayOption() out of range!";
                break;
        }
        i++;
    } while (i < 4);
    cout << endl;
}
char userInput(const string& str, const string& ErrStr){
    char input;
    cout << str;
    cin >> input;
    input = toupper(input);

    while (true){
        switch (input){
            case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
                return input;
            default:
                cout << ErrStr;
                cin >> input;
                input = toupper(input);
        }
    }
}
bool isCorrectAns(char userInput, char key){
    if (userInput == key){
        return true;
    } else {
        return false;
    }
}
void My_QuizGame(){
    const int optionSize = quiz::questionSize;
    char userAnswer[optionSize];
    bool userScore[optionSize];

    for (int i=0; i<optionSize; i++){
        displayQuestion(quiz::question, i);
        displayOption(quiz::option, optionSize, i);
        userAnswer[i] = userInput("Choice your answer as A, B, C and D: ",
                                  "Make sure that you enter a valid character (A, B, C, or D): ");
        userScore[i] = isCorrectAns(userAnswer[i], quiz::key[i]);
        if (userScore[i]){
            cout << "---> " << userAnswer[i] << " is Correct!!!" << endl;
        } else {
            cout << "---> " << userAnswer[i] << " is Wrong!!!" << endl;
        }
    }

    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout << "@-----------RESULT-----------@" << endl;
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout << "List of key answers: ";

    displayArrElement(quiz::key, quiz::optionSize);

    cout << "List of your choice: ";
    displayArrElement(userAnswer, quiz::optionSize);

    double result = totalSum(userScore, quiz::optionSize);

    cout << "There are " << result << "/" << quiz::optionSize << " correct" << endl;
    cout << "Score: " << 100*result /quiz::optionSize << "%";
}

void BroCode(){
    string questions[] = {"1. What year was C++ created?: ",
                          "2. Who invented C++?: ",
                          "3. What is the predecessor of C++?: ",
                          "4. Is the Earth flat?"};

    string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                           {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                           {"A. C", "B. C+", "C. C--", "D. B++"},
                           {"A. yes", "B. no", "C. sometimes", "D. what's Earth?"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        cout << "*******************************\n";
        cout << questions[i] << '\n';
        cout << "*******************************\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            cout << options[i][j] << '\n';
        }

        cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            cout << "CORRECT\n";
            score++;
        }
        else{
            cout << "WRONG!\n";
            cout << "Answer: " << answerKey[i] << '\n';
        }
    }
    cout << "*******************************\n";
    cout << "*           RESULTS           *\n";
    cout << "*******************************\n";
    cout << "CORRECT GUESSES: " << score << '\n';
    cout << "# of QUESTIONS: " << size << '\n';
    cout << "SCORE: " << (score/(double)size)*100 << "%";
}

void Lec30(){
    std::cout << "Lecture 30: QUIZ GAME\n" << std::endl;

    My_QuizGame();
//    BroCode();
}