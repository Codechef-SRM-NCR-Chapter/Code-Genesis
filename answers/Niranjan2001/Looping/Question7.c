#include <stdio.h>
int main()
{
    int i, j, n;
    printf("enter no. ");
    scanf("%d", &n);
    for (i = 1; i <=n; i++)
    {
         for (j =1; j <=n; j++)
         {
             printf(" ");
         }
         for (j = i; j >=1; j--)
         {
            printf("%c",73-j);
         }
    printf("\n");
    }

  return 0;
}