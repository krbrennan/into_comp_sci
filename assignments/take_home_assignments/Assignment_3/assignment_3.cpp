// Kevin Brennan
// Take-home programming assignment 3
// Calculate cost of renting rooms at a hotel
// CISC 115 Tuesday/Thursday 12:30-2:10
// Due March 5, 2019

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

  // Storing room discounts here in case they need to be amended later
  const float ten_or_more_rooms = 0.10;
  const float twnty_or_more_rooms = 0.20;
  const float thrty_or_more_rooms = 0.30;
  const float more_three_nights_discount = 0.05;

  bool three_night_discount = false;

  int rooms_rented = 0;
  int nights_stay = 0;
  int cost_before_tax = 0;

  float initial_taxed_cost = 0.0;
  float discount_perentage = 0.0;
  float cost_per_night = 100.0;
  float sales_tax = 0.06;
  float total_cost = 0.0;
  float money_saved = 0.0;

  cout << endl << "Hello! Welcome to Hotel California. Our rooms are "
       << "$100 a night but renting for events at volumes greater than 10 "
       << "will net you some serious discounts."<< endl << endl
       << "How many rooms are you looking to rent?" << endl;
  cin >> rooms_rented;
  cout << endl << "For how many nights will you be staying?" << endl;
  cin >> nights_stay;

  // calculating total cost w/out tax
  total_cost += (nights_stay * cost_per_night) * rooms_rented;
  cost_before_tax += (nights_stay * cost_per_night) * rooms_rented;
  // Calculating total cost with tax
  initial_taxed_cost += (nights_stay * cost_per_night) * rooms_rented;
  initial_taxed_cost += (initial_taxed_cost * sales_tax);

  // Determining if the 5% discount needs to be applied
  nights_stay >= 3 ? three_night_discount = true : three_night_discount = false;

  // Applying the 5% discount if staying >= 3 nights
  if(three_night_discount){
    discount_perentage += more_three_nights_discount;
  }

  if(rooms_rented >= 30){
    discount_perentage += thrty_or_more_rooms;
  } else if(rooms_rented >= 20){
    discount_perentage += twnty_or_more_rooms;
  } else if(rooms_rented >= 10){
    discount_perentage += ten_or_more_rooms;
  };

  // Calculating total cost after applying discounts
  if(discount_perentage > 0){
    total_cost -= (total_cost * discount_perentage);
  }
  // Calculating total cost with sales tax
  total_cost += total_cost * sales_tax;

  cout << endl << "Thank you. So you are looking to book " << rooms_rented
       << " room(s) for " << nights_stay << " night(s)." << endl;
  if(discount_perentage > 0){
    cout << "The cost of renting one room for one night is $100" << endl;
    cout << "In total you saved " << discount_perentage << "% on your stay" << endl;
    cout << "Before tax your total comes out to: $" << cost_before_tax << endl;
    cout << "After applying a " << sales_tax << "% sales tax your total billing amount comes out to: "
         << total_cost << endl;

    cout << "Thank you for choosing Hotel California. We hope you enjoy your stay (Muhaha)!";
  } else {
    cout << endl << "For renting " << rooms_rented << " room(s) for " << nights_stay << " night(s) "
         << "your taxed total comes to be: $" << total_cost << endl << endl
         << "Thank you for choosing Hotel California. We hope you enjoy your stay (Muhaha)!";
  }
}
