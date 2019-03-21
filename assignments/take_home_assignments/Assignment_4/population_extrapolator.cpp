// Programming assignment 4
// Calculating population growth

// CISC I (Tuesday/Thursday)
// Kevin Brennan
// Spring 2019

// Due March 31, 2019

#include <iostream>
#include <iomanip>


using namespace std;

int main(){

  long town_A_population = 0;
  float town_A_growth_rate = 0;

  long town_B_population = 0;
  float town_B_growth_rate = 0;

  int num_of_years = 0;

  // prompt for town population and growth rates
  cout << endl << "What is the population for Town A?" << endl;
  cin >> town_A_population;
  cout << endl << "What is the population growth rate of Town A? (enter as a whole number)" << endl;
  cin >> town_A_growth_rate;

  cout << endl << endl << "What is the population for Town B?" << endl;
  cin >> town_B_population;
  cout << endl << "What is the population growth rate for Town B? (enter as a whole number)" << endl;
  cin >> town_B_growth_rate;


  float a_increase = town_A_growth_rate / 100;
  float b_increase = town_B_growth_rate / 100;


  while (town_A_population < town_B_population) {
    town_A_population += town_A_population * a_increase;
    town_B_population += town_B_population * b_increase;
    num_of_years++;
  }

  cout << endl << "It will take " << num_of_years << " years until Town A's population is "
  << "greater than Town B's.";
  cout << endl << "Town A population: " << town_A_population
       << endl << "Town B population: " << town_B_population;
}
