#include<stdio.h>
#include<conio.h>
int main()
{
 int TS,basic,hra,da,allowance,pf;
 char grade;
 clrscr();
 printf("Enter the basic salary: ");
 scanf("%d",&basic);
 printf("Enter the grade: ");
 scanf("%s",&grade);

  if (grade==65)
  {
   allowance=1700;
  }
 else if (grade==66)
  {
   allowance=1500;
  }
  else
  {
   allowance=1300;
  }
  TS=basic+(20/100)*basic+(50/100)*basic+allowance-(11/100)*basic;
  printf("Total Salary: %d", TS);
  getch();
  return 0;
  }