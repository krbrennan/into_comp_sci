// Write a program that outputs inflation rates for two successive years
// and whether the inflation is increasing or decreasing. Ask the user to
// input the current price of an item and its price one year and two years ago.
// To calculate the inflation rate for a year, subtract the price of the
// item for that year from the price of the item one year ago and then
// divide the result by the price a year ago. Your program must contain
// at least the following functions: a function to get the input, a
// function to calculate the results, and a function to output the results.
// Use appropriate parameters to pass the information in and out of the
// function. Do not use any global variables..

#include <iostream>
#include <iomanip>

using namespace std;

int get_cost(){
  int p;
  int *pointer;

  pointer = &p;
  cin >> *pointer;
  return *p;
}

int main(){
// to calculate inflation:
  // subtract this year from last year
  // then divide that result by the cost from last year

  int current_price;
  double one_yr_inflation, two_yr_inflation;

  cout << "\nWhat does the item cost currently?\n";
  current_price = get_cost();

  cout << current_price;

  // cout << "\nWhat does the item cost currently?\n";
  // cin >> current_price;
  //
  // cout << "\nWhat did the item cost last year?\n";
  // cin >> last_price;
  //
  // cout << "\nWhat did the item cost two years ago?\n";
  // cin >> price_two_yrs_ago;



  // one_yr_inflation = ((current_price - last_price) / last_price);
  // two_yr_inflation = ((current_price - price_two_yrs_ago) / price_two_yrs_ago);



  cout << endl << setprecision(3) << endl << "One year inflation: " << one_yr_inflation << "%";

  cout << endl << setprecision(2) << endl << "Two year inflation: " << two_yr_inflation << "%";


  return 0;
}
