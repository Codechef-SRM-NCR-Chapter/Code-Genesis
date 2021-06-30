#include <stdio.h>
int main()
{

    int n;
    printf("enter length of array:");
    scanf("%d", &n);
    int i, j, k, l, target, num[n];
    printf("enter the numbers of arrey in acending order:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("enter the target:  ");
    scanf("%d", &target);
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            for (k = j+1; k < n; k++)
            {
                for (l = k+1; l < n; l++)
                {
                    int sum = num[i] + num[j] + num[k] + num[l];
                    if (sum == target)
                    {
                        printf("[%d,%d,%d,%d]\n", num[i], num[j], num[k], num[l]);
                    }
                
                }
            }
        }
    
    return 0;
}