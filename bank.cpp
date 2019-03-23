#include <iostream>
#include <string>
using namespace std;

/* Construct a class that will model a bank account. A bank account will know the balance
and the owner of the account. In addition to creating a bank account, money can be
deposited in the account, withdrawn from the account, the owner can be changed, the
account can be queried to find the current balance, and it can be queried to find the current
owner. Also construct a test program which will test whether your implementation of this
class is correct. */

//account bank class declaration
class account{
	float remainder;
	string owner;
	
public:
	account(string);
	account(string, float);
	void deposit(float);
	void whitdraw(float);
	void changeOwner(string);
	float balance(void);
	string Owner(void);
	
};

//implementation account class
account::account(string str, float b){
	owner=str;
	remainder=b;
}

account::account(string str){
	owner=str;
	remainder=0;
}

void account::deposit(float d){
	remainder=remainder+d;
}

void account::whitdraw(float w){
	if(w<=remainder)
	remainder=remainder-w;
	else
	printf("no enough funds\n");
}

void account::changeOwner(string n){
	owner=n;
}

float account::balance(){
	//printf("The balance of the account is %f \n",remainder);
	return remainder;
}

string account::Owner(){
	//cout << "the owner is " << owner <<endl;
	return owner;
}

// test program
int main(int argc, char** argv) {
	float money;
	string name;
	cout<<"Please insert the name of the person to open the account: ";
	cin >> name;
	cout<< endl <<"Please insert the money: ";
	cin >> money;
	account x=account(name,money);
	cout <<"the balance is " << x.balance() << endl;
	cout << "the owner is " << x.Owner()<< endl;
	int option=0;
	while (option!=5){
		cout<< "1) withdraw"<<endl;
		cout<< "2) deposit"<<endl;
		cout<< "3) balance"<<endl;
		cout<< "4) change owner"<<endl;
		cout<< "5) quit"<<endl;
		cin >>option;
		switch (option){
			case 1: 
			cout << "insert the amount of money to withdraw  ";
			cin >> money;
			x.whitdraw(money);
			break;
			case 2:
				cout<<"insert the amount of money to deposit  ";
				cin >> money;
				x.deposit(money);
			break;
			case 3:
				cout << "the owner is "<< x.Owner() <<" and the balance is " << x.balance() << endl;
			break;
			case 4:
				cout<<"Please insert the name of the new owner of the account: ";
				cin >> name;
				x.changeOwner(name);
				break;
			case 5:
				cout<<"THANK YOU bye";
				break;
			default:
			cout<< "please insert a valid option"<<endl;
				
		}
	};
	return 0;
}
