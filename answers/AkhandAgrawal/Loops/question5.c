#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {

            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if (arr[0] == arr[1])
    {
        printf("%d", INT_MIN);
    }
    else if (n == 1 || n == 0)
    {
        printf("%d", INT_MIN);
    }

    else
    {
        printf("second largest element is %d", arr[n - 3]);
    }
    return 0;
}