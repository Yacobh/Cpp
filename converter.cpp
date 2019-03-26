/*
	Name: converter.cpp
	Copyright: 
	Author: 
	Date: 12-11-16 02:28
	Description: Create a CharConverter class that performs various operations on strings. 
	It should have the following two public member functions to start with. 
	The uppercase member function accepts a string and returns a copy of it 
	with all lowercase letters converted to uppercase. 
	If a character is already uppercase, or is not a letter, it should be left alone. 
	The properWords member function accepts a string of words separated by spaces 
	and returns a copy of it with the first letter of each word converted to uppercase. 
	Write a simple program that uses the class. It should prompt the user to input a string. 
	Then it should call the properWords function and display the resulting string. 
	Finally, it should call the uppercase function and display the resulting string. 
	The program should loop to allow additional strings to be converted and displayed 
	until the user chooses to quit. Graded On 5 points Template code used in .cpp file 5 points 
	Program commented appropriately 5 points CharConverter class defined properly 
	with private variables and public functions 10 points 
	Program executes without errors10 points CharConverter has two member functions 
	named uppercase and properWords 15 points Program prompts user to enter a string 10 points 
	Program loops until user wishes to quit 10 points Output from the uppercase function 
	correct 15 points Output from the properWords function correct 15 points Total 100 points
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class CharConverter {
	// Private section
	public:
		// Public Declarations
		CharConverter ();
		int setString(string a);
		string uppercase();
		string properWords();
	private:
		// Private Declarations
		string str;
};

CharConverter::CharConverter()
{
	
};

int CharConverter::setString(string a)
	{
		str=a;
		//cout <<str;
		return 0;
	};
	
string CharConverter::properWords()
{
	string aux=str;
	if (str.at(0)!=' ') aux[0]=toupper(str.at(0));
	size_t found = str.find_first_of(" ");
  while (found!=std::string::npos)
  {
    aux[found+1]=toupper(str.at(found+1));
    found=str.find_first_of(" ",found+1);
  }
	return aux;
}

string CharConverter::uppercase()
{
	string aux=str;
	for(int i=0;i< str.length();i++) 
	{
		aux[i]=toupper(str.at(i));
	}
	return aux;
}

int main ()
{
	
	int exit=0;
	char out;
	string input;
	CharConverter  user;
	while(exit!=1) 
	{
		cout << "Please insert a string: " << endl;
		getline(cin, input, '\n');
  		user.setString(input);
		cout << "proper words is " << user.properWords()<< endl;
		cout << "uppercase is " << user.uppercase() <<endl;
		cout << " Do you want to insert another string (Y/N): "<< endl;
		cin >> out;
		if (out=='N' or out=='n') exit=1;
		
	}
}
