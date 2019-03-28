#include <iostream> 

int main(){
	char ascii = 0;
	for (int j=0; j<256; j++)
	{
		char a = ascii+j; 
		double value = a;
		std::cout << value << " : " << a << std::endl ;
	}
}
