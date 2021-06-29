#include <stdio.h>
#include<limits.h>

int main()
{
    int i,j,a,n,arr[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
            if (arr[i]==arr[j])
                arr[j]==INT_MIN;
            
        }
    }
    printf("%d",arr[1]);
return 0;
}

