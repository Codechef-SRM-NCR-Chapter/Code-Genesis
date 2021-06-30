#include<iostream>
using namespace std;

void findFirstAndLast(int arr[], int n, int x)
{

    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {

        if (x != arr[i])

            continue;

        if (first == -1)

            first = i;

        last = i;

    }

    if (first != -1)

        cout << "\nFirst Occurrence = " << first

             << "\nLast Occurrence = " << last;

    else

        cout << "Not Found";
}


int main()
{

    int arr[20],m,x;
    cout<<"Enter the limit: \n";
    cin>>m;
    cout<<"Enter the elements: \n";
    for(int i=0;i<m;i++)
    { 
       cin>>arr[i];
    }
    cout<<"Enter the number you find : \n";
    cin>>x;
    cout<<"The array are as follows \n";
    for(int i=0;i<m;i++)
    { 
       cout<<arr[i]<<" ";
    }
    int n = sizeof(arr) / sizeof(int);

    

    findFirstAndLast(arr, n, x);

    return 0;
}