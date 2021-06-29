#include<stdio.h>
int main()
{
  int INT_MIN=-2147483648;
  int ent, num, large=INT_MIN, slarge=INT_MIN;
  printf("Total number of elements : ");
  scanf("%d", &ent);
  printf("Enter the elements : ");
  for (int i=1; i<=ent; i++){
    scanf("%d", &num);
    if (num>large){
      slarge=large;
      large=num;
    }
    else if (num>slarge && num!=large){
      slarge=num;
    }i++;
  }printf("%d\n", slarge);
  return 0;
}