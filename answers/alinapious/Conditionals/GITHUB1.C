#include<stdio.h>
#include<conio.h>
int main()
{
 int totalSalary,basic,hra,da,allow,pf;
 char grade;
 clrscr();
 printf("Enter the basic salary: ");
 scanf("%d",&basic);
 printf("Enter the grade: ");
 scanf("%s",&grade);
  hra=basic*0.20;
  da=basic*0.50;
  pf=basic*0.11;
  if (grade==65)
  {
   allow=1700;
  }
 else if (grade==66)
  {
   allow=1500;
  }
  else
  {
   allow=1300;
  }

  totalSalary=basic+hra+da+allow-pf;
  printf("Total Salary: %d", totalSalary);
  getch();
  return 0;
  }