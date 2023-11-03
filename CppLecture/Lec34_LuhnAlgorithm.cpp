//
// Created by Hà Tường Nguyên on 9/14/23.
//

#include "LecturePackage.h"

int oddSum(const string& listNum){
    int sum = 0;
    for (int i = listNum.length() - 1; i >= 0; i-=2){
        sum += (listNum[i] - '0');
    }
    return sum;
}
int evenSum(const string& listNum){
    int sum = 0;
    int num;
    for (int i = listNum.length() - 2; i >= 0; i-=2){
        num = 2*(listNum[i]-'0');
        sum += (num)%10 + (int) (num/10);
    }
    return sum;
}
/**
 *
 * @brief Using Luhn Algorithm to check a credit card number is valid.
 *
 * 1. Double every second digit from right to left\n
 *    If doubled number is 2 digits, split them\n
 * 2. Add all single digits from step 1\n
 * 3. Add all odd numbered digits from right to left\n
 * 4. Sum results from steps 2 & 3\n
 * 5. If step 4 is divisible by 10, # is valid*\n
 *
 * @param cardNumber (string)
 * @return true if valid /false if not valid
 */
bool LuhnAlgorithm(const string& cardNumber){
    int result = evenSum(cardNumber) + oddSum(cardNumber);
    if(result % 10 == 0){
        return true;
    }
    else{
        return false;
    }
}

void Lec34(){
    std::cout << "Lecture 34: LUHN ALGORITHM\n" << std::endl;

    string cardNumber;
    cout << "Enter your credit number: ";
    getline(cin >> ws, cardNumber);

    if(LuhnAlgorithm(cardNumber)){
        cout << cardNumber << " is valid";
    }
    else{
        cout << cardNumber << " is not valid";
    }

}
