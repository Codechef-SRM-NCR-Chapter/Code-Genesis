#include <stdio.h>

int main()
{
    int basic, allow, totalsalary;
    char grade;
    float hra, da, pf;
    printf("Enter your basic salary and your grade(in uppercase):\n");
    scanf("%d %c", &basic, &grade);
    switch(grade)
    {
        case 'A': allow= 1700; 
        break;
        case 'B': allow= 1500;
        break;
        default: allow= 1300;
        break;
    }
    hra= (20*basic)/100;
    da= (50*basic)/100;
    pf= (11*basic)/100;
    totalsalary= basic+hra+da+allow-pf;
    printf("The total salary is: %d", totalsalary);

    return 0;
}
