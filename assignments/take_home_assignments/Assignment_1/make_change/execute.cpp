//Programming Assignment 1

// Write a program that:
 // prompts the user to input a number of quarters, dimes and nickels.

// The program then outputs the total value of the coins in pennies.

// Kevin Brennan
// CS1_03: Tuesday/Thursday 12:30-1:50
// Assignment # 1
// Due Feb. 10



#include <iostream>

using namespace std;

int main()
{
  int result = 0;

  const int quarter = 25;
  const int dime = 10;
  const int nickel = 5;

  int quarters = 0;
  int dimes = 0;
  int nickels = 0;

  cout << "\n Alright so I'm going to magically calculate total change"
       << " given a number of quarters, dimes, and nickels provided by you";

  cout << "\n\n How many quarters?\n";
  cin >> quarters;
  cout << "\n How many dimes?\n";
  cin >> dimes;
  cout << "\n How many nickels?\n";
  cin >> nickels;

  cout << "\n...Calculating...\n";

  result += (quarters * quarter);
  result += (dimes * dime);
  result += (nickels * nickel);

  cout << quarters << " Quarters, "<< dimes << " Dimes, and " << nickels << " Nickels "
       << "\ncomes out to a total of " << result << " pennies! \n\n";

}
