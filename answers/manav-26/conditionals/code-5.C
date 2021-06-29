#include<stdio.h>
void main()
{float a,b;
char i;
float c;
printf("enter the first value=");
scanf("%f",&a);
printf("enter the secoond value=");
scanf("%f",&b);
printf("enter the operator =");
scanf("%s",&i);
{if(i=='+')
{c=(a+b);}
else if(i=='-')
{c=(a-b);}
else if(i=='*')
{c=(a*b);}
else if(i=='/')
{c=(a/b);}
else
{printf("enter valid operator");}}
printf("%f",c);
}
