#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna_hamming.h"
//write include statement for dna header

TEST_CASE("Test configuration setup") 
{
	REQUIRE(true == true);
}

/*

*/

TEST_CASE("Test get_dna-hamming_distance")
{
	REQUIRE(get_dna_hamming_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT") == 7);
}