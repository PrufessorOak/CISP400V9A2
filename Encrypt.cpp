// NAME  : Yevgeniy Lankin
// CLASS : CISP 400, Online
// Assignment #: A2
// PURPOSE : To show my understanding of member functions prototyped in Encrypt.h
// Software Change (Modifications) Record
// date         what               who
// 09/17/2015   created program    Yev

#include <iostream> // allows program to output data to the screen
#include <iomanip> // parameterized stream manipulators
#include <cmath> // standard C++ math library
#include "Encrypt.h" // include definition of class Encrypt
using namespace std; // program uses names from the std namespace

// default constructor
Encrypt::Encrypt(int num)
{
	cout << "\n** The default constructor is called" << endl;
	cout << "   and the passed in number is: " << num << ".**"<< endl;
	storeData(num); // calls function to initialize storeData
	displayOriginalData(); // calls function to display original data
	displayEncryptedData(); // calls function to display encrypted data
}

void Encrypt::storeData(int data)
{
	if (data <= 0) // set default values in the array if data is <= 0
	{
		digits[0] = 9;
		digits[1] = 4;
		digits[2] = 3;
		digits[3] = 6;
		cout << endl;
		cout << " XXX The inputed number is less than or equal to 0." << endl; // mention that data was <= 0
		cout << "     The number is reset to 9436. XXX" << endl; // mention the default data
	}
	else
	{
		data %= 10000; // converts data into a 4 digit number
		// stores the 4th element in the array
		digits[3] = data % 10; 
		// stores the 3rd element in the array
		digits[2] = (data / 10) % 10;
		// stores the 2nd element in the array
		digits[1] = ((data / 10) / 10) % 10;
		// stores the 2nd element in the array
		digits[0] = (((((data / 10) / 10) / 10) % 10));
	}
	encryptData();	// calls function to encrypt stored data	
}

// output the first 4 elements in the array
void Encrypt::displayOriginalData()
{
	cout << "\n     The original data is:  ";
	for (int i = 0; i < 4; i++) // loop through each element in the array, starting with the 1st one
	{
		cout << " " << digits[i];
	}
	cout << endl;
}

// output the last 4 elements in the array	
void Encrypt::displayEncryptedData()
{
	cout << "     The encrypted data is: ";
	for (int i = 4; i < 8; i++) // loop through each element in the array, starting with the 4th one
	{
		cout << " " << digits[i];
	}
	cout << endl;
}

// function that encrypts the firt 4 digits and stores them in the last 4 digits
void Encrypt::encryptData()
{
	// add 7 to the number and modulus by 10 to get encrypted number
	digits[4] = ((digits[2] + 7) % 10); //copy the 3rd element of the array to the 5th element
	digits[5] = ((digits[3] + 7) % 10); //copy the 4rd element of the array to the 6th element
	digits[6] = ((digits[0] + 7) % 10); //copy the 1st element of the array to the 7th element
	digits[7] = ((digits[1] + 7) % 10); //copy the 2nd element of the array to the 8th element
}
