#include<iostream>
using namespace std;

int main()
{
    int totalSalary,basic,hra,da,allow,pf;
    char grade;
    cout<<"Enter basic salary :\n";
    cin>>basic;
    cout<<"Enter your grade (uppercase character) :\n";
    cin>>grade;
    hra= 0.2 * basic;
    da= 0.5 * basic;
    pf= 0.11 * basic;
    if(grade=='A')
    {
        allow=1700;
    }
    else if(grade=='B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }
    totalSalary=(basic+hra+da+allow-pf);
    cout<<"Total salary is : "<<totalSalary;
    return 0;
}