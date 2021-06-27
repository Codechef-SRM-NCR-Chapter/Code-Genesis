#include<stdio.h>
int main()
{
  int num1, num2, result;
  char operator;
  printf("Enter first number : ");
  scanf("%d", &num1);
  printf("Enter second number : ");
  scanf("%d", &num2);
  printf("Enter the operator : ");
  scanf(" %c", &operator);
  switch (operator){
    case '+':
      result = num1+num2;
      break;
    case '-':
      result = num1-num2;
      break;
    case '*':
      result = num1*num2;
      break;
    case '/':
      result = num1/num2;
      break;
    default:
      result=0;
      break;
  }
  if (result==0){
    printf("Oops!! Invalid Entry...\n");
  }
  else{
    printf("Result : %d\n", result);
  }
  return 0;
}