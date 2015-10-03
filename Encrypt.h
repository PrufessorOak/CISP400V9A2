// NAME  : Yevgeniy Lankin
// CLASS : CISP 400, Online
// Assignment #: A2
// PURPOSE : Encrypt class definition. This file presents Encrypt's public 
//           interface without revealing the implementations of Encrypt's member
//           functions, which are defined in Encrypt.cpp
//           To show my understanding of a header file and function prototypes.
// Software Change (Modifications) Record
// date         what               who
// 09/17/2015   created program    Yev

using namespace std; // program uses names from the std namespace

class Encrypt
{
public:
	static const int arraySize = 8;
	Encrypt(int); // default constructor, initializes storeData, displays original and encrypted data
	void storeData(int); // stores last 4 digits of number in array, provides default
	void displayOriginalData(); // display the first 4 elements of the array
	void displayEncryptedData(); // display last 4 elements of the array
	void encryptData(); // encrypt first 4 elements of array and store in the last 4 elements of array

private:
	int digits[arraySize]; // array that stores the original and encrypted data
}; // end class Encrypt
