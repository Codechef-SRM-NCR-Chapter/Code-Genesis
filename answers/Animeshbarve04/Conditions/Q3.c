#include <stdio.h>

int main()
{
    int id, wtr;
    char name[25];
    float bill;
    printf("Id : ");
    scanf("%d", &id);
    printf("Name : ");
    scanf("%s",&name);
    printf("Water in ltr : ");
    scanf("%d", &wtr);
    if (wtr >= 600)
    {
        bill = (float)wtr * 5.10;
    }
    if (wtr >= 400 && wtr < 600)
    {
        bill = (float)wtr * 4.80;
    }
    if (wtr >= 200 && wtr < 400)
    {
        bill = (float)wtr * 3.35;
    }
    if (wtr < 200)
    {
        bill = (float)wtr* 3.0;
    }
    if (bill > 1250)
    {
        bill = bill + 0.15 * bill;
    }
    printf("%d\n", id);
    printf("%s\n",name);
    printf("%d\n",wtr);
    printf("%d\n", (int)bill);

    return 0;
}