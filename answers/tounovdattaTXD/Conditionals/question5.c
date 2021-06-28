#include<stdio.h>
void main()
{
    int x, y, result;
    char op;
    printf("Enter two integers:\n");
    scanf("%d\n%d", &x, &y);
    printf("Enter the operator(+ - / *):\n");
    scanf("%c", &op);
    switch(op)
    {
        case '+': result= x+y; break;
        case '-': result= x-y; break;
        case '*': result= x*y; break;
        case '/': result= x/y; break;
        default: printf("Not valid input"); break;
    }
    printf("Result is: %d", result);
    
}