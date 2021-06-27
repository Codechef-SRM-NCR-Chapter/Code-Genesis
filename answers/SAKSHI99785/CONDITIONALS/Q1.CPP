Q1). #include <iostream>
using namespace std;

int main()
{
    int basic,allow;
    char grade;
    float hra,da,pf;
    cout<<"Enter the basic Salary ";
    cin>>basic;
    cout<<"Enter the Grade in uppercase character ";
    cin>>grade;
    hra=(20*basic)/100;
    da=(50*basic)/100;
    if(grade=='A')
    allow=1700;
    else if(grade='B')
    allow=1500;
    else
    allow=1300;
    pf=(11*basic)/100;
   float totalSalary=basic+hra+da+allow-pf;
    cout<<totalSalary;
    return 0;
}






