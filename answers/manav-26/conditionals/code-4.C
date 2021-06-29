#include<stdio.h>
#include<conio.h>
void main()
{int x,y;
clrscr();
printf("enter the coodinates=");
scanf("%d %d",&x,&y);

{if(x>0 && y>0)
{printf(" 1st quadrant"); }
else if(x<0 && y>0)
{printf(" 2nd quadrant");}
else if(x<0 && y<0)
{printf("3rd quadrant"); }
else if(x==0)
{printf("lies on y-axis");}
else if(y==0)
{printf("lies on x-axis");}
else
{printf("4th quadrant");}
}
getch();
}