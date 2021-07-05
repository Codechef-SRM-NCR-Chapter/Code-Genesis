#include <stdio.h>

int main()
{
    int target, n, temp;
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

    int first = -1, last = -1;
    for (int i = 0; i < n; i++)
    {
        if (target != nums[i])
            continue;
        if (first == -1)
            first = i;
        last = i;
    }
    if (first != -1)
    {
        printf("%d\n", first);
        printf("%d", last);
    }

    else
    {
        printf("%d\n", first);
        printf("%d", last);
    }
    return 0;
}