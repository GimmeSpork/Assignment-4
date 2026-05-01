/******************************************************************************
# Author:           Lucy Price
# Assignment:       Assignment 4 - Phrases and Subphrases program
# Date:             April 30, 2026
# Description:      This program will take string inputs from the user and
#                   output whether or not phrase 1 was found in phrase 2 or
#                   the other way around. It will also say if the phrases
#                   match, or do not match. It will then print the phrase
#                   that matches, and where it starts in the other phrase.
# Input:            phrase1 and phrase2 as strings.
# Output:           phrase1 and phrase2 as strings.
# Sources:          Assignement 4 resources, recorded zoom of class and
#                   zybooks, chapter 4 section 4.12.
#******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

// Main function
int main() {

//Declare variables
string phrase1;
string phrase2;


cout << "Welcome to the Phrases and Subphrases program!" << endl;

cout << "\nEnter Phrase 1: ";
getline (cin, phrase1);
cout << "You Entered: " << phrase1;
cout << "\nEnter Phrase 2: ";
getline (cin, phrase2);
cout << "You Entered: " << phrase2 << endl;

//if else statements  //declaring more variables
//finding words inside of both phrases
size_t phrase2_in_phrase1 = phrase1.find(phrase2);
size_t phrase1_in_phrase2 = phrase2.find(phrase1);

if(phrase2 == phrase1) {  //
  cout << "\nBoth phrases match." << endl;
}
else if(phrase2_in_phrase1 != std::string::npos) { //
  cout << "\n" << phrase2 << " is found in " << phrase1 << endl;
  cout << phrase1.substr(phrase2_in_phrase1) << endl;
}
else if(phrase1_in_phrase2 != std::string::npos) {  //
  cout << "\n" << phrase1 << " is found in " << phrase2 << endl;
  cout << phrase2.substr(phrase1_in_phrase2) << endl;
}
else {  //
  cout << "\nNo match." << endl;
}

//Goodbye message
cout << "\nThank you for using my program!" << endl;

  return 0;
}

