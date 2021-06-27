#include <stdio.h>
#include <string.h>  
void main()
{  
   int custid, conu;
   float chg, surchg=0, gramt,netamt;
   char connm[25];

   printf("Input Customer ID :");
   scanf("%d",&custid);
   printf("Input the name of the customer :");
   scanf("%s",connm);
   printf("Input the litres consumed by the customer : ");
   scanf("%d",&conu);
   if (conu <199 )
	chg = 3;
   else	if (conu>=200 && conu<400)
		chg = 3.35;
	else if (conu>=400 && conu<600)
			chg = 4.80;
		else
			chg = 5.10;
   gramt = conu*chg;
   if (gramt>1250)
	surchg = gramt*15/100.0;
   netamt = gramt+surchg;
   if (netamt  < 100)
	netamt =100;
   printf("\nWater Bill\n");
   printf("Customer IDNO                       :%d\n",custid);
   printf("Customer Name                       :%s\n",connm);
   printf("litres Consumed                       :%d\n",conu);
   printf("Net Amount Paid By the Customer     :%8.2f\n",netamt);

}  

