
#include<stdio.h>
int main(void)
{       

    int day, mon, year;

    char *months[] = {
                        "January", "February", "March", "April",
                        "May", "June", "July", "August", 
                        "September", "October", "November", "December",
                      };

    printf("Enter date(MM/DD/YYY): ");
    scanf("%d/%d/%d", &mon, &day, &year);

    printf("%d", day);

    
    if(day == 1 || day == 21 || day == 31)
    {
        printf("st ");
    }

    
    else if(day == 2 || day == 22)
    {
        printf("nd ");
    }

    
    else if(day == 3 || day == 23)
    {
        printf("rd ");
    }

    else
    {
        printf("th ");
    }    

    printf("%s %d", months[mon - 1], year);

    return 0;
}