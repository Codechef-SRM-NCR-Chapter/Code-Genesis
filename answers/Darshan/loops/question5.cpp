#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    reverse(arr, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }

    cout << "Second largest element: " << arr[1];
}