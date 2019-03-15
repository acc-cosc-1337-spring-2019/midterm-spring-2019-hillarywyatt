#include "dna_hamming.h"
#include <iostream>

using std::cout;
using std::cin;

int main() 
{
	string s;
	string t;


	cout << "Enter DNA sequence 1: ";
	cin >> s;

	cout << "Enter DNA sequence 2: ";
	cin >> t;
	
	//int distance = get_dna_hamming_distance(s , t);

	cout << "Hamming Distance: " << get_dna_hamming_distance(s, t) << "\n";
}