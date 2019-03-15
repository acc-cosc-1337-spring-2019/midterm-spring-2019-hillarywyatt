//Write include statement
/*
Program runs until user opts out.

For each loop Roll die and display output

*/
#include "die.h"
#include <iostream>

int main() 
{
	Die die;

	char choice;

	do
	{
		void roll();
		std::cout << "Die roll: " << die.rolled_value() << "\n";

		std::cout << "Roll again? Y or N" << "\n";
		std::cin >> choice;

	} while (choice = 'Y' || 'y');
}
