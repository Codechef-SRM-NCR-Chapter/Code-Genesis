#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=((n+1)/2);i++)
   {
     for(int j=1;j<=n-i;j++)
     cout<<" ";
     for(int j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;
   }
   int x=(n-1)/2;
   for(int i=x;i>=1;i--)
   {
     for(int j=1;j<=n-i;j++)
     cout<<" ";
     for(int j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;;
   }
}