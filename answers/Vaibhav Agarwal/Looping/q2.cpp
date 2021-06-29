#include <bits/stdc++.h>
using namespace std;
int main() 
{   
    int n=8;
    char x='A';
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<char(x+j-1);
        }
        cout<<endl;
    }
    return 0;
}