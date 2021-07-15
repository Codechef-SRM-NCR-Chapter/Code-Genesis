#include <iostream>
using namespace std;
int main()
{
    int basic_salary, allow;
    cin >> basic_salary;
    char grade;
    cin >> grade;
    double hra = (0.2) * basic_salary;
    double da = (0.5) * basic_salary;
    double pf = (0.11) * basic_salary;
    if (grade == 'A')
    {
        allow = 1700;
    }
    else if (grade == 'B')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }
    double totalSalary = double(basic_salary) + hra + da + double(allow) - pf;
    cout << int(totalSalary) << endl;
    return 0;
}
