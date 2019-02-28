
// #include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{

	string fName1, lName1, fName2, lName2, fName3, lName3;
	double salary1, salary1inc, salary2, salary2inc, salary3, salary3inc;

	ifstream salaryIn;
	ofstream salaryOut;

	salaryIn.open("input_data.txt");
	salaryOut.open("solution.txt");

	salaryIn >> fixed >> showpoint;
	salaryIn >> setprecision(2);

	salaryIn >> lName1 >> fName1 >> salary1 >> salary1inc;
	salaryIn >> lName2 >> fName2 >> salary2 >> salary2inc;
	salaryIn >> lName3 >> fName3 >> salary3 >> salary3inc;

	double updatedSalary1 = salary1 + (salary1 * (salary1inc / 100));
	double updatedSalary2 = salary2 + (salary2 * (salary2inc / 100));
	double updatedSalary3 = salary3 + (salary3 * (salary3inc / 100));

	salaryOut << fixed << showpoint;
	salaryOut << setprecision(2);

	salaryOut << setw(12) << "First Name" << setw(12) << "Last Name" << setw(30) << "Salary after Increase" << endl;

	salaryOut << setw(12) << fName1 << setw(12) << lName1 << setw(30) << updatedSalary1 << endl;
	salaryOut << setw(12) << fName2 << setw(12) << lName2 << setw(30) << updatedSalary2 << endl;
	salaryOut << setw(12) << fName3 << setw(12) << lName3 << setw(30) << updatedSalary3 << endl;

	return 0;
}
