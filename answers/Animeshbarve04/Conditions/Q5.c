#include<stdio.h>

int main()
{
    int n1,n2;
    char ch;
    printf("Num,num and operator ");
    scanf("%d %d %c",&n1,&n2,&ch);
    switch (ch)
    {
    case 43:
        printf("%d ",n1 + n2);
        break;
    case 45:
        printf("%d ",n1 - n2);
        break;
    case 42:
        printf("%d ",n1 * n2);
        break;
    case 47:
        printf("%d ",n1 / n2);
        break;
    default:
        break;
    }
    return 0;
}