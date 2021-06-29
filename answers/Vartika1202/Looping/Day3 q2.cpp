//day3 q2
#include<iostream>
using namespace std;

int main()
{ int n,i,j;
  char b;
    cout << "Enter the Number: ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
      cout<<endl;
        for(j=i; j<=n;j++)
        { 
           cout<<(char)('A' + j - 1)<<" ";
        }
    }
    return 0;
}