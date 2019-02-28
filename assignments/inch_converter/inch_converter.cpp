// Write a program that takes user input.  The user should enter yards (36 inches),
// feet (12 inches) and then inches.  From this number, then figure out
// how many inches are in the user's entry.


//	Program Name:	inch_converter.cpp
//	Description:	Converts a measurement given in inches to
//						    yards, feet and inches

// Kevin Brennan

// In-Class-Assignment 1 -- due Saturday February 10, 2019


#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
  // Constants for calculating distance
  const int yard = 36;
  const int foot = 12;

  // Solution variables
  int yards = 0;
  int feet = 0;
  int inches = 0;

  // Final solution
  int solution = 0;

  cout << "\nI'm going to calculate the total number of inches based on "
       << "the number of yards, feet, and inches you provide.\n";

  cout << "\n...Provide me with a number of yards...\n";
  cin >> yards;

  // Error handling! If the user inputs anything other than integers
  // then the program should continue to prompt until receiving an int.
  // The error handling collapses when the user inputs a float.
  while(yards < 1)
  {
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "\n...Provide me with a number of yards please...\n";
    cin >> yards;
  };


  cout << "\n...Provide me with a number of feet please...\n";
  cin >> feet;

  while(feet < 1)
  {
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "\n...Provide me with a number of feet please...\n";
    cin >> feet;
  };


  cout << "\n...Provide me with a number of inches please...\n";
  cin >> inches;

  while(inches < 1)
  {
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "\n...Provide me with a number of inches please...\n";
    cin >> inches;
  };

  solution += yard * yards;
  solution += foot * feet;
  solution += inches;

  cout << "\n\nOK so the values you provided comes out to "
       << solution << " inches!\n";
}
