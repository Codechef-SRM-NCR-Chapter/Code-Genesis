#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    char o;
    cin >> a>> b >> o;
    if(o=='+')
    cout << a+b;
    else if(o=='-')
    cout << a-b;
    else if(o=='*')
    cout << a*b;
    else if(o=='/')
    cout << a/b; 
}