#include "fibonacci.h"
/*
Write prototype for string value - return function get_fibonacci with an int
parameter that returns the fibonacci sequence up to that number.

DO NOT USE A RECURSIVE FUNCTION
*/

vector <int> get_fibonacci(int number)
{
	vector <int> sequence;
	
	int num1 = 0;
	sequence.push_back(num1);
	int num2 = 1;
	sequence.push_back(num2);

	int next_num = 0;

	next_num = num1 + num2;
	sequence.push_back(next_num);

	while (next_num < number)
	{
		
		num1 = num2;
		num2 = next_num;
		next_num = num1 + num2;
		sequence.push_back(next_num);
	}

	return sequence;
	
}
