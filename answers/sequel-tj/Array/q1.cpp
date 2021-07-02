#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter value of Target:";
    cin >> target;

    for (int i = 0; i < n; i++) {
        if (i != 0) {
            int temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;
        }
        for (int j = 0; j < n-1; j++) {
            if (arr[j]+arr[j+1] == target) {
                cout << "[" << j << "," << j+1 << "]" << endl;
                exit(0);
            }
        }
    }
    return 0;
}
