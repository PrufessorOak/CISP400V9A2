// NAME  : Yevgeniy Lankin
// CLASS : CISP 400, Online
// Assignment #: A2
// PURPOSE : Test program for class Encrypt.h
// Software Change (Modifications) Record
// date         what               who
// 09/17/2015   created program    Yev

#include "Encrypt.h" // include definition of class Encrypt
#include <iostream> // allows program to output data to the screen
#include <iomanip> // parameterized stream manipulators
using namespace std; // program uses names from the std namespace

int main()
{
	Encrypt  app1(0), app2(40), app3(4560), app4(6145698), app5(-6); // create Encrypt objects  

	cout << endl << "Reset the app1's data to 100." << endl;// display the reset of app1.

	app1.storeData(100);// call app1's storeData function
	app1.displayOriginalData();//display the app1's current original data.
	app1.displayEncryptedData();// display the app1's current encrypted data.
	cout << endl;//Jump to the next line
	system("PAUSE"); // prompt tp close
	return 0; // indicate successful termination
} // end main
