#include <stdio.h>

int main()
{
    char operation;
    int i, j;
  //printf("enter the operation \n");
    scanf("%c", &operation);

   // printf("enter the number to be calulated\n");
    scanf("%d  %d", &i,&j);
    


    switch (operation)
    {
    case '+':
        printf("  %d\n",  i + j);
        break;

    case '-':
        printf(" %d\n", i - j);
        break;

    case '*':
        printf(" %d \n", i * j);
        break;

    case '/':
        printf(" %d\n",  i / j);
        break;
    default:
        printf("no such command exist");
    }

    return 0;
}