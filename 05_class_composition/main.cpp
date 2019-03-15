/*
Create two Die instances.
Create a vector of Roll
Create a 20iteration loop and create a Roll instance, call roll function, 
output rolled values, and add to vector.

Loop through vector of Roll and output roll result
*/
#include "die.h"
#include "roll.h"
#include<vector>
#include <iostream>

int main() 
{
	Die die1;
	Die die2;

	std::vector <Roll>  rolls;

	int i;
	for (i = 0; i < 20; ++i)
	{
		Roll roll(Die& d1, Die& d2);
		roll.roll();

		std::cout << "First die :" << roll.value_1() << "\n|";
		rolls.push_back(roll.value_1());
		std::cout << "First die :" << roll.value_2() << "\n|";
		rolls.push_back(roll.value_1());
	}

	for (auto r : rolls)
	{
		std::cout << r;
	}
	
}