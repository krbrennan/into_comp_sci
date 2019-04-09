// A real estate office handles, say, 50 apartment units.
// When the rent is, say, $600 per month, all the units are occupied.
// However, for each, say, $40 increase in rent, one unit becomes vacant.
//  Moreover, each occupied unit requires an average of $27 per month
//  for maintenance. How many units should be rented to maximize
//  the profit?

// Kevin Brennan
// CISC intro to computer science
// Tuesday && Thursday
// In-class assignment 5


#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  int units = 50;
  int rent = 600;
  const int maintenance = 27;
  double total_expenses = maintenance * units;

  double initial_profit_per_month = units * rent - total_expenses;

  int new_rent_price = 640;
  int new_num_of_units = 49;
  double variable_maintenence =  0;
  double new_profit_per_month = new_rent_price * new_num_of_units - maintenance;

  while(initial_profit_per_month <= new_profit_per_month){
    new_rent_price += 40;
    new_num_of_units -= 1;
    variable_maintenence = new_num_of_units * maintenance;
    new_profit_per_month = (new_num_of_units * new_rent_price) - variable_maintenence;
  }

  cout << endl << endl << units - new_num_of_units;
}
