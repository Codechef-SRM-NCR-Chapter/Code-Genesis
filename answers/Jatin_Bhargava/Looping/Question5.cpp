#include<bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int max=INT_MAX;
    for(int i=n-2;i>=0;i--)
    {
       if(arr[i]!=arr[i-1])
       {
           cout << arr[i];
           break;
       }
    }
}