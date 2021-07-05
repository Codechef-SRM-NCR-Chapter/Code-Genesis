#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int i;
    int alphabets[26] = {0};
    int digits[10] = {0};
    for (i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            alphabets[str[i] - 'A']++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            alphabets[str[i] - 'a']++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits[str[i] - '0']++;
        }
    }