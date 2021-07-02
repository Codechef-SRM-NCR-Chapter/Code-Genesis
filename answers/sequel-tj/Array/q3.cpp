#include <bits/stdc++.h>
using namespace std;

int leftIndex(int target,int* arr, int n)
{
    int index = -1, start = 0, end = n-1;
    
    while (start < end)
    {
        int midpoint = (start + end) / 2;
        
        if (arr[midpoint] < target) start = midpoint + 1;
        else end = midpoint;
        
        if (arr[midpoint] == target) index = midpoint;
    }
    return index;
}

int rightIndex(int target, int* arr, int n)
{
    int index = -1, start = 0, end = n - 1;

    while (start < end)
    {
        int midpoint = (start + end) / 2 + 1;

        if (arr[midpoint] > target) end = midpoint - 1;
        else start = midpoint;

        if (arr[midpoint] == target) index = midpoint;
    }
    return index;
}

int main()
{
    int n, target;
    cout << "Enter length of array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter target value:";
    cin >> target;

    int res1 = leftIndex(target, &arr[0], n);
    int res2 = rightIndex(target, &arr[0], n);

    cout <<"[" << res1 << "," << res2 << "]" << endl;
    return 0;
}
