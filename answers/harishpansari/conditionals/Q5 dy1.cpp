#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char op;
    cout<<"enter number\n";
    cin>>a>>b;
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