#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,d,e;
char i;
clrscr();
printf("the basic salary is  ");
scanf("%f",&a);
printf("the grade is  ");
scanf("%s", &i);
b=a/5;
c=a/2;
d=(a/100)*11;
if(i=='a'|| i=='A')
{e=a+b+c-d+1700;
printf("the total salary is %f",e);}
else if(i=='b'|| i=='B')
{e=a+b+c-d+1500;
printf("the total salary is %f",e);}
else
{e=a+b+c-d+1300;
printf("the total salary is %f",e);}
getch();
}
