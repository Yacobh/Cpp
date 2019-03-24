#ifndef ACCOUNT_H
#define ACCOUNT_H


// This excercise simulates managing a simple bank account.
//
//***********************************************************************
// The contents of Account.h
// This is the specification file that contains the class declaration.
//***********************************************************************
//

#include <string>
using namespace std;
class Account
{
public:
  Account();    // default constructor must have the same name that the class
  Account (double balance, double interestRate, int accountNumber, string onwerName);
  void displayAccountSummary();
  double getBalance();
  void deposit (double);
  void withdraw (double);
  void addInterest(double); // void addInterest();
private:
  double balance;
  double interestRate;
  string ownerName;
  int accountNumber;
  
};

#endif
