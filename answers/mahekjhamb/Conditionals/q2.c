#include<stdio.h> // include stdio.h library

int main()
{

    int day, mon, year;

    char *months[] = {
                        "January", "February", "March", "April",
                        "May", "June", "July", "August",
                        "September", "October", "November", "December",
                      };

    printf("Enter date(DD/MM/YYY): ");
    scanf("%d/%d/%d", &day, &mon, &year);
    printf("%s %d %d", months[mon - 1],day, year);
}
