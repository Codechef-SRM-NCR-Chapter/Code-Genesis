#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2;
    char c;
    scanf("%d\n%d",&n1,&n2);
    scanf("%s",&c);
    switch(c)
    {
        case '+':
            printf("%d", n1 + n2);
            break;

        case '-':
            printf("%d", n1 - n2);
            break;

        case '*':
            printf("%d", n1 * n2);
            break;

        case '/':
            printf("%d", n1/n2);
            break;

        default:
            printf("wrong choice\n");
    }
}
