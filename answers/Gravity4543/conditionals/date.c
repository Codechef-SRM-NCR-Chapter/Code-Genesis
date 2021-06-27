#include <stdio.h>

int main()
{
    int date, month, year;
    printf("enter the date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &date, &month, &year);
    printf("%d", date);
    // date with if else
    if (date == 1 || date == 21 || date == 31)
    {
        printf("st ");
    }
    else if (date == 2 || date == 22)
    {
        printf("nd ");
    }
    else if (date == 3 || date == 23)
    {
        printf("rd ");
    }
    else
    {
        printf("th ");
    }
    //writing month in words with switch case
    switch (month)
    {
    case 1:
        printf("january ");
        break;
    case 2:
        printf("february ");
        break;
    case 3:
        printf("march ");
        break;
    case 4:
        printf("april ");
        break;
    case 5:
        printf("may ");
         break;
    case 6:
        printf("june ");
        break;
    case 7:
        printf("july ");
        break;
    case 8:
        printf("august ");
        break;
    case 9:
        printf("september ");
        break;
  case 10:
        printf("october ");
        break;
     case 11:
        printf("november ");
        break;
    case 12:
        printf("december ");
        break;
    default:
        printf("error");
    }
printf("%d\n", year);
    return 0;
}