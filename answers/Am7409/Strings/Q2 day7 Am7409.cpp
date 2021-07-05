#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the words \n";
    cin >> s;
    int t=1;
    for (int i=0;i<s.length();i++)
        if (isupper(s[i]))
        t++;
        cout<<"\nThe answer is :"<<t<<endl;
    return 0;
}