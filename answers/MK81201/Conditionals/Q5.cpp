#include <iostream>

using namespace std;

int main()
{
    int x,y,r;
    cout<<"Enter the numbers:";
    cin>>x>>y;
    char op;
    cout<<"Enter the symbol:";
    cin>>op;
    if(op=='+')
        r=x+y;
    else if(op=='-')
        r-x-y;
    else if(op=='*')
        r=x*y;
    else if(op=='/')
        r=x/y;
    cout<<"Result:"<<r;
    return 0;
}
