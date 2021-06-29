#include<stdio.h>
#include<conio.h>
 
void main()
{
 int i,j,n;
 
 printf("Enter the no. of rows \n");
 scanf("%d",&n);
 for(i=n;i>=1;i--)
 {
 for(j=i;j<=n;j++)
 {
 printf("%c",j+64);
 }
 printf("\n");
 
 }
}