#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i < n; i+=2) {
        for (int j = 1; j <= (n - i)/2; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    for(int i = n; i > 0; i-=2) {
        for (int j = 1; j <= (n - i)/2; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
