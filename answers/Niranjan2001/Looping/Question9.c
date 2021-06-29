#include <stdio.h>
int main()
{
    int i, n, a, b, c;
    printf("plzz enter the num which you want\n");
    scanf("%d%d",&a, &b);
    while (a < b)
    {
        c = 0;

        for (i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                c=1;
            }
        }
        if (c == 0)
        {
            printf("%d ", a);
        }
        a++;
    }

    return 0;
}