#include<stdio.h>
int main()
{
  int row;
  printf("Enter the number of rows : ");
  scanf("%d", &row);
  for (int i=row; i>=1; i--){
    for (int j=i; j<=row; j++){
      printf("%c ",'A'+(j-1));
    }printf("\n");
  }
  return 0;
}