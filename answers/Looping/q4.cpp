#include<iostream>
using namespace std;
int main()
{
    int a,b,t=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        for(int j=2;j<i;j++)
        {
           if(i%j==0)
            t++;
        }
        if(t<1)
        {
           cout<<i<<", ";
           t=0;
        }
    else
    t=0;
        
    }
    
    return 0;
}