#include <stdio.h>

int main()
{
    int customID, water;
    float netamnt;
    char name[20];
    printf("Input Customer ID : ");
    scanf("%d", &customID);
    printf("Enter name: ");
    scanf("%s", name);
    printf("Input the litres consumed by the customer : ");
    scanf("%d", &water);

    if (water < 199)
        netamnt = water * 3;
    else if (200 <= water && water < 400)
        netamnt = water * 3.35;
    else if (400 <= water && water < 600)
        netamnt = water * 4.80;
    else if (water >= 600)
        netamnt = water * 5.10;

    if (netamnt > 1250)
        netamnt = netamnt + ((15 / netamnt) * 100);

    printf("Net Amount Paid By the Customer : %0.2f", netamnt);
    return 0;
}