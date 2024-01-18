//Sharon Onyancha

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

//Create a function called welcomeFunc that displayes a welcome message.
//Create a function called personFunc that uses the variable choice to indicate what personality the user has.
//Create a function called Menu that displays the menu at the beginning of the function for the user to pick from.
//Create a function called FortuneRand that uses the variable x to choose which of the fortunes it will choose to display.
//Create a function called LovesMe that goes through a for loop and returns if the user 'is loved by the partner' and a display of a flower depending on the variable x
//Create a function called addNumString that correlates a letter to a number and adds those numbers together into a sum
//Create a function called digitSum that takes those numbers, seperates the two or three digit places and adds them together.
//Define the variables: int userint, luckName, luckNum, PluckName, PluckNum randFort and userName, partnerName, pLovesMe, pString, personAlity;
//Display the welcome function using welcomeFunc()
//Make a while function that uses the functions above with the variables to do specific actions [explained below]

void welcomeFunc() { // Welcome function at the beginning of the program.
  cout << "Welcome to the Fanatic Fortune Teller! This fortune teller can tell you your lucky number or your partner's lucky number just based on your name (or your partner's name) This fortune teller can also tell you your personality, and a fortune." << endl;
}
//
void personFunc (int choice) { // Personality function that uses case statement
   switch (choice) { // Use 'choice' to represent lucky number that would be used to find the personality type.
    case 1:
      cout << "Pioneering, Leading, Independent, Attaining, Individualistic" << endl;
      break;
    case 2:
      cout << "Cooperation, Adaptability, Considering, Partnering, Mediating" << endl;
      break;
    case 3:
      cout << "Expression, Verbalization, Socialization, Arts, Joy of living" << endl;
      break;
    case 4:
      cout << "Values foundation, Service, Struggle against limits, Steady growth" << endl;
      break;
    case 5:
      cout << "Expansiveness, Visionary, Adventure, Constructive use of freedom" << endl;
      break;
    case 6:
      cout << "Responsibility, Protection, Nurturing, Balance, Sympathy" << endl;
      break;
    case 7:
      cout << "Analysis, Understanding, Awareness, Studious, Meditating" << endl;
      break;
    case 8:
      cout << "Practical Endeavors, Status Oriented, Power-seeking, High-material goals" << endl;
      break;
    case 9:
      cout << "Humanitarian, Giving, Selflessness, Obligations, Creative expression" << endl;
      break;
    case 10:
      cout << "Higher spiritual plane, Intuitive, Illumination, Idealist, A Dreamer" << endl;
      break;
    default: // If an number 1-10 is somehow entered, it will not work.
      cout << "Invalid number." << endl;
  }}
//
void Menu () { // Menu that is presented at the beginning of the while loop.
    cout << "********************" << endl;
    cout << "1. Find your lucky number, personality, and fortune." << endl;
    cout << "2. Find your fortune with your partner." << endl;
    cout << "3. Quit." << endl;
}
//
string FortuneRand(int x) { // Function that will use a random number generator in the main program to caluculate the fortune.
    string fortunes[10] = {
        "You will soon embark on a great adventure!",
        "Good things come to those who wait, but better things come to those who work for it.",
        "An unexpected windfall is in your future.",
        "You will find love in the most unexpected place.",
        "Your creative talents will soon be recognized and rewarded.",
        "The future holds great promise and opportunity for you.",
        "You will achieve success in all your endeavors.",
        "You will make new friends and forge lasting relationships.",
        "You will find inner peace and happiness.",
    "What good are wings, without the courage to fly."
};
return fortunes[x]; //return fortune back to main when variable is usd.
}
//
void LovesMe(int x) { // Function that repeatedly goes through a while loop to provide text art and text on whether Partner loves the user or not.
  int count = 0;
  string indicator = "Loves Me"; // string always first equals loves me.
  while (count <= x) { // count has to be less than or equal to x to continue
    switch (count) { // switch statement used to show the text art before the indicator is switched and or printed
      case 0:
        cout <<" @@@@\n"
               " @()@\n"
                " @@@@\n" 
                "  /   \n" 
              " \ |     \n"
              " \\|// \n";
      break;
    case 1:
        cout <<" @@@@\n"
               " @()@\n"
                " @@@\n" 
                "  /   \n" 
              " \ |     \n"
              " \\|// \n";
      break;
    case 2:
        cout <<" @@@@\n"
               " @()@\n"
                " @@\n" 
                "  /   \n" 
              " \ |     \n"
              " \\|// \n";
      break;
    case 3:
      cout <<" @@@@\n"
               " @()@\n"
                " @\n" 
                "  /   \n" 
              " \ |     \n"
              " \\|// \n";
      break;
    case 4:
       cout <<" @@@@\n"
               " @()@\n"
                " \n" 
                "  /   \n" 
              " \ |     \n"
              " \\|// \n";
      break;
    case 5:
       cout <<" @@@@\n"
               "  ()@\n"
                " \n" 
                "  /   \n" 
              " \ |     \n"
              " \\|// \n";
      break;
    case 6:
        cout <<" @@@@\n"
               "  () \n"
                " \n" 
                "  /   \n" 
              " \ |     \n"
              " \\|// \n";
      break;
    case 7:
      cout <<"  @@@\n"
               "  () \n"
                " \n" 
                "  /   \n" 
              " \ |     \n"
              " \\|// \n";
      break;
    case 8:
        cout <<"   @@\n"
               "  () \n"
                " \n" 
                "  /   \n" 
              " \ |     \n"
              " \\|// \n";
      break;
    case 9:
       cout <<"    @\n"
               "  () \n"
                " \n" 
                "  /   \n" 
              " \ |     \n"
              " \\|// \n";
      break;
      case 10:
       cout <<" \n"
               "  () \n"
                " \n" 
                "  /   \n" 
              " \ |     \n"
              " \\|// \n";
      break;
    }
    if (indicator == "Loves Me") { //If string equal "Loves Me" it will switch to equal "Loves Me Not" and then print it.
      cout << indicator << endl;
      indicator = "Loves Me Not";
    } else if (indicator == "Loves Me Not") {
      cout << indicator << endl;
      indicator = "Loves Me";
    }
    count = count + 1; // Increase count by one everytime it goes through the while.

  } cout << "Your final answer is: " << indicator << endl; //Prints final answer clearer
}
  

int addnumString(string str) { //Organizes the letter to a number and assigns the numbers to the specific letters.
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
    for (char c : str) { //Adds the letters together and gives back a number value.
        if (letterandnum.count(c)) {
            sum += letterandnum[c];
        }
  
    }
    return sum;
}

int digitSum(int num) { //Seperates the numbers into two and adds them together
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
  int randFort;
  string userName, partnerName, pLovesMe, pString, personAlity;
  //initializing all the variables in the main.

   welcomeFunc(); // Welcome function presented in the beginning of the program
  while (userint != 3) { // When userint does not equal 3, the loop will continue to do other options stated below.
    Menu();
    cout << "Enter your choice: ";
    cin >> userint; // User enters their choice that they choose from the menu.
    
  if (userint == 1) { // Uses and if/else statement to navigate through the menu
    
    cout << "Enter your name: " << endl;
    cin >> userName; // Inputs the name into the variable userName
    luckName = addnumString(userName); // Uses the name inputed to put into the addNumString function and save its under the variable luckName
    luckNum = digitSum (luckName); //Uses luckName and turns into a number  
    if (luckNum > 10) { //If luckNum is bigger than 10 do the function again.
      luckNum = digitSum (luckNum);
    }
    cout << "Your lucky number is: " << luckNum << endl;
    srand(time(0)); //Initialize a random number
    randFort = rand() % 11; //randFort is a random number generator from 0-10
    cout << "Your fortune is: " << FortuneRand(randFort) << endl; //Uses randFort variable to pick a fortune from the FortuneRand variable
    cout << "********************" << endl;
    cout << "Your personality is: ";
    personFunc(luckNum); //Uses luckNum variable to pick from the case statement in personFunc
  }
    
  if (userint == 2) {
    cout << "Enter your partner's name: " << endl;
    cin >> partnerName;
    PluckName = addnumString(partnerName); // Uses the name inputed to put into the addNumString function and save its under the variable PluckName
    PluckNum = digitSum (PluckName); //Uses PluckName and turns into a number  
    
    if (PluckNum > 10) { //If luckNum is bigger than 10 do the function again.
      PluckNum = digitSum (PluckNum);
  }
     cout << partnerName << "'s lucky number is: " << PluckNum << endl;
      cout << "********************" << endl;
    cout << "Our partner's fortune choice also includes a Loves Me / Loves Me Not feature that simulates picking a flower but digital!" << endl; 
    cout << "********************" << endl;
     cout << "Do you wanna try our partner 'Loves Me / Loves Me Not' feature? Enter 'yes or no'" << endl;
    cin >> pString;
if (pString == "Yes" || pString == "yes" || pString == "y") { //If user enters any of the words above
  cout << "According to your partner's lucky number, your answer is: ";
  cout << endl;
  LovesMe(PluckNum); //Uses PluckNum to determine how many times the for loop goes in the LovesMe function
  cout << endl;
}
  
else if (pString == "No" || pString == "no" || pString == "n") { //If user enters any of the words above
  continue; //loop continues
}
  
else {
  cout << "Not a valid answer, going to the beginning." << endl;
  continue; //loop continues
}


  }
}
cout << "Thank you for using the Fanatic Fortune Teller. Goodbye!" << endl; //Prints ending message after user leaves the while loop.
  return 0; //
}