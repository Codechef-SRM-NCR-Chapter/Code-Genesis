#include <iostream>
using namespace std;

int main() {
    int number;
    double temp,sqrt;

    cin >> number;

    sqrt = number / 2;
    temp = 0;

    while(sqrt != temp)
    {
        temp = sqrt;
        sqrt = (number/temp+temp) / 2;
    }
    cout << (int) sqrt;

    return 0;
}