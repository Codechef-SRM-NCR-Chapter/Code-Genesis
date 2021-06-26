/*******************************************
Statement - Print Hello World
Programmer - Vineet Choudhary
Written For - http://developerinsider.in
********************************************/

#include <stdio.h>
#include <conio.h>
void main()
{
	int sal,t_sal,hra,da,pf,allow;
	char grade;
	clrscr();
	printf("Enter your basic salary and grade :\t");
	scanf("%d %c", &sal,&grade);
	switch(grade)
	{
		case 'A': allow = 1700;
		break;

		case 'B': allow = 1500;
		break;

		case 'C': allow = 1300;
		break;

		default: allow = 1300;
	}
	hra = 0.20*sal;
	da = 0.50*sal;
	pf = 0.11*sal;
	t_sal = sal + hra + da + allow - pf;
	printf("Total salary is : %d", t_sal);
	getch();
}