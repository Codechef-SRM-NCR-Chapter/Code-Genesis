#include <stdio.h>

int main()
{
    int date, month, year;
    printf("Enter date : ");
    scanf("%d", &date);
    printf("Enter month : ");
    scanf("%d", &month);
    printf("Enter year : ");
    scanf("%d", &year);

    switch (month)
    {
    case 1:
        printf("January %d %d", date, year);
        break;
    case 2:
        printf("February %d %d", date, year);
        break;
    case 3:
        printf("March %d %d", date, year);
        break;
    case 4:
        printf("April %d %d", date, year);
        break;
    case 5:
        printf("May %d %d", date, year);
        break;
    case 6:
        printf("June %d %d", date, year);
        break;
    case 7:
        printf("July %d %d", date, year);
        break;
    case 8:
        printf("August %d %d", date, year);
        break;
    case 9:
        printf("September %d %d", date, year);
        break;
    case 10:
        printf("October %d %d", date, year);
        break;
    case 11:
        printf("November %d %d", date, year);
        break;
    case 12:
        printf("December %d %d", date, year);
        break;
    default:
        printf("Enter a valid month!");
        break;
    }
    return 0;
}