#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int operand1, operand2;
    char opertr;

    cin >> operand1 >> operand2 >> opertr;

    switch(opertr) {
        case '+':
            cout << operand1 + operand2;
            break;
        case '-':
            cout << operand1 - operand2;
            break;
        case '*':
        cout << operand1 * operand2;
            break;
        case '/':
        cout << operand1 / operand2;
            break;
        default:
            break;
    }

    return 0;
}