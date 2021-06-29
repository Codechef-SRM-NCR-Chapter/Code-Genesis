#include<stdio.h>
int main()
{
  int num1, num2, count;
  start:
    printf("Enter two numbers (ascending order) : ");
    scanf("%d %d", &num1, &num2);
    if (num1>num2){
    printf("Please enter the numbers in ascending order...\n");
    goto start;
    }
    else {
      goto program;
    }
  program:
    printf("Prime numbers between %d and %d : ", num1, num2);
    for (int i=num1; i<=num2; i++){
      if (i==1 || i==0){
        continue;
      }
      count=1;
      for (int j=2; j<=i/2; ++j){
        if (i%j==0){
          count=0;
          break;
        }
      }
      if (count ==1){
        printf("%d ", i);
      }
    }printf("\n");
  return 0;
}