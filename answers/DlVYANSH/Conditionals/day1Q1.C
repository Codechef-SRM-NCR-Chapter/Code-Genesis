#include <stdio.h>

int main()
{
    int basic,totalSalary;
    char x;
    printf("Enter the basic salary\n");
    scanf("%d",&basic);
    printf("Enter the grade\n");
    scanf(" %c",&x);
    if(x=='A'){
    totalSalary =basic+0.2*basic+0.5*basic+1700-0.11*basic;}
    // printf("Total salary = %d",totalSalary);}
    else if(x=='B'){
    totalSalary =basic+0.2*basic+0.5*basic+1500-0.11*basic;}
    // printf("Total salary = %d",totalSalary);}
    else {
    totalSalary =basic+0.2*basic+0.5*basic+1300-0.11*basic;}
    printf("Total salary = %d",totalSalary);
    return 0;
}