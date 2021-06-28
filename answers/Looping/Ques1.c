#include<stdio.h>
int main()
{
  int num, sqr, i;
  printf("Enter the number : ");
  scanf("%d", &num);
  for (int i=0; i<num; i++){
    sqr=i*i;
    if (sqr>num){
      printf("The integral part of the square root of %d : %d\n", num, i-1);
      break;
    }
  }
  return 0;
}