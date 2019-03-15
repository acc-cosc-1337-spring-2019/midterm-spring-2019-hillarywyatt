#include "dna_consensus.h"
#include <iostream>


int main() 
{
	vector <string> rosalind  = { "ATCCAGCT", "GGGCAACT", "ATGGATCT", 
		"AAGCAACC", "TTGGAACT", "ATGCCATT", "ATGGCACT" };
	
	vector <int> number_sequences = most_common_letter(rosalind);
	
	
	vector <string> consensus = dna_consensus(number_sequences);
	std::cout << "DNA Consensus of Rosalind: ";
	
	for (auto c : consensus)
	{
		std::cout << c;
	}

}