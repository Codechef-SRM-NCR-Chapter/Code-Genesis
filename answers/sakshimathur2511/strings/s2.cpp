
#include <bits/stdc++.h>
using namespace std;

// Function to find the count of words

int countWords(string str)
{
	int count = 1;

	for (int i = 1; i < str.length() - 1; i++) {
		if (isupper(str[i]))
			count++;
	}

	return count;
}

// Driver code
int main()
{
	string str = "saveChangesInTheEditor";

	cout << countWords(str);

	return 0;
}
