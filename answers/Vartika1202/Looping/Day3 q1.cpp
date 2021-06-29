//day3 q1 
#include<iostream>
using namespace std;

 main()
{
    int number, sqrt;

    float temp;

    cout<<"Enter the number : ";
    cin>> number;

    sqrt = number / 2;
    temp = 0;

    while(sqrt != temp)
    {
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;
    }

    cout<<"\nThe square root of "<< number <<" is : "<<sqrt;
}
