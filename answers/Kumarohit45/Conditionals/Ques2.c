#include<stdio.h>
int main()
{
  int day, month, year;
  printf("Enter day/month/year : ");
  scanf("%d %d %d", &day, &month, &year);
  switch(month){
    case 01:
      printf("January %d %d\n", day, year);
      break;
    case 02:
      printf("February %d %d\n", day, year);
      break;
    case 03:
      printf("March %d %d\n", day, year);
      break;
    case 04:
      printf("April %d %d\n", day, year);
      break;
    case 05:
      printf("May %d %d\n", day, year);
      break;
    case 06:
      printf("June %d %d\n", day, year);
      break;
    case 07:
      printf("July %d %d\n", day, year);
      break;
    case 8:
      printf("August %d %d\n", day, year);
      break;
    case 9:
      printf("September %d %d\n", day, year);
      break;
    case 10:
      printf("October %d %d\n", day, year);
      break;
    case 11:
      printf("November %d %d\n", day, year);
      break;
    default:
      printf("December %d %d\n", day, year);
      break;
  }
  return 0;
}