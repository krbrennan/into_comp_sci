// Programming Assignment 5
// Calculating interest

// CISC I (Tuesday/Thursday)
// Kevin Brennan
// Spring 2019

// Due: April 7?

#include <iostream>
#include <iomanip>

using namespace std;

double get_cost(){
  double price;
  cin >> price;
  return price;
}

double calculate_inflation(double price, double price_prior_yr){
  double inflation_rate = (price - price_prior_yr) / price_prior_yr;
  return inflation_rate;
}

double output_results(double one_yr_inflation, double two_yr_inflation){

  cout << endl << setprecision(3) << endl << "One year inflation: " << one_yr_inflation << "%\n";

  cout << endl << setprecision(2) << endl << "Two year inflation: " << two_yr_inflation << "%\n";
  return 0;
}

int main(){

  double current_price, one_yr_price, two_yr_price;

  cout << "\nWhat does the item cost currently?\n";
  current_price = get_cost();

  cout << "\nWhat did the item cost last year?\n";
  one_yr_price = get_cost();

  cout << "\nWhat did the item cost two years ago?\n";
  two_yr_price = get_cost();

  //
  // Calculate inflation
  //
  double one_yr_inflation, two_yr_inflation;

  one_yr_inflation = calculate_inflation(current_price, one_yr_price);
  two_yr_inflation = calculate_inflation(one_yr_price, two_yr_price);

  //
  // Output results
  //
  output_results(one_yr_inflation, two_yr_inflation);

  return 0;
}
