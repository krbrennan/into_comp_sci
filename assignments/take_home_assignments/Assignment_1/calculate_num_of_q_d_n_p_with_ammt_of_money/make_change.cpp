// Programming Assignment 1 -- Make Change --

// Write a program that prompts the user to input a number of quarters,
// dimes and nickels.  The program then outputs the total value of the coins
// in pennies.

// Kevin Brennan

// Assignment 1 -- due Saturday February 10, 2019


#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
  // Constants for calculating change
  const int quarter = 25;
  const int dime = 10;
  const int nickel = 5;
  const int penny = 1;

  // Solution variables
  int num_quarters = 0;
  int num_dimes = 0;
  int num_nickels = 0;
  int num_pennies = 0;

  // Total size of coins input by the user
  int user_input = 0;

  // Prompt user for input
  cout << "\nProvide me with a number so that I can calculate the total "
  << "number of quarters, dimes, nickels, and pennies\n";
  // Save user input
  cin >> user_input;

  // Error handling. If the user enters a non-int data type, instead of
  // exiting the program without an error message, this do/while loop
  // will run until user_input is of type int.
  do {
    // Clears the stream of unwanted values
    cin.clear();
    // So this was neat to learn about. If I understand this correctly
    // I'm telling the input stream to ignore 1000 characters (hefty)
    // that may have been input by the user. Without the two flags I found
    // that entering more than one letter would cause this do/while loop
    // to prompt the user multiple times at once. Telling it to ignore
    // 1000 characters caused the prompt to only be asked once. Neat!
    cin.ignore(1000, '\n');
    cout << "\nProvide me with a number so that I can calculate the total "
    << "number of quarters, dimes, nickels, and pennies\n";
    cin >> user_input;
  } while(user_input < 1);

  // Looping while user_input is greater than zero
  //
  while(user_input > 0)
  {
    if(user_input >= quarter)
    {
      num_quarters++;
      user_input -= quarter;
    }
    else if(user_input >= dime)
    {
      num_dimes++;
      user_input -= dime;
    }
    else if(user_input >= nickel)
    {
      num_nickels++;
      user_input -= nickel;
    }
    else if(user_input < nickel)
    {
      num_pennies ++;
      user_input -= penny;
    }
  }

  cout << endl << "Quarters: " << num_quarters << endl;
  cout << "Dimes: " << num_dimes << endl;
  cout << "Nickels: " << num_nickels << endl;
  cout << "Pennies: " << num_pennies << endl;

}
