#include "rabbit.h"
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int i;
	cout << "Enter eight unsigned integer subkeys the key for the cipher: \n";
	for(i = 0; i < 8; i++)
	{	
		cin >> key[i];
	}

	cout<<"\nEnter two unsigned integer for the IV for the cipher : \n";
	for(i = 0; i < 2; i++)
	{
		cin >> iv[i];                  //input the 64-bit IV as two different 32-bit parts
	}

	string plainText;
	vector<unsigned int> plainTextVector;
	cout << "Enter the plain-text to be encrypted by the cipher : \n";
	cin >> plainText;
	for(unsigned int i = 0; i < plainText.size(); i++) {
		if(plainText[i] == ' '){
			continue;
		}
		plainTextVector.push_back(plainText[i] - '0');
	}

	encrypt(plainTextVector);              //call the encrypt function on plaintext
	return 0;
}