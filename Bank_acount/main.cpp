//************************************************************************
// Contents
//************************************************************************

#include <string>
#include <iostream>
using namespace std;
#include "Account.h"
         
int main()
{
  Account myAccount(1000.50,05,1111,"John William");
  myAccount.deposit(500);
  myAccount.withdraw(200);
  myAccount.addInterest(0);
  myAccount.displayAccountSummary();
  return 0;
}
