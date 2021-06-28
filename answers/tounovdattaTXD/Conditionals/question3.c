#include <stdio.h>
#include <string.h>  
void main()
{  
   int custid, conunit;
   float chg, surchg=0, gramt,netamt;
   char conname[25];

   printf("Input Customer ID :");
   scanf("%d",&custid);
   printf("Input the name of the customer :");
   scanf("%s",&conname);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&conunit);
   if (conunit <200 )
   {
       chg = 3.00;
   }
   else	if ((conunit>=200) && (conunit<400))
   {
       chg = 3.35;
   }
   else if ((conunit>=400) && (conunit<600))
   {
       chg = 4.80;
   }
   else
   {
       chg = 5.10;
   }
   gramt = conunit*chg;
   if (gramt>1250)
   {
       surchg = (gramt*15)/100;
   }
   netamt = gramt+surchg;
   printf("\nElectricity Bill\n");
   printf("Customer ID                         :%d\n",custid);
   printf("Customer Name                       :%s\n",conname);
   printf("unit Consumed                       :%d\n",conunit);
   printf("Amount Charges @Rs. %f  per unit    :%f\n",chg,gramt);
   printf("Surchage Amount                     :%f\n",surchg);
   printf("Net Amount Paid By the Customer     :%f\n",netamt);

}  
