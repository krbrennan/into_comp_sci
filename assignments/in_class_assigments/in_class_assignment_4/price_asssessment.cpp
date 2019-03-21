// Samantha and Vikas are looking to buy a house in a new development.
// After looking at various models, the three models they like are colonial,
// split-entry, and single-story. The builder gave them the base price and
// the finished area in square feet of the three models. They want to know
// the model(s) with the least price per square foot. Write a program that
// accepts as input the base price and the finished area in square feet of
// the three models. The program outputs the model(s) with the least price
// per square foot.

// to_do:
// calculate which home-type offers best bang-for-$
// colonial, split-entry, single-story
// input: base price and finished area in sq.ft of the three models
// output: model(s) with the lest price per sq.ft.

// Ask for price and sq foot of each house-type
// Determine which type is cheapest per sq ft

#include <iostream>

using namespace std;

int main(){

  double colonial_cost = 250000;
  double colonial_sq_ft = 2500;
  double colonial_cost_per_ft = colonial_cost / colonial_sq_ft;

  double split_cost = 200000;
  double split_sq_ft = 1800;
  double split_cost_per_ft = split_cost / split_sq_ft;

  double single_cost = 150000;
  double single_sq_ft = 1500;
  double single_cost_per_ft = single_cost / single_sq_ft;

  // I gave up on hard coding the many relationships and I understand why you had us do it! Things can get really messy
  if((colonial_cost_per_ft < split_cost_per_ft) && (colonial_cost_per_ft < single_cost_per_ft)){
    cout << "\nThe colonial is the cheapest! The price per square foot for the colonial house is: $" << colonial_cost_per_ft;
  } else if((split_cost_per_ft < colonial_cost_per_ft) && (split_cost_per_ft < colonial_cost_per_ft)){
    cout << "\nThe split is the cheapest! The price per square foot for the split house is: $" << split_cost_per_ft;
  } else if((single_cost_per_ft < split_cost_per_ft) && (single_cost_per_ft < colonial)){
    cout << "\nThe single is the cheapest! The price per square foot for the single is: $" << single_cost_per_ft;
  } else if(colonial_cost_per_ft == split_cost_per_ft == single_cost_per_ft){
    cout << "\nThey are all the same price! $" << single_cost_per_ft;
  } else {
    cout << "\nPotentially improper data, please check your values and try again\n";
  }
}
