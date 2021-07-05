#include<iostream>
using namespace std;

void flip(int arr[], int i) 
{ 

    int temp, start = 0; 

    while (start < i) 

    { 

        temp = arr[start]; 

        arr[start] = arr[i]; 

        arr[i] = temp; 

        start++; 

        i--; 

    } 
} 
 

int findMax(int arr[], int n) 
{ 

int mi, i; 

for (mi = 0, i = 0; i < n; ++i) 

    if (arr[i] > arr[mi]) 

            mi = i; 

return mi; 
} 
 


void pancakeSort(int *arr, int n) 
{ 


    for (int curr_size = n; curr_size > 1;  --curr_size) 

    { 
             int mi = findMax(arr, curr_size); 
 
           if (mi != curr_size-1) 

        { 
               flip(arr, mi); 
 
            flip(arr, curr_size-1); 

        } 

    } 
} 
 

void printArray(int arr[], int n) 
{ 

    for (int i = 0; i < n; ++i) 

        cout<< arr[i]<<" "; 
} 
  

int main() 
{ 

    int arr[]={3,2,4,1} ;
    
    int n = sizeof(arr)/sizeof(arr[0]); 
 

    pancakeSort(arr, n); 
 

    cout<<"Sorted Array "<<endl; 

    printArray(arr, n); 
 

    return 0; 
} 