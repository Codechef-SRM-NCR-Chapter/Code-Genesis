#include <stdio.h>

int main()
{
    int n;
    printf("Enter odd number of rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= (n / 2) + 1; i++)
    {
        for (int j = (n / 2) + 1; j > i; j--)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    for (int i = n / 2; i >= 1; i--)
    {
        for (int j = i; j <= n / 2; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}