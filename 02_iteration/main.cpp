//write include statement
#include "fibonacci.h"
#include <iostream>

using std::cout;
using std::cin;

/*
Program runs until user opts out.
Prompt user for a number and display the fibonacci series for the number
*/
int main() 
{
	char choice; 
	int number;
	
	do
	{
		cout << "Enter a number to find its Fibonacci Sequence: ";
		cin >> number;

		cout << "Sequence for " << number << ": ";

		vector <int> sequence = get_fibonacci(number);

		for (auto n : sequence)
		{
			cout << n << ", ";
		}

		cout << "\n";
		cout << "Would you like to find the Fibonacci Sequence of another number? Enter 'Y' or 'N'" << "\n";
		cin >> choice; 

	} while (choice == 'Y' || 'y');
	
}