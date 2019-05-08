#include "./houseStruct.cpp"

#include <iostream>


using namespace std;

// struct HouseType {
//   string type;
//   string color;
//   int numBedrooms;
//   int numBathrooms;
// };

int main(){

  HouseType houseType;

  cout << endl << "What type of house do you own?";
  cin >> houseType.type;
  cout << endl << "What color is your house?" << endl;
  cin >> houseType.color;
  cout << endl << "How many bedrooms does your house have?";
  cin >> houseType.bedrooms;
  cout << endl << "How many bathrooms does your house have?";
  cin >> houseType.bathrooms;

}
