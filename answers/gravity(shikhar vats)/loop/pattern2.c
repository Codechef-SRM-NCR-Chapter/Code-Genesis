#include <stdio.h>
int main()
{
    int i, j, n;

    printf("enter the no. of rows:");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("pls enter odd value");
    }
    else
    {
        for (i = 1; i < n-1; i++)
        {
            for (j = 1; j <= n - i; j++)
            {
                printf("  ");
            }
            for (j = 1; j <= 2 * i- 1; j++)
            {
                printf(" *");
            }
            printf("\n");
        }
        for (i = 1; i <=n-1; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("  ");
            }
            for (j = 1; j <= 2 *(n-i)-1; j++)
            {
                printf(" *");
            }
            printf("\n");
        }
    }
    return 0;
}