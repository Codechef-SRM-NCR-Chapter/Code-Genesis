#include<stdio.h>
#include<conio.h>
void main()
{
	int id,l,bill;
	char name[20];
	clrscr();
	printf("Enter Customer Id : ");
	scanf("%d",&id);
	printf("Enter name of the customer : ");
	scanf("%s", &name);
	printf("Enter the liters consumed : ");
	scanf("%d", &l);
	if(l>=0 && l<=199)
		bill = 3*l;
	else if(l>=200 && l<400)
		bill = 3.35*l;
	else if(l>=400 && l<600)
		bill = 4.80*l;
	else if(l>=600)
		bill = 5.10*l;
	else
		printf("Invalid entry");
	if(bill>1250)
		bill = bill + bill*0.15;
	printf("Customer Id %d",id);
	printf("\nName of the customer %s", name);
	printf("\nLiters consumed %d", l);
	printf("\nWater bill= Rs %d", bill);
	getch();
}
