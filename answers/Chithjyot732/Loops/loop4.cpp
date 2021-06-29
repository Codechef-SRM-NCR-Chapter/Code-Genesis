#include<iostream>
using namespace std;
 
int main()
{
    int a,b,flag;
    cout << "Enter lower bound of the interval:\n ";
    cin >> a; 
    cout << "Enter upper bound of the interval:\n ";
    cin >> b; 
    cout << "Prime numbers between "<< a << " and " << b << " are: ";
    for (int i=a;i<=b;i++) 
    {
        if (i == 1 || i == 0)
        continue;
        flag = 1;
        for (int j = 2; j <= i / 2; j++) 
        {
            if (i % j == 0) 
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << i << " ";
    }
    return 0;
}