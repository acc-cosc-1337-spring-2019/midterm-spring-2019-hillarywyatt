#include "shooter.h"
#include <vector>
#include <iostream>
/*
Program runs until user opts out.
Create two Die instances, a Shooter instance, and a vector of Roll objects.
Create a loop that allows user to shoot 10 times and add each roll created by 
Shooter shoot() function into vector of Roll.

In another loop iterate the vector of Roll and dislplay the Roll result.
*/
int main() 
{
	char choice;

	std::vector <Roll> rolls;

	do
	{

		for (int i = 0; i < 10; ++i)
		{
			Shooter shooter;
			Die die1;
			Die die2;

			shooter.shoot(die1,die2);
			rolls.push_back(shooter.shoot(die1, die2));

			for (auto r : rolls)
			{
				std::cout << "Roll results: " << r << "\n";
			}


		}

		std::cout << "Roll again? Y or N: ";
		std::cin >> choice;


	} while (choice == 'Y' || 'y');
}