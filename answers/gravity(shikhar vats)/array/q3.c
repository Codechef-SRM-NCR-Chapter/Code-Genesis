#include <stdio.h>
int main()
{
    int n;
    printf("enter length of array:");
    scanf("%d", &n);
    int i, j, target, num[n];
    int result[2];
    result[0] = -1;
    result[1] = -1;

    int start=-1;
    int end=-1;
    printf("enter the numbers of arrey in acending order:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("target:");
    scanf("%d", &target);

    for (j = n-1; j >=0 ; j--)
    {
        if (num[j] == target && j != i)
        {
             start = j;
        }
        else
        {
            result[1];
        }
    for (i = 0; i < n; i++)
    {
        if (num[i] == target)
        {
             end = i;
            
        }
        else
        {
            result[0];
        }
    }
    }
printf("%d,%d\n",start,end);
    return 0;
}