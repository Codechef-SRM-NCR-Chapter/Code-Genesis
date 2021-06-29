#include <iostream>
using namespace std;

double SqrtNumber(int num)
{
    int lower=0,upper=num,temp=0,flag=50;
    while(flag != 0)
    {
        temp=(lower+upper)/2;
        if(temp*temp==num) 
        {
           return temp;
        }
        else if(temp*temp > num)
        {
            upper = temp;
        }
        else
        {
            lower = temp;
        }
        flag--;
    }
        return temp;
    }

    int main()
    {
    int num;
    cout<<"Enter the number\n";
    cin>>num;
    if(num < 0)
    {
    cout<<"Error: Negative number. Please enter a valid number";
    return 0;
    }
    cout<<"Square roots are: +"<<SqrtNumber(num)<<" and -"<<SqrtNumber(num);
    return 0;
    } 