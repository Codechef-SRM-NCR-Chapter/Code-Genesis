#include<iostream>
using namespace std;

int main()
{ 
     int n,i,j;
    cout << "Enter the number of rows\n";
    cin>>n;
  if(n%2==0)
  cout<<"Please enter the odd value";
  else
  {
    for(i=1;i<=n;i++)
      { 
       for(j=1;j<=n-i;j++)
        cout<<" ";
       for(j=1; j<=2*i-1;j++)
       cout<<"*";
       cout<<"\n";
      }
    
    for(i=1;i<=n-1;i++)
      { 
        for(j=1;j<=i;j++)
          cout<<" ";
        for(j=1;j<=2*(n-i)-1;j++)
          cout<<"*";
          cout<<"\n";
      }
  } 
    return 0;
}