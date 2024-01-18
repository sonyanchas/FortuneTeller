//Sharon Onyancha

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int addnumString(string str) {
    unordered_map<char, int> letterandnum = {
        {'a', 1}, {'j', 1}, {'c', 1},
        {'b', 2}, {'k', 2}, {'t', 2},
        {'c', 3}, {'l', 3}, {'u', 3},
        {'d', 4}, {'m', 4}, {'v', 4},
        {'e', 5}, {'n', 5}, {'w', 5},
        {'f', 6}, {'o', 6}, {'x', 6},
        {'g', 7}, {'p', 7}, {'y', 7},
        {'h', 8}, {'q', 8}, {'z', 8},
        {'i', 9}, {'r', 9}
    };
    int sum = 0;
    for (char c : str) {
        if (letterandnum.count(c)) {
            sum += letterandnum[c];
        }
  
    }
    return sum;
}

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; 
        num /= 10; 
    }
    return sum;
}

int main() {
  
  int userint, luckName, luckNum;
  int  PluckName, PluckNum;
  string userName, partnerName;
   cout << "Welcome to the Fanatic Fortune teller! This fortune teller can tell you your lucky number or your partner's lucky number just based on your name (or your partner's name)." << endl;
  while (userint != 3) {
    cout << "********************" << endl;
    cout << "1. Find your lucky number." << endl;
    cout << "2. Find your partner's lucky number." << endl;
    cout << "3. Quit." << endl;
    cin >> userint;
  if (userint == 1) {
    cout << "Enter your name: " << endl;
    cin >> userName;
    luckName = addnumString(userName);
    luckNum = digitSum (luckName);
    if (luckNum > 10) 
      luckNum = digitSum (luckNum);
    cout << luckNum << endl;
  }
  if (userint == 2) {
    cout << "Enter your partner's name: " << endl;
    cin >> partnerName;
    PluckName = addnumString(partnerName);
    PluckNum = digitSum (PluckName);
    if (PluckNum > 10) 
      PluckNum = digitSum (PluckNum);
    cout << PluckNum << endl;
  }}
}