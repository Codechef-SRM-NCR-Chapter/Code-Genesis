#include <stdio.h>

int main()
{
    int n;
    printf("length of the array: ");
    scanf("%d",&n);
    if (n < 2 || n > 104)
    {
        printf("enter valid length\n");
        
    }
    else
    {
        int num[n], i, j, target;
        printf("enter the numbers: ");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }
        printf("enter the target: ");
        scanf("%d", &target);

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (num[i] + num[j] == target)
                {
                    //i==j;
                    printf("%d,%d\n", i, j);
                    break;
                }
            }
        }
    }
    return 0;
}