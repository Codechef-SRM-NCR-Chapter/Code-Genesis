#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        string str; cin >> str;
        for (int j = 0; j < str.length()-4; j++) {
            if (str[j] == 'p' && str[j+1] == 'a' && str[j+2] == 'r' && str[j+3] == 't' && str[j+4] == 'y') {
                str[j+2] = 'w';str[j+3] = 'r';str[j+4] = 'i';
            }
        }
        cout << str << endl;
    }
    return 0;
}
