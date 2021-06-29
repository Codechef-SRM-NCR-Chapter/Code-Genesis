#include<stdio.h>
#include<conio.h>
void main()
{
	int dd,yyyy,mm;
	clrscr();
	printf("Enter the day, month, year : ");
	scanf("%d %d %d", &dd,&mm,&yyyy);
	switch(mm)
	{
		case 1: printf("January %d %d", dd,yyyy);
		break;

		case 2: printf("February %d %d", dd,yyyy);
		break;

		case 3: printf("March %d %d", dd,yyyy);
		break;

		case 4: printf("April %d %d", dd,yyyy);
		break;

		case 5: printf("May %d %d", dd,yyyy);
		break;

		case 6: printf("June %d %d", dd,yyyy);
		break;

		case 7: printf("July %d %d", dd,yyyy);
		break;

		case 8: printf("August %d %d", dd,yyyy);
		break;

		case 9: printf("September %d %d", dd,yyyy);
		break;

		case 10: printf("October %d %d", dd,yyyy);
		break;

		case 11: printf("November %d %d", dd,yyyy);
		break;

		case 12: printf("December %d %d", dd,yyyy);
		break;

		default: printf("Invalid Month number.\n Please try again...");
		break;
	}
	getch();
}