/**
 * @file rock_paper_scissors.cpp
 * @brief A simple Rock-Paper-Scissors game in C++.
 */

//
// Created by Hà Tường Nguyên on 9/13/23.
//

#include <ctime>
#include "LecturePackage.h"

// ---------------------------------------------------------

/**
 * @brief Get the user's choice for Rock-Paper-Scissors.
 *
 * This function displays the available choices to the user and prompts them
 * to enter their choice as a number. It validates the input to ensure it is
 * within the range [1, 3].
 *
 * @return An integer representing the user's choice (1 for Rock, 2 for Paper, 3 for Scissors).
 */
int userChoice() {
    int userInput;
    cout << "1. Rock\n2. Paper\n3. Scissors\nEnter your choice as a number: ";
    cin >> userInput;

    // Validate user input
    while (userInput < 1 || userInput > 3) {
        cout << "Please enter a valid number (1, 2, or 3): ";
        cin >> userInput;
    }

    return userInput;
}
/**
 * @brief Generate the computer's choice for Rock-Paper-Scissors.
 *
 * This function uses pseudo-random number generation to choose an integer
 * between 1 and 3, representing the computer's choice.
 *
 * @return An integer representing the computer's choice (1 for Rock, 2 for Paper, 3 for Scissors).
 */
int npcChoice() {
    srand(time(0));
    return (rand() % 3) + 1;
}
/**
 * @brief Convert an integer choice to its corresponding string representation.
 *
 * This function takes an integer choice (1, 2, or 3) and returns the string
 * representation of the choice (e.g., "rock", "paper", "scissors").
 *
 * @param choice An integer representing the choice (1 for Rock, 2 for Paper, 3 for Scissors).
 * @return A string representing the choice.
 */
string intConvert(int choice) {
    switch (choice) {
        case 1:
            return "rock";
        case 2:
            return "paper";
        case 3:
            return "scissors";
        default:
            cerr << "intConvert(int choice): Choices are in the range 1 to 3" << endl;
            return "Wrong input";
    }
}
/**
 * @brief Check if the game result is a draw.
 *
 * This function checks if the user's choice is the same as the computer's
 * choice, indicating a draw in the Rock-Paper-Scissors game.
 *
 * @param user An integer representing the user's choice (1 for Rock, 2 for Paper, 3 for Scissors).
 * @param npc An integer representing the computer's choice (1 for Rock, 2 for Paper, 3 for Scissors).
 * @return True if it's a draw, false otherwise.
 */
bool isDraw(int user, int npc) {
    return user == npc;
}
/**
 * @brief Check if the user wins in the Rock-Paper-Scissors game.
 *
 * This function checks if the user's choice beats the computer's choice
 * based on the rules of the game.
 *
 * @param user An integer representing the user's choice (1 for Rock, 2 for Paper, 3 for Scissors).
 * @param npc An integer representing the computer's choice (1 for Rock, 2 for Paper, 3 for Scissors).
 * @return True if the user wins, false otherwise.
 */
bool isUserWin(int user, int npc) {
    return (user == npc % 3 + 1) && (user != npc);
}
/**
 * @brief Play a single round of the Rock-Paper-Scissors game and display the result.
 *
 * This function combines userChoice(), npcChoice(), intConvert(),
 * isDraw(), and isUserWin() to simulate a single round of the Rock-Paper-Scissors game.
 * It displays the user's and computer's choices and the result of the game.
 */
void RPS_Game() {
    cout << "---------------------" << endl;
    int user = userChoice();
    cout << "---------------------" << endl;
    int npc = npcChoice();

    cout << "Your choice: " << intConvert(user) << endl;
    cout << "NPC's choice: " << intConvert(npc) << endl;

    if (isDraw(user, npc)) {
        cout << "Result: It's a draw!" << endl;
    } else if (isUserWin(user, npc)) {
        cout << "Result: Player wins!" << endl;
    } else {
        cout << "Result: NPC wins!" << endl;
    }
}

// ---------------------------------------------------------

char getUserChoice(){
    char player;
    cout << "Rock-Paper-Scissors Game!\n";

    do{
        cout << "Choose one of the following\n";
        cout << "*************************\n";
        cout << "'r' for rock\n";
        cout << "'p' for paper\n";
        cout << "'s' for scissors\n";
        cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }

    return 0;
}
void showChoice(char choice){
    switch(choice){
        case 'r': cout << "Rock\n";
            break;
        case 'p': cout << "Paper\n";
            break;
        case 's': cout << "Scissors\n";
            break;
    }
}
void chooseWinner(char player, char computer){
    switch(player){
        case 'r': 	if(computer == 'r'){
                cout << "It's a tie!\n";
            }
            else if(computer == 'p'){
                cout << "You lose!\n";
            }
            else{
                cout << "You win!\n";
            }
            break;
        case 'p': 	if(computer == 'r'){
                cout << "You win!\n";
            }
            else if(computer == 'p'){
                cout << "It's a tie!\n";
            }
            else{
                cout << "You lose!\n";
            }
            break;
        case 's': 	if(computer == 'r'){
                cout << "You lose!\n";
            }
            else if(computer == 'p'){
                cout << "You win!\n";
            }
            else{
                cout << "It's a tie!\n";
            }
            break;
    }
}
void BroCode_RPS_Game(){
    char player;
    char computer;

    player = getUserChoice();
    cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);
    cout << "---------------------" << endl;
}

// ---------------------------------------------------------

void Lec20() {
    std::cout << "Lecture 20: ROCK-PAPER-SCISSOR GAME\n" << std::endl;
    RPS_Game();
//    cout << '\n';
//    BroCode_RPS_Game();
}

// Test case
/*
    cout << "12" << isUserWin(1, 2) << endl;
    cout << "Except: 0" << endl;

    cout << "13" << isUserWin(1, 3) << endl;
    cout << "Except: 1" << endl;

    cout << "21" << isUserWin(2, 1) << endl;
    cout << "Except: 1" << endl;

    cout << "23" << isUserWin(2, 3) << endl;
    cout << "Except: 0" << endl;

    cout << "31" << isUserWin(3, 1) << endl;
    cout << "Except: 0" << endl;

    cout << "32" << isUserWin(3, 2) << endl;
    cout << "Except: 1" << endl;
 */