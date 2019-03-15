#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "fibonacci.h"
//write include statement for fibonacci header

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

/*
Write test case for get fibonacci function with values 10 and 100
*/
TEST_CASE("Test fibonacci sequence")
{
	vector <int> fibonacci_of_10 = { 0, 1, 1, 2, 3, 5, 8, };
	REQUIRE(get_fibonacci(10) == fibonacci_of_10);
	vector<int>fibonacci_of_100 = { 0, 1, 1, 2, 3, 5, 8,13,21,34,55,89 };
	REQUIRE(get_fibonacci(100) == fibonacci_of_100);
}
