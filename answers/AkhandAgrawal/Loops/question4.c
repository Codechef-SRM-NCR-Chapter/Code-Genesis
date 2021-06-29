#include <stdio.h>

int main()
{
    int num1, num2, i, j, prime;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    for (i = num1 + 1; i < num2; i++)
    {

        for (j = 2; j < i; j++)
        {
            prime = 1;
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}