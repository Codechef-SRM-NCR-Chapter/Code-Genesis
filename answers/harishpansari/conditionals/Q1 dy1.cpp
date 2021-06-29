#include<iostream>
using namespace std;
int main()
{
    int salary, sum;
    char allow;
    int totalsalary;
    cin >> salary >> allow;
    double hra = 0.2 * salary;
    double da = 0.5 * salary;
    if(allow == 'A')
    {
        sum = salary + 1700;
    } else if (allow == 'B'){
        sum = salary + 1500;
    } else if (allow == 'C'){
        sum = salary + 1300;
    } else{
        cout<<"invalid grade";
    }
    double pf = 0.11 * salary;
    totalsalary = hra + da + sum - pf;
    cout<< totalsalary;
    return 0;
}