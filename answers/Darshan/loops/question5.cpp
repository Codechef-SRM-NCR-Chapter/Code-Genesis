#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    if(n == 2 || n == 1) {
        cout << INT_MIN;
        goto end;
    }

    sort(arr, arr + n);
    reverse(arr, arr + n);

    cout << "Second largest element: " << arr[1];

    end:
    return 0;
}