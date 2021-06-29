#include <stdio.h>

int main()
{
    int n, sqroot, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    sqroot = n / 2;
    temp = 0;

    while (sqroot != temp)
    {
        temp = sqroot;
        sqroot = (n / temp + temp) / 2;
    }
    printf("%d", sqroot);
    return 0;
}
