#include <iostream>
#include <string.h>
using namespace std;

int main() {
    double basic, hra, da, allow, pf, totalSalary;
    char grade;

    cout << "Inputs:";
    cin >> basic >> grade;
    da = (double) 50 / 100 * basic;
    hra = (double) 20 / 100 * basic;
    pf = (double) 11 / 100 * basic;

    if(grade == 'A') {
        allow = 1700;
    } else if(grade == 'B') {
        allow = 1500;
    } else {
        allow = 1300;
    }

    totalSalary = basic + hra + da + allow - pf;
    cout << (int) totalSalary;

    return 0;
}