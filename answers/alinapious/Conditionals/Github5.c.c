#include<stdio.h>
int main()
{
int a,b;
char c;
printf("\n Enter Operator");
scanf("%c", &c);
printf("\n Enter two numbers");
scanf("%d %d", &a, &b);
switch(c)
{
case '+':
printf("Addition of two numbers= %d", a+b);
break;
case '-':
printf("Subtraction of two numbers= %d", a-b);
break;
case'*':
printf("Multiplication of two numbers= %d", a*b);
break;
case '/':
printf("Division of two numbers= %d", a/b);
break;
default:
printf("Wrong Operator");
}
return 0;
}