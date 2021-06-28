#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
    bool isPrime = true;
    cin>>num1>>num2;
    while (num1<num2) 
    {
        isPrime=true;
        if (num1==0 || num1==1) 
        {
            isPrime=false;
        }
        else 
        {
            for (int i=2; i<=num1/2; ++i) 
            {
                if (num1 % i==0) 
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
            cout<<num1<<" ";
        ++num1;
    }
    return 0;
}