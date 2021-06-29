#include <stdio.h>
#include <conio.h>

void main()
{
 int a,b,i,j,count = 0;
 clrscr();
 printf("Enter Your First Number\n");
 scanf("%d", &a);
 printf("Enter Your Last Number\n");
 scanf("%d", &b);
 for(i=a; i<=b; i++)
 {
 count=0;
 for(j=1; j<=i; j++)
 {
 if(i % j == 0) {
 count++;
 }
 }
 if(count==2) {
 printf("%d\t",i);
 }
 }
 getch();
 return 0;
}
