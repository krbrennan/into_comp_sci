#include <iostream>
using namespace std;


int main() {

  int counter = 3;

  long long last_num = 1;
  long long second_last = 1;

  int num_of_fibs;

  cout << "\nHow many fibs?\n";
  cin >> num_of_fibs;

  while(counter <= num_of_fibs){
    int new_num = last_num + second_last;
    second_last = last_num;
    last_num = new_num;
    counter++;
  }
  cout << endl << num_of_fibs << " terms of fibonacci would come out to: " << last_num;

}
