#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if(x > 0 && y > 0)
        cout << "Quadrant 1";
    else if (x < 0 && y > 0)
        cout << "Quadrant 2";
    else if (x < 0 && y < 0)
        cout << "Quadrant 3";
    else if (x > 0 && y < 0)
        cout << "Quadrant 4";
    else if(y == 0 && x < 0 || x > 0)
        cout << "X axis";
    else if(x == 0 && y < 0 || y > 0)
        cout << "Y axis";
    else if(x == 0 && y == 0)
        cout << "Origin";

    return 0;
}