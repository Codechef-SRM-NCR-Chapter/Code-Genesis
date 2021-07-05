#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        int flag = 0;
        for (int j = 0; j < str.size()/2; j++) if (str[j] != str[str.size()-1-j]) flag = -1;
        if (flag == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
