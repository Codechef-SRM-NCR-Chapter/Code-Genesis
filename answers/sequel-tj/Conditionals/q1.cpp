#include <bits/stdc++.h>
using namespace std;

int main() {
    double basic,allow;
    char grade;
    cin >> basic >> grade;

    if (grade == 'A')
        allow = 1700;
    else if (grade == 'B')
        allow = 1500;
    else
        allow = 1300;

    cout << basic + (int)(0.20 * basic) + (int)(0.50 * basic) + allow - (int)(0.11 * basic) << endl;
    return 0;
}
