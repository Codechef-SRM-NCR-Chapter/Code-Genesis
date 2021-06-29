#include <bits/stdc++.h>
using namespace std;
int secondlargest(int arr[], int size)
{
    if (size < 2) {
        return INT_MIN;
    }
    int largest=INT_MIN;
    int second=INT_MIN;
    for (int i=0;i<size;i++) 
    {
        largest = max(largest,arr[i]);
    }
    for (int i=0;i<size;i++) 
    {
        if (arr[i]!=largest)
            second = max(second,arr[i]);
    }
    if (second==INT_MIN)
        return INT_MIN;
    else
        return second;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<secondlargest(arr,n);
    return 0;
}