#include <bits/stdc++.h>
using namespace std;

int main() {
    int basic,allow;
    char alph;
    cin >> basic >> alph;

    if (alph == 'A')
        allow = 1700;
    else if (alph == 'B')
        allow = 1500;
    else
        allow = 1300;

    int total_salary = basic + (int)(0.20 * basic) + (int)(0.50 * basic) + allow - (int)(0.11 * basic);
    cout << total_salary << endl;
    
    return 0;
}
