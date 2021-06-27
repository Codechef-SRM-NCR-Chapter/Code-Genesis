#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("Enter x and y coordinates : ");
	scanf("%d %d", &x,&y);
	if(x>0 && y>0)
		printf("Quadrent 1");
	else if(x<0 && y>0)
		printf("Quadrent 2");
	else if(x<0 && y<0)
		printf("Quadrent 3");
	else if(x>0 && y<0)
		printf("Quadrent 4");
	else if(x==0 && y==0)
		printf("Origin");
	else if(y==0)
		printf("X axis");
	else if(x==0)
		printf("Y axis");
	else
		printf("Invalid entry");
	getch();
}