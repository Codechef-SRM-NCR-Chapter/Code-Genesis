#include<stdio.h>
#include<conio.h>
void main()
{float a,b;
char x[30];
int c;
clrscr();
printf("coustmer id=");
scanf("%d",&c);
printf("coustmer's name=");
scanf("%s",x);
printf("water in litres used=");
scanf("%f",&a);
{if(a<=199)
{b=a*3;}
else if(a>=200 && a<400)
{b=(a*335)/100;}
else if(a>=400 && a<600)
{b=(a*48)/10;}
else if(a>=600)
{b=(a*51)/10;}
else
{printf(" ");}}
if(b>1250)
{b=b+((b*15)/100);
printf("\n%d \n",c);
printf("%s \n",x);
printf("%f \n",a);
printf("%f \n",b);}
else
{ printf("\n%d \n",c);
printf("%s \n",x);
printf("%f \n",a);
printf("%f \n",b);}
getch();
}