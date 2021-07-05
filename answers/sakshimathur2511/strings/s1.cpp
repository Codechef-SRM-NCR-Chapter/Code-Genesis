
#include<bits/stdc++.h>
using namespace std;

// Assuming only lower case characters
const int CHARS = 26;

bool isValidString(string str)
{
	int freq[CHARS] = {0};

	// freq[] : stores the frequency of each
	// character of a string
	for (int i=0; i<str.length(); i++)
		freq[str[i]-'a']++;

	// Find first character with non-zero frequency
	int i, freq1 = 0, count_freq1 = 0;
	for (i=0; i<CHARS; i++)
	{
		if (freq[i] != 0)
		{
			freq1 = freq[i];
			count_freq1 = 1;
			break;
		}
	}

	// Find a character with frequency different
	// from freq1.
	int j, freq2 = 0, count_freq2 = 0;
	for (j=i+1; j<CHARS; j++)
	{
		if (freq[j] != 0)
		{
			if (freq[j] == freq1)
			count_freq1++;
			else
			{
				count_freq2 = 1;
				freq2 = freq[j];
				break;
			}
		}
	}

	// If we find a third non-zero frequency
	// or count of both frequencies become more
	// than 1, then return false
	for (int k=j+1; k<CHARS; k++)
	{
		if (freq[k] != 0)
		{
			if (freq[k] == freq1)
			count_freq1++;
			if (freq[k] == freq2)
			count_freq2++;
			else // If we find a third non-zero freq
			return false;
		}

		// If counts of both frequencies is more than 1
		if (count_freq1 > 1 && count_freq2 > 1)
		return false;
	}

	// Return true if we reach here
	return true;
}

// Driver code
int main()
{
	char str[] = "abcbc";

	if (isValidString(str))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
