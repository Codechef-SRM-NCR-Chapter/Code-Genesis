#include<stdio.h>
int main()
{
  int row, m=1;
  char cont;
  start:
  printf("Enter the number of rows (odd) : ");
  scanf("%d", &row);
  if (row>0){
    for (int r=1; r<=row; r++){
      if (row%2==0){
        printf("Enter number of rows in valid format ...\n");
        goto continuation;
      }
      else{
        goto program;
      }
    }
  }
  else{
    printf("Enter number of rows in valid format ...\n");
    goto continuation;
  }
  program:
    for (int i=1; i<=row; i+=2){
      for (int j=1; j<=(row-i)/2; j++){
        printf("  ");
      }
      for (int k=1; k<=i; k++){
        printf("* ");
      }printf("\n");
    }
    for (int i=1; i<=(row-1); i+=2){
      for (int j=1; j<=m; j++){
        printf("  ");
      }m++;
      for (int k=i; k<(row-1); k++){
        printf("* ");
      }printf("\n");
    }
    goto end;
  continuation:
    printf("Want to continue?\n");
    scanf(" %c", &cont);
    switch(cont){
      case 'y':
        goto start;
      case 'n':
        goto end;
      default:
        printf("Wrong entry!!\n");
        goto end;
    }
  end:
    printf("This is the end of program..\n");
  return 0;
}