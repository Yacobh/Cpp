#include <iostream>
using namespace std;

// main 
int main() {
	int data = 0;
	int sum = 0;
	int ave = 0;
	// count is set to -1 prevent the value zero 
	int count = -1;
	// set the values of max  to 0 and  min to 1000
	int max = 0;
	int min = 1000;
	do{
		cout << "Enter a number: ";
		cin >> data;
		/*
		//posible validation of data
		if ( data > 1000 || data < 0 ){
		cout << "print a valid number whitin the range\n";
		}
		else{	
		 
			
		*/
		
		// seting the max and min values by comparission with the data
		// is necesary put data diferent from zero to prevent the last data be put like the min value
		if (data < min && data != 0) min = data;
		if (data > max) max = data;
		// increase the sum;
		sum += data; // equivalent to sum = sum + data;
		count++; // equivalent to count = count + 1;
		/*
		} // close of data validation
		*/
	} while (data != 0);
	
	if (count  == 0 ){
		cout << "No data, so no answers!\n";
	}
	else{
		// calculation of the average
		ave = sum / count;
		cout << "Average: " << ave << "\n";
		cout << "Max: " << max << "\n";
		cout << "Min: " << min << "\n";
		
			
	}
	
	return 0;
}

