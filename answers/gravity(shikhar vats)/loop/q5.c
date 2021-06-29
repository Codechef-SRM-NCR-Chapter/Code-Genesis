#include <stdio.h>
#include<limits.h>

int main()
{
    int i, j, a, n, k[20];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &k[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (k[i] > k[j])
                a = k[i];
            k[i] = k[j];
            k[j] = a;

            if (k[i] == k[j])
                k[j] == INT_MIN;
        }
    }
    printf("%d",k[j]);

    return 0;
}