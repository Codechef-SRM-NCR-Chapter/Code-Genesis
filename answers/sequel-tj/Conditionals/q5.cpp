#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    char oprt;
    cin >> a >> b >> oprt;

    if (oprt == '+')
        cout << a+b << endl;
    else if (oprt == '-')
        cout << a-b << endl;
    else if (oprt == '*')
        cout << a*b << endl;
    else if (oprt == '/')
        cout << a/b << endl;
    else
        cout << "Invalid input!" << endl;

    return 0;
}
