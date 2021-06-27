#include <stdio.h>

int main()
{
    float a,b,c;
    char x;
    printf("Enter the numbers\n");
    scanf("%f%f",&a,&b);
    printf("Enter the operation you want\n");
    scanf(" %c",&x);
    if(x=='+')
    c=a+b;
    else if(x=='-')
    c=a-b;
    else if(x=='*')
    c=a*b;
    else if(x=='/')
    c=a/b;
    printf("%.2f%c%.2f=%.2f",a,x,b,c);
    return 0;
}