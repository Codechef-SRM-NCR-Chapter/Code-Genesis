#include<stdio.h>
#include<conio.h>
int main()
{
 int n,temp,sr;
 clrscr();
 printf("Enter the number: ");
 scanf("%d", &n);
 do
 {
  sr=n/2;
  temp=sr;
  sr=(temp+(n/temp))/2;
  }
  while(temp-sr!=0)
 printf("Square root of %d = %d",n,sr);
 gtech();
 return 0;
}