#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char op;
    cout<<"Enter two integers for calculation:\n";
    cin>>a>>b;
    cout<<"Enter the operator (+,-,*,/) :\n";
    cin>>op;
    switch(op)
    {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
        cout<<"Wrong input.\n";
    }
    return 0;
}