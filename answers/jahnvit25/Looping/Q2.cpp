#include<stdio.h>
int main()
{
    int n,i,j;
 
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
 
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c",(char)(j+64));
        }
         printf("\n");
    }
return(0);
}

