#include<iostream>
using namespace std;
int main()
{
     int i,n,a,b,num;
   a=0;
   b=0;
   cin>>n;
  
   for(i=0; i<n; i++)
   {
    cin>>num;
     if (num > a)
     {
       b = a;
       a = num;
     }
     else if (num > b)
       b = num;
       else if(num==b)
       {
          cout<<INT32_MIN;
           break;
       }
   }
   cout<<b;
   return 0;
}