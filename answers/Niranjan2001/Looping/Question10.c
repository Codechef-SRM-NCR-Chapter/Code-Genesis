#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[1000], n, i;
    int max1, max2;
    scanf("%d", &n);
    printf("Enter elements in the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max1 = max2 = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    printf("Second largest = %d", max2);
    return 0;
}