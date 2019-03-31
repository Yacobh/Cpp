

#include <iostream>  
#include <string>  
#include <cctype>  

using namespace std;  

class Vigenere  
{  
	public:  
		string key; 
		string table="ABCDEFGHIJKLMNOPQRSTUVWXYZ,.-_"; 
		Vigenere(string key) 
		{  
			for(int i = 0; i < key.size(); ++i)  
			{  
				if( isupper(key[i]) )
        			this->key += key[i];
      			else if( islower(key[i]) )
        			this->key += toupper(key[i]);  
			}  
		}  

		string encrypt(string original)  
		{  
			int i;
			int p;
			int k = key.size();
			string Encrypted;  
			for(int i = 0; i < original.length(); ++i)  
			{  
				int aux;
				//for lowercase
				p= original[i] - 'a';
				//for uppercase and symbols
				//compare with table
				for(int k=0; k<30; k++)
				{
					if (key[i]==table[k]) aux=k;
					if (original[i]==table[k]) p=k;
				}
				char alpha = table[(p + aux ) % 30];   
				Encrypted += alpha;
				//cout << "Original "  << original[i] << " \t:Key: " << key[i] << " \t: MyKey: " << alpha << " \t: at position: " << p<<" \tEncrypted= " << Encrypted << endl ;
					
				if (i+1>=key.size())
				{
					for (int j = Encrypted.size()-k; j< Encrypted.size(); j++)
						if (key.size() < original.length()) key +=Encrypted[j];						
				}
				
			}  
		return Encrypted;  
		}  
};  

int main()  
{  
	string original, key;  
	cout << "Enter plaintext: ";  
	cin >> original;  
	cout << "Enter keyword: ";  
	cin >> key;  
	cout << endl << endl;  
	//original="SIU_CS-Department_is_the_best";
	//key="Carbondale";
	
	
	Vigenere cipher(key);  
	string encrypted = cipher.encrypt(original);  
	
	cout << "Plaintext: " << original << endl;  
	cout << "Key: " << cipher.key << endl;  
	cout << "Ciphertext: " << encrypted << endl;  
} 
