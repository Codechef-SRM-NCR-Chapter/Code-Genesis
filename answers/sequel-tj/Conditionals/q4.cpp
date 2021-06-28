#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 0)
        cout << "Origin" << endl;
    else if (x == 0 && y != 0)
        cout << "Y axis" << endl;
    else if (y == 0 && x != 0)
        cout << "X axis" << endl;
    else if (x > 0 && y > 0)
        cout << "Quadrant 1" << endl;
    else if (x < 0 && y > 0)
        cout << "Quadrant 2" << endl;
    else if (x < 0 && y < 0)
        cout << "Quadrant 3" << endl;
    else
        cout << "Quadrant 4" << endl;

    return 0;
}
