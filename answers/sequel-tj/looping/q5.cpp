#include <iostream>
#define INT_MIN -2147483648
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            if (arr[j] == arr[j+1])
                arr[j+1] = INT_MIN;
        }
    }

    cout << arr[1] << endl;
    return 0;
}
