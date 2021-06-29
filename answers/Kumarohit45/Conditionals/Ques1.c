#include<stdio.h>
int main()
{
  int basic, total, allow;
  float hra, da, pf;
  char grade;
  printf("Enter basic Salary (in Rs.) : ");
  scanf("%d", &basic);
  printf("Enter Grade (Uppercase Letter): ");
  scanf(" %c", &grade);
  hra = 0.2 * basic;
  da = 0.5 * basic;
  pf = 0.11 * basic;
  switch(grade){
    case 'A':
      allow = 1700;
      break;
    case 'B':
      allow = 1500;
      break;
    default:
      allow = 1300;
      break;
  }
  total = basic + hra + da + allow - pf;
  printf("Total Salary : %d\n", total);
  return 0;
}