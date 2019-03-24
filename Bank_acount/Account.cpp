//************************************************************************
// Contents of Account.cpp
// This is the implementation file that contains the function definitions
// for the class member functions.
//************************************************************************
#include <string>
#include <iostream>
using namespace std; // sdt
#include "Account.h"

Account::Account()
{
  balance = 0;
  accountNumber = 0;
  ownerName = " ";
  interestRate = 0; // interest was not declared
}



Account::Account (double balance, double interestRate, int accountNumber, string ownerName)
{
  balance = balance;
  accountNumber = accountNumber;
  ownerName = ownerName;
}

void Account::displayAccountSummary()
{
  cout << "Account Number: " << accountNumber << endl;
  cout << "Owner's Name : " << ownerName << endl;
  cout << "Balance    : " << balance << endl;
  cout << "Interest rate : " << interestRate << endl;
}

double Account::getBalance()
{
  return balance;
}

void Account::deposit(double deposit)
{
  balance = balance + deposit;
}

void Account::withdraw(double withdraw)
{
  balance = balance - withdraw;
}

void Account::addInterest(double addInterest)
{
  balance = balance * (1 + interestRate);
}
