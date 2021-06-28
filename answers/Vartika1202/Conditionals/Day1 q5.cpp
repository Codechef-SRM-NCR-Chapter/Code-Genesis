//day1 q5
#include<iostream>
using namespace std;

int main()
{ 
    int n1,n2,s;
    char a;
   cin>>n1;
   cin>>n2;
   cout<<"Enter simple arithmetic operator you want \n ";
   cin>>a;  
    if(a=='+')
      {
        s=n1 + n2;
        cout<<"The sum of two number is "<<s;
      }
    else
         if(a=='-')
           {
              s=n1 - n2;
              cout<<"The subtraction of two number is "<<s;
           }
         else
              if(a=='/')
                {
                   s=n1 / n2;
                   cout<<"The division of two number is "<<s;
                }
               else
                   if( a=='*' )
                    {
                      s=n1 * n2;
                      cout<<"The multiplication of two number is "<<s;
                    }
                   else
                    cout<<"Only enter (+) for addition, (-) for subtraction, (*) for multiplication, (/) for division ";
    return 0;
}