// Write a program that takes a value then determine how many
// quarters, dimes, and nickels there might be


  #include <iostream>
  using namespace std;

  int main()
  {
    int num_quarters = 0;
    int num_dimes = 0;
    int num_nickels = 0;
    int num_pennies = 0;

    int user_input;

    const int quarter = 25;
    const int dime = 10;
    const int nickel = 5;
    const int penny = 1;

    cout << "\n Provide me with a value \n";
    cin >> user_input;

    while(user_input > 0) {

      if(user_input >= quarter){
        num_quarters++;
        user_input -= quarter;
      } else if(user_input >= dime){
        num_dimes++;
        user_input -= dime;
      } else if(user_input >= nickel){
        num_nickels++;
        user_input -= nickel;
      } else if(user_input < nickel){
        num_pennies ++;
        user_input -= penny;
      }
    }

    cout << endl << "Quarters: " << num_quarters << endl;
    cout << "Dimes: " << num_dimes << endl;
    cout << "Nickels: " << num_nickels << endl;
    cout << "Pennies: " << num_pennies << endl;
  }
