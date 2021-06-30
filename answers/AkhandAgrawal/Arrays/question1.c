#include <stdio.h>

int main()
{
    int target, n, flag;
    flag = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int nums[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    printf("Enter the value of target: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if ((nums[i] + nums[j]) == target)
                {
                    printf("%d\n%d\n", i, j);
                    flag = 1;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }

    return 0;
}