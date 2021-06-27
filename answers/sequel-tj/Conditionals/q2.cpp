#include <bits/stdc++.h>
using namespace std;

int main() {
    int dd,mm,yy;
    cin >> dd >> mm >> yy;

    if ((mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) && (dd < 1 || dd > 31)) {
        cout << "Invalid date!";
        exit(0);
    }
    if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && (dd < 1 || dd > 30)) {
        cout << "Invalid date!";
        exit(0);
    }
    if ((mm == 2) && (dd < 1 || dd >29)) {
        cout << "Invalid date!";
        exit(0);
    }

    if (mm == 1)
        cout << "January";
    else if (mm == 2)
        cout << "February";
    else if (mm == 3)
        cout << "March";
    else if (mm == 4)
        cout << "April";
    else if (mm == 5)
        cout << "May";
    else if (mm == 6)
        cout << "June";
    else if (mm == 7)
        cout << "July";
    else if (mm == 8)
        cout << "August";
    else if (mm == 9)
        cout << "September";
    else if (mm == 10)
        cout << "October";
    else if (mm == 11)
        cout << "November";
    else if (mm == 12)
        cout << "December";
    else {
        cout << "Invalid month number!";
        exit(0);
    }

    cout << " " << dd << " " << yy << endl;
    return 0;
}
