#include <iostream>

using namespace std;

int main()
{
   double basic;
    cin >> basic;
    char grade;
    cin >> grade;
 
    double hra = 0.2 * basic;
    double da = 0.5 * basic;
 
    int allow;
    if (grade == 'A') {
        allow = 1700;
    }
    else if (grade == 'B') {
        allow = 1500;
    }
    else {
        allow = 1300;
    }
    
    double pf = 0.11 * basic;
 
    double totalSalary = basic + hra + da + allowa - pf;
    int ans = totalSalary;
    cout << ans;

    return 0;
}
