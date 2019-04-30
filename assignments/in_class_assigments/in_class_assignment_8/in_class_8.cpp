// CS115 TUES/THURS
// Spring 2019

// Kevin Brennan
// In-Class Assignmnet 8
// Election Results


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Calculates each candidate's percentage of total votes
float percentageOfVotes(float voteTotal, double votesReceived){
  return (votesReceived / voteTotal) * 100;
}

// Function that determines winner through reference to votes array
int determineWinner(long *ary){
  long highestNumVotes = 0;
  int winnerIndex = 0;
  for (int i = 0; i < 5; i++) {
    if(ary[i] > highestNumVotes){
      highestNumVotes = ary[i];
      winnerIndex = i;
    }
  }
  return winnerIndex;
}

int main(){
  string candidates[5] = {};
  long votes[5] = {};
  double candidatePercentage[5] = {};
  int totalNumVotes = 0;
  int winner = 0;

  cout << endl << "Enter the candidates name and the number of votes they received" << endl;

// Records candidate name and number of votes for each candidate
  for (int i = 0; i < 5; i++) {
    cin >> candidates[i];
    cin >> votes[i];
    totalNumVotes += votes[i];
  }

// Determine each candidate's percentage of votes
  for (int i = 0; i < 5; i++) {
    candidatePercentage[i] = percentageOfVotes(totalNumVotes, votes[i]);
  }

// Labeling the output columns
    cout << setw(5) << "Name" << setw(20) << "Votes" << setw(35) << "Percentage of Votes";

// Outputting candidate name, num of votes, and percentage of votes
  for (int i = 0; i < 5; i++) {
    cout << endl << setw(5) << candidates[i] << setw(20) << votes[i] << setw(25);
    cout << setprecision(2) << candidatePercentage[i] << setprecision(2) << " %" << endl;
  }

  winner = determineWinner(votes);

  cout << endl << "And the winner is: " << candidates[winner] << endl;


}
