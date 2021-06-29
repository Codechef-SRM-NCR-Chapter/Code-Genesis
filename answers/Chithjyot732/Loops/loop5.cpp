#include<iostream>
using namespace std;

int main()
{
   int n,temp;
   cout<<"Enter number of elements\n";
   cin>>n;
   int arr[n];
   cout<<"Enter elements of array:\n";
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
      for(int j=i+1;j<n;j++)
      {
         if(arr[i]>arr[j])
         {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }
   }
   cout<<"Second largest element is = "<<arr[n-2]<<endl;
   return 0;
}