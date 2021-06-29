#include <iostream>

using namespace std;


int main()
{
    int n,i,j;
    cout<<"Enter the number of rows:";
    cin>>n;
    int n1=n/2+1;
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=n1-1;j++)
            cout<<" ";
        for(j=1;j<=2*i-1;j++)
            cout<<"*";
        cout<<"\n";
    }
    for(i=1;i<=n1-1;i++)
    {
        for(j=1;j<=i;j++)
            cout<<" ";
        for(j=1;j<=2*(n1-i)-1;j++)
            cout<<"*";
        cout<<"\n";
    }
    
    return 0;
}