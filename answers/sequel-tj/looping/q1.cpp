#include <bits/stdc++.h>
using namespace std;

int main() {
    int number, sqRoot;
    cin >> number;
    for(int i = 1; i * i <= number; i++){
        sqRoot = i;
    }
    cout << sqRoot << endl;
    return 0;
}
