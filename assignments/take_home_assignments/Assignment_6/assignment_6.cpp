// 	Write a C++ program that contains 2 functions.  LastLargestIndex, that takes as parameters an int array and
//  its size and returns the index of the first occurrence of the largest element
//  in the array. Also, write a function to display the array.

// #include "pch.h"

#include <iostream>

using namespace std;

const int ARRAY_SIZE = 15;

int lastLargestIndex(const int list[], int ARRAY_SIZE){
  int indexOfLargestNum = 0;
  int largestNum = 0;

  for (int i = 0; i < ARRAY_SIZE; i++) {
    if(list[i] >= largestNum){
      largestNum = list[i];
      indexOfLargestNum = i;
    }
  }
  return indexOfLargestNum;
}

int printArray(int list[], int ARRAY_SIZE){
  for (int i = 0; i < ARRAY_SIZE; i++) {
    i == ARRAY_SIZE - 1 ? cout << list[i] : cout << list[i] << ",";
  }
  return 0;
}


int main(){
	int list[ARRAY_SIZE] = { 56, 34, 67, 54, 23, 87, 66, 92, 15, 32,
							55, 54, 88, 92, 30 };

	cout << "List elements: ";
	printArray(list, ARRAY_SIZE);
	cout << endl;

	cout << "The position of the last occurrence of the largest "
		<< "element in list is: "
		<< lastLargestIndex(list, ARRAY_SIZE) << endl;
	cout << "The largest element in list is: "
		<< list[lastLargestIndex(list, ARRAY_SIZE)]
		<< endl << endl;

	return 0;
}
