#include <stdio.h>
int main()
{
    int a, b, result;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Choose operation to perform: ");
    scanf(" %c" ,&op);

    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    }

    printf("Result = %d", result);
    return 0;
}