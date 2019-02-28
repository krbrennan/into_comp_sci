// Programming Assignment 1 -- Make Change --

// Write a program that prompts the user to input a number of quarters,
// dimes and nickels.  The program then outputs the total value of the coins
// in pennies.

// Kevin Brennan

// Assignment 1 -- due Saturday February 10, 2019

#include <iostream>

using namespace std;

int main()
{
  const int quarter = 25;
  const int dime = 10;
  const int nickel = 5;

  int quarters = 0;
  int dimes = 0;
  int nickels = 0;

  int solution_pennies = 0;

  cout << "\nI'm going to calculate the total change based on the number "
       << "of coins you provide me with.\n";


  cout << "\n...Provide me with a number of quarters please...\n";
  cin >> quarters;

  // Error handling! If the user inputs anything other than integers
  // then the program should continue to prompt until receiving an int.
  // The error handling collapses when the user inputs a float.
  while(quarters < 1)
  {
    // Clears the stream of unwanted values
    cin.clear();
    // So this was neat to learn about. If I understand this correctly
    // I'm telling the input stream to ignore 1000 characters (hefty)
    // that may have been input by the user. Without the two flags I found
    // that entering more than one letter would cause this do/while loop
    // to prompt the user multiple times at once. Telling it to ignore
    // 1000 characters caused the prompt to only be asked once. Neat!
    cin.ignore(1000, '\n');
    cout << "\n...Provide me with a number of quarters please...\n";
    cin >> quarters;
  };


  cout << "\n...Provide me with a number of dimes please...\n";
  cin >> dimes;

  while(dimes < 1)
  {
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "\n...Provide me with a number of dimes please...\n";
    cin >> dimes;
  };


  cout << "\n...Provide me with a number of nickels please...\n";
  cin >> nickels;

  while(nickels < 1)
  {
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "\n...Provide me with a number of nickels please...\n";
    cin >> nickels;
  };

  solution_pennies += quarters * quarter;
  solution_pennies += dimes * dime;
  solution_pennies += nickels * nickel;

  cout << "\n\nOK so with the change you provided me I've calculated it to be "
       << solution_pennies << " pennies!\n";

}
