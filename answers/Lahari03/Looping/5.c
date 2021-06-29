#include <stdio.h>

int main()
{
    int i, n, a, b, N;
    a = b = 0;
    printf("Total number of elements : ");
    scanf("%d", &n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("\n Enter the Number = ");
        scanf("%d", &N);
        if (N > a)
        {
            b = a;
            a = N;
        }
        else if (N > b)
            b = N;
    }
    printf("\n Second highest number is= %d", b);
    return 0;
}