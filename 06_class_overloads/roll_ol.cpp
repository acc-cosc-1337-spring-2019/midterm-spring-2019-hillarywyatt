//class implementation
#include "roll.h"

void Roll::roll(Die& d1, Die& d2)
{

	die1_roll_value = die1.rolled_value();


	die1_roll_value = die2.rolled_value();

	rolled = true;
}

std::string Roll::result()
{
	if (natural())
	{
		return "Natural";
	}
	else if (craps())
	{
		return "Craps";
	}
	else
	{
		return "Points";
	}
}

int Roll::value_1()
{
	return die1_roll_value;

}

int Roll::value_2()
{
	return die2_roll_value;
}

bool Roll::craps()
{
	if (die1_roll_value + die2_roll_value == 2 || die1_roll_value + die2_roll_value == 3 ||
		die1_roll_value + die2_roll_value == 12)
	{
		return true;
	}
}

bool Roll::natural()
{
	if (die1_roll_value + die2_roll_value == 7 || die1_roll_value + die2_roll_value == 11)
	{
		return true;
	}
}
