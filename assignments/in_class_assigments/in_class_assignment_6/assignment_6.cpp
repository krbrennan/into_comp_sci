// Assignment 6
// Kevin Brennan
// CS115 TUESDAY / THURSDAY
// Calculating tax firm cost

#include <iostream>
using namespace std;

int determine_billing_ammt(double hourly_rate, int total_consulting_time, bool poor){

  double total;

  if(poor) {
    total_consulting_time <= 30 ? total = 0 : total = (hourly_rate * total_consulting_time) * 0.40;
  } else {
    total_consulting_time <= 20 ? total = 0 : total = (hourly_rate * total_consulting_time) * 0.7;
  }
  return total;
}

int main(){
  
  double hourly_rate = 1.07;
  int total_consulting_time;
  char poor_or_not;
  bool poor;

  double total_billing_ammt;

  cout << endl << "What was your total consulting time?\n";
  cin >> total_consulting_time;

  cout << endl << "Do you earn less than $25,000 a year? Respond with \'Y\' or \'N\'\n";
  cin >> poor_or_not;
  poor_or_not == 'Y' ? poor = true : false;

  total_billing_ammt = determine_billing_ammt(hourly_rate, total_consulting_time, poor);
  cout << "\nYour total comes out to: $" << total_billing_ammt << endl;
}
