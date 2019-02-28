// Kevin Brennan
// Programming Assignment 2 -- calculate total sales from input file
// CISC 115
// Class meets Tuesday/Thursday 12:30 -- 2:15?
// Assignment due March 5, 2019


// Your friend is selling tickets and is keeping track of the sales with a file.
// The output file has 2 fields, the price of the ticket and then the number of tickets.
//
// He needs a program that will total up the total sales for each ticket
// range (250, 100, 50 and 25) respectively.  He would also like to see a
// grand total of sales.

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  int value;
  // This garbage int is where I put all of the ticket sale ranges
  int garbage;
  long ticket_250, ticket_100, ticket_50, ticket_25;
  int ticket_total;

  ifstream inData;
  inData.open("./data.txt");

  // Here's where I collect the data for the ticket ranges
  inData >> garbage >> ticket_250 >> garbage >> ticket_100 >> garbage
         >> ticket_50 >> garbage >> ticket_25;

  inData.close();

  // Here's where I calculate what the ticket sales are for each category
  ticket_250 *= 250;
  ticket_100 *= 100;
  ticket_50 *= 50;
  ticket_25 *= 25;

  // Now that the ticket sale categories have been calculated, here's where
  // the gross sale value is evaluated
  ticket_total = ticket_250 + ticket_100 + ticket_50 + ticket_25;

  cout << setw(12) << "Ticket Range:" << setw(20) << "Total sales:" << endl;
  cout << setw(12) << "250" << setw(20) << ticket_250 << endl;
  cout << setw(12) << "100" << setw(20) << ticket_100 << endl;
  cout << setw(12) << "50" << setw(20) << ticket_50 << endl;
  cout << setw(12) << "25" << setw(20) << ticket_25 << endl;
  cout << endl << setw(12) << "Total Sales:" << setw(20) << ticket_total << endl;
}
