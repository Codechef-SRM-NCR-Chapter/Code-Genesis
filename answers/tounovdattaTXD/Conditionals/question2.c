#include <stdio.h>
int main()
{
    int dd, mm, yyyy;
    printf("Enter the date in dd mm yyyy format\n");
    scanf("%d\n%d\n%d", &dd, &mm, &yyyy);
    switch(mm)
    {
        case 01:
        if(dd>31)
        {
            printf("Enter a valid date");
        }
        else
        {
            printf("January %d, %d", dd, yyyy);
        }
        break;
        case 02:
        if(yyyy%4==0)   //checking for leap year
        {
            if(dd>29)
            printf("Enter a valid date");
        }
        else if(dd>28)
        {
            printf("Enter a valid date");
        }
        else
        {
            printf("February %d, %d", dd, yyyy);
        }
        break;
        case 03:
        if(dd>31)
        {
            printf("Enter a valid date");
        }
        else
        {
            printf("March %d, %d", dd, yyyy);
        }
        break;
        case 04:
        if(dd>30)
        {
            printf("Enter a valid date");
        }
        else
        {
            printf("April %d, %d", dd, yyyy);
        }
        break;
        case 05:
        if(dd>31)
        {
            printf("Enter a valid date");
        }
        else
        {
            printf("May %d, %d", dd, yyyy);
        }
        break;
        case 06:
        if(dd>30)
        {
            printf("Enter a valid date");
        }
        else
        {
            printf("June %d, %d", dd, yyyy);
        }
        break;
        case 07:
        if(dd>31)
        {
            printf("Enter a valid date");
        }
        else
        {
            printf("July %d, %d", dd, yyyy);
        }
        break;
        case 08:
        if(dd>31)
        {
            printf("Enter a valid date");
        }
        else
        {
            printf("August %d, %d", dd, yyyy);
        }
        break;
        case 09:
        if(dd>30)
        {
            printf("Enter a valid date");
        }
        else
        {
            printf("September %d, %d", dd, yyyy);
        }
        break;
        case 10:
        if(dd>31)
        {
            printf("Enter a valid date");
        }
        else
        {
            printf("October %d, %d", dd, yyyy);
        }
        break;
        case 11:
        if(dd>30)
        {
            printf("Enter a valid date");
        }
        else
        {
            printf("November %d, %d", dd, yyyy);
        }
        break;
        case 12:
        if(dd>31)
        {
            printf("Enter a valid date");
        }
        else
        {
            printf("December %d, %d", dd, yyyy);
        }
        break;
        default: printf("enter a valid month number"); break;
    }

    return 0;
}
