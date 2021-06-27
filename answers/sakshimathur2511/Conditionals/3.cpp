#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;
    char operation;
    cin >> a >> b >> operation;
    if (operation == '+') {
        cout << a + b << endl;
    }
    else if (operation == '-') {
        cout << a - b << endl;
    }
    else if (operation == '*') {
        cout << a*b << endl;
    }
    else if (operation == '/') {
        cout << a / b << endl;
    }
}
