#include <stdio.h>

int main()
{
    int i, n;
    char ch;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    // A is 65 in ascii table
    for (i = n; i >= 1; i--)
    {
        for (ch = 65 + i - 1; ch <= 65 + n - 1; ch++)
        {
            printf("%c", ch);
        }

        printf("\n");
    }
    return 0;
}