#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    char choice;
    scanf(" %c", &choice);

    switch (choice)
    {
    case '+':
    {
        printf("%d", a + b);
    }
    break;
    case '-':
    {
        printf("%d", a - b);
    }
    break;
    case '*':
    {
        printf("%d", a * b);
    }
    break;
    case '/':
    {
        printf("%.2f",(float) a / b);
    }
    break;
    default:
        printf("invalid input");
    }

    return 0;
}