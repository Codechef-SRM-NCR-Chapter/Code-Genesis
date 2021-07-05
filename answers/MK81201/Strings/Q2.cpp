#include <bits/stdc++.h>
using namespace std;

int countWords(string str)
{
    int count = 1;
 
    for (int i = 1; i < str.length() - 1; i++) {
        if (isupper(str[i]))
            count++;
    }
 
    return count;
}
 

int main()
{
    string str;
    cin>>str;
    cout << countWords(str);
 
    return 0;
}