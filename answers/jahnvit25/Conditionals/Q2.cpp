#include<stdio.h>
int main()
{
	int date,month,year,i;
    printf("Enter date");
    scanf("%d", &date);
    printf("Enter month");
    scanf("%d", &month);
    printf("Enter year");
    scanf("%d", &year);
    switch(month)
    {
    	case 1:
    	printf("january/%d/%d",date,year);
    	break;
    	case 2:
    	printf("february/%d/%d",date,year);
    	break;
    	case 3:
    	printf("march/%d/%d",date,year);
    	break;
    	case 4:
    	printf("april/%d/%d",date,year);
    	break;
    	case 5:
    	printf("may/%d/%d",date,year);
    	break;
    	case 6:
    	printf("june/%d/%d",date,year);
    	break;
    	case 7:
    	printf("july/%d/%d",date,year);
    	break;
    	case 8:
    	printf("august/%d/%d",date,year);
    	break;
    	case 9:
    	printf("september/%d/%d",date,year);
    	break;
    	case 10:
    	printf("october/%d/%d",date,year);
    	break;
    	case 11:
    	printf("november/%d/%d",date,year);
    	break;
    	case 12:
    	printf("december/%d/%d",date,year);
    	break;
    	default:
    		printf("wrong input");
	}
return(0);
}
