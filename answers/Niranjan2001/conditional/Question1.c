#include <stdio.h>
int main()
{
    int basic, salary;
    char allow;
    scanf("%d %c", &basic, &allow);

    int hra = .2 * basic;
    int da = .5 * basic;
    int pf = .11 * basic;

    if (allow == 'A')
    {
        salary = basic + hra + da + 1700 - pf;
        printf("%d",salary);
    }
    else if (allow == 'B')
    {
        salary = basic + hra + da + 1500 - pf;
        printf("%d",salary);
    }
    else
    {
        salary = basic + hra + da + 1300 - pf;
        printf("%d",salary);
    }

    return 0;
}