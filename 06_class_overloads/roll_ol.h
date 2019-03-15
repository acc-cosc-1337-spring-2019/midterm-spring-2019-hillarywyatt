//class interface
#ifndef ROLL_OL_H
#define ROLL_OL_H
#include "die.h"
#include <string>

class Roll
{
public:
	Roll();
	void roll(Die& d1, Die& d2);
	std::string result();
	int value_1();
	int value_2();

private:
	Die& die1;
	Die& die2;

	int die1_roll_value;
	int die2_roll_value;
	bool rolled{ false };
	bool craps();
	bool natural();

};

#endif// !ROLL_OL_H