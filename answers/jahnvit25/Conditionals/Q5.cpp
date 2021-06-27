include<stdio.h>

int main()
 {
    char ch;
    int n1,n2;

    printf("Choose the operator(+,-,*,/,%%): ");
    scanf("%c",&ch);

    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    switch(ch)
    {
       case '+':
         printf("%d + %d =\t%d\n",n1,n2,n1+n2); 
         break;
       case '-':
         printf("%d - %d =\t%d\n",n1,n2,n1-n2);
         break;
       case '*':
         printf("%d * %d =\t%d\n",n1,n2,n1*n2);
         break;
       case '/':
         printf("%d / %d =\t%d\n",n1,n2,n1/n2);
         break;
       case '%':
         printf("%d %% %d =\t%d\n",n1,n2,n1%n2);
         break;
       default:
         printf("Error! Invalid Operator.");
     }

    return (0);
