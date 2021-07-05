#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; getline(cin, str);
    int temp = 0, k; cin >> k;
    for (int i = 0; i < str.length() && temp < k; i++){
        cout << str[i];
        if (str[i] == ' ') temp++;
    }

    return 0;
}
