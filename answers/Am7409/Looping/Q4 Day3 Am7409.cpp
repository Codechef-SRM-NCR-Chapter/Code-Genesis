#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int num1,num2;
    int fnd=0,ctr=0;
    cout << "Enter the  range:\n";
	    cin>>num1>>num2;
    for(int i=num1;i<=num2;i++)
       {
           for(int j=2;j<=sqrt(i);j++)
               {
               if(i%j==0)
                  ctr++;
               }
               if(ctr==0&&i!=1)
               { fnd++;
                 cout<<i<<" ";
                 ctr=0;
               }
               ctr=0;
       }
 cout<<"\nThe total number of prime numbers between given range is: "<<fnd<<endl;
 return 1;
}
