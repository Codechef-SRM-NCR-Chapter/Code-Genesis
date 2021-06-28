#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rows,space;
    cout<<"Enter the Number of Rows: ";
    cin>>rows;
    space = rows-1;
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=space; j++)
            cout<<" ";
        space--;
        for(int j=1; j<=(2*i-1); j++)
            cout<<"*";
        cout<<endl;
    }

    space = 1;
    
    for(int i=1; i<=(rows-1); i++)
    {
        for(int j=1; j<=space; j++)
            cout<<" ";
        space++;
        for(int j=1; j<=(2*(rows-i)-1); j++)
            cout<<"*";
        cout << endl;
    }
    cout << endl;
 }
