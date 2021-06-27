#include <stdio.h>

int main()
{
    int basic, allow,k;
    float hra, da, pf ;
    char grade;
    //printf("Enter the basic salary of a person : \n");
    scanf("%d", &basic);
   // printf("Enter the grade of salary: \n");
    scanf("%c", &grade);

    hra = (20 * basic) / 100;
    da = (50 * basic) / 100;
    pf = (11 * basic) / 100;
    if (grade == 'A')
    {
        allow = 1700;
    }
    else if (grade == 'B')
    {
        allow = 1500;
    }

    else
    {
        allow = 1300;
    }

k = basic + hra + da + allow - pf;
printf("%d\n", k);
return 0;
}