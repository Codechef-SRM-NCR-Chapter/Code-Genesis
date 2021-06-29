#include <stdio.h>

int main()
{
    int first, second, i, flag;

    printf("enter the two numbers:\n");
    scanf("%d %d", &first, &second);
    printf("the no. between the two no are as follows\n");
    while (first < second)
    {
        flag = 0;
        if (first <= 1)
        {
            ++first;
            continue;
        }
        for (i = 2; i <= first / 2; i++)
        {
            if (first % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\n", first);
        }
        ++first;
    }

    return 0;
}