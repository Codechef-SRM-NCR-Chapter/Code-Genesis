#include<stdio.h>
#include<conio.h>

int main()
{
int customID, water;
float netamount;
char name[30];
clrscr();
printf("Input Customer ID : ");
scanf("%d", &customID);

printf("Input the litres consumed by the customer : ");
scanf("%d", &water);

if (water < 199)
{
netamount = water * 3;
}
else if (200 <= water && water < 400)
{
netamount = water * 3.35;
}
else if (400 <= water && water < 600)
{
netamount = water * 4.80;
}
else if (water >= 600)
{
netamount = water * 5.10;
}

if (netamount > 1250)
{
netamount = netamount + ((15 / netamount) * 100);
}

printf("Net Amount Paid By the Customer : %f", netamount);
getch();
return 0;
}