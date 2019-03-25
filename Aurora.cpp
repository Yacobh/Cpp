/*
Presently at the Community College of Aurora, the standard cost per credit hour 
is $274.41. However, the college plans to increase the cost per credit hour 
by 2 percent for the next five years.

Instructions
Design a program that first asks the user the number of credit hours they plan 
to take in one semester. Use this number to calculate the present semester tuition. 
Then display the tuition for the year by multiplying the semester tuition by 2. 
Next, a loop should be used that displays the projected yearly tuition amounts 
for the next five years. Therefore, the program should display 6 years of tuition 
with the first year representing the present tuition costs and the subsequent 
years representing a 2 percent increase each year.
*/

#include <iostream>
using namespace std;
int main(){
	int creditHours;
	float tuition;
	float anual;
	cout << "How many credits hours do you plan to take in one semester?\n";
	cin >> creditHours;
	tuition = creditHours * 274.41;
	anual = tuition * 2;
	cout << anual << "$\n";
	for (int i = 0; i < 5; i++) {
		anual = anual * 1.02; // increase in 2 %
		cout << anual << "$\n";
	}
	
	return 0;
}
