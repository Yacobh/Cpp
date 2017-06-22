#include <iostream>

int checkInt();

int main(){
  int validNumber;
  try
	{
    validNumber = checkInt();
  }	
  catch (std::invalid_argument& e)
  {
    cin.clear();
    cin.ignore(1024, '\n');
    std::cout << e.what() << std::endl;
    cout << "The given arguments are wrong\n";
  }

}

int checkInt()
{
	int number;
	cin >> number;
	if (cin.fail() && cin.rdstate()) {
		throw std::invalid_argument("Input is not a valid number");
		return 0;
	}
	return number;
}
