#include<stdio.h>

int main() {
    int totalSalary, basic, da, hra, pf, allow;
    char grade;
    printf("Enter your salary : ");
    scanf("%d",&basic);
    printf("Enter the grade : ");
    scanf("%s", &grade);

    hra = (20/basic)*100;
    da = (50/basic)*100;
    pf = (11/basic)*100;
    
    switch (grade)
    {
    case 'A':
        allow = 1700;
        break;
    case 'B':
        allow = 1500;
        break;
    default:
        allow = 1300;
        break;
    }
    
    totalSalary = basic + hra + da + allow - pf;
    printf("Your total Salary : %d", totalSalary);
    return 0;
}