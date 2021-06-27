Q5).
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    float res;
    char op;
    cout<<"Enter x and y\n";
    cin>>x>>y;
    cout<<"Enter operator(+,-.*,/)\n";
    cin>>op;
    if(op=='+')
    cout<<(x+y);
    if(op=='-')
    cout<<(x-y);
    if(op=='*')
    cout<<(x*y);
    if(op=='/')
    cout<<(x/y);
    return 0;
}