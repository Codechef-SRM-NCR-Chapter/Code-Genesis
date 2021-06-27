#include <stdio.h>
int main()
{
    int dath, month, year;
    scanf("%d%d%d", &dath, &month, &year);
    if (month >= 01 && month <= 12 && year >= 1000 && year <= 9999)
    {
        if (month == 01)
        {
            printf("January %d %d", dath, year);
        }
        else if (month == 02)
        {
            printf("February %d %d", dath, year);
        }
        else if (month == 03)
        {
            printf("March %d %d", dath, year);
        }
        else if (month == 04)
        {
            printf("April %d %d", dath, year);
        }
        else if (month == 05)
        {
            printf("May %d %d", dath, year);
        }
        else if (month == 06)
        {
            printf("June %d %d", dath, year);
        }
        else if (month == 07)
        {
            printf("July %d %d", dath, year);
        }
        else if (month == 8)
        {
            printf("August %d %d", dath, year);
        }
        else if (month == 9)
        {
            printf("September %d %d", dath, year);
        }
        else if (month == 10)
        {
            printf("October %d %d", dath, year);
        }
        else if (month == 11)
        {
            printf("November %d %d", dath, year);
        }
        else if (month == 12)
        {
            printf("December %d %d", dath, year);
        }
    }

    return 0;
}