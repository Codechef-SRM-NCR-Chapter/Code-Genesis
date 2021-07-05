 #include <iostream>
#include <string>

using namespace std;

int main()
{
    int num1, num2;
    char operations;
    cin >> num1 >> num2 >> operations;
    if (operations == '+') {
        cout << num1 + num2 << endl;
    }
    else if (operations == '-') {
        cout << num1 - num2 << endl;
    }
    else if (operations == '*') {
        cout << num1*num2 << endl;
    }
    else if (operations == '/') {
        cout << num1 / num2 << endl;
    }
}
