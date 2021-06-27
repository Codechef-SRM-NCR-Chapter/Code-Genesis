#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	char sign;
	clrscr();
	printf("Enter the operation to be performed");
	scanf("%c", &sign);
	printf("Enter the two digits : ");
	scanf("%d %d", &x,&y);

	switch(sign)
	{
		case '+': z = x+y;
		printf("Solution is %d",z);
		break;

		case '-': z = x-y;
		printf("Solution is %d",z);
		break;

		case '*': z = x*y;
		printf("Solution is %d",z);
		break;

		case '/': z = x/y;
		printf("Solution is %d",z);
		break;

		default: printf("Invalid entry");
	}
	getch();
}