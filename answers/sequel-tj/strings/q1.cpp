#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int temp = 1, count = 0, times = 1;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != 0)
        {
            for (int j = i; j < str.size()-1; j++)
            {
                if (str[i] == str[j + 1]) {
                    temp++;
                    str[j+1] = 0;}
            }

            if (count == 0) count = temp;
            else if ((count - 1 == temp || count + 1 == temp) && times > 0) times--;
            else if (count != temp) {
                count = -1;
                break;}
            else count = temp;

            temp = 1;
        }
    }
    if (count == -1) cout << "NO";
    else cout << "YES";

    return 0;
}
