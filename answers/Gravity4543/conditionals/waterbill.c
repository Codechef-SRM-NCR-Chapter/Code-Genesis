#include <stdio.h>
#include <conio.h>
int main()
{
    int id, liters, amt;
    float charge;
    char name[50];

    //input user id
    scanf("%d", &id);
    //input user name
    scanf("%s", &name);
    //input liters
    
    scanf("%d", &liters);

    printf("\n %d", id);
    printf("\n %s", name);
    printf("\n %d\n", liters);
    if (liters <= 199)
    {
        charge = 3;
    }
    else if (liters >= 200 && liters < 400)
    {
        charge = 3.35;
    }
    else if (liters >= 400 && liters < 600)
    {
        charge = 4.80;
    }
    else
    {
        charge = 5.10;
    }
    amt = liters * charge;

    if (amt > 1250)
    {
        amt = amt + (15 * amt) / 100;
    }
    printf("%d \n", amt);

    return 0;
}