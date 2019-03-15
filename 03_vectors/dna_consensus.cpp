#include "dna_consensus.h"

vector<int> most_common_letter(vector<string> rosalind)
{
	vector<int> num_sequences;
	int a_count = 0;
	int c_count = 0;
	int g_count = 0;
	int t_count = 0;

	// \/this iterates through entire column at index i, then goes to next column
	for (int i = 0; i < 8; ++i)
	{
		if (rosalind[0][i] == 'A' || rosalind[1][i] == 'A' || rosalind[2][i] == 'A' || rosalind[3][i] == 'A'
			|| rosalind[4][i] == 'A' || rosalind[5][i] == 'A' || rosalind[6][i] == 'A')
		{
			a_count++;
			num_sequences.push_back(a_count);
		}

		if (rosalind[0][i] == 'C' || rosalind[1][i] == 'C' || rosalind[2][i] == 'C' || rosalind[3][i] == 'C'
			|| rosalind[4][i] == 'C' || rosalind[5][i] == 'C' || rosalind[6][i] == 'C')
		{
			c_count++;
			num_sequences.push_back(c_count);
		}

		if (rosalind[0][i] == 'G' || rosalind[1][i] == 'G' || rosalind[2][i] == 'G' || rosalind[3][i] == 'G'
			|| rosalind[4][i] == 'G' || rosalind[5][i] == 'G' || rosalind[6][i] == 'G')
		{
			g_count++;
			num_sequences.push_back(g_count);
		}

		if (rosalind[0][i] == 'T' || rosalind[1][i] == 'T' || rosalind[2][i] == 'T' || rosalind[3][i] == 'T'
			|| rosalind[4][i] == 'T' || rosalind[5][i] == 'T' || rosalind[6][i] == 'Y')
		{
			t_count++;
			num_sequences.push_back(t_count);
		}
	}

	return num_sequences;//vector of 4 int sequences
}


vector<string> dna_consensus(vector <int>num_sequences)
{
	vector<string>consensus; 
	vector <int> a_sequence;
	vector <int> c_sequence;
	vector <int> g_sequence;
	vector <int> t_sequence;

	for (int i = 0; i < 8; ++i)
	{
		a_sequence.push_back(i);
	}
	for (int i = 0; i > 7 && i < 16; ++i)
	{
		c_sequence.push_back(i);
	}
	for (int i = 0; i > 15 && i < 24; ++i)
	{
		g_sequence.push_back(i);
	}
	for (int i = 0; i >23 && i < 32; ++i)
	{
		t_sequence.push_back(i);
	}

	

	for (int i = 0; i < 8; ++i)
	{
		if (a_sequence[i] > c_sequence[i] && a_sequence[i] > g_sequence[i] && a_sequence[i] > g_sequence[i] )
		{
			consensus.push_back("A");
		}
		else if (c_sequence[i] > a_sequence[i] && c_sequence[i] > g_sequence[i] && c_sequence[i] > g_sequence[i])
		{
			consensus.push_back("C");
		}
		else if (g_sequence[i] > a_sequence[i] && g_sequence[i] > c_sequence[i] && g_sequence[i] > t_sequence[i])
		{
			consensus.push_back("G");
		}
		else if (t_sequence[i] > a_sequence[i] && t_sequence[i] > c_sequence[i] && t_sequence[i] > g_sequence[i])
		{
			consensus.push_back("T");
		}

	}

	return consensus;
}
