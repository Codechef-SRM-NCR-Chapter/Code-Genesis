#include <stdio.h>
int main()
{
    int number;
    float temp,sqrt;
    printf("Enter the number:\n");
    
    scanf("%d", &number);
    
    sqrt=number / 2;
    temp = 0;

    while(sqrt!=temp)
    {
        temp=sqrt;
        sqrt=(number/temp+temp)/2;
    }
    printf("%f",sqrt);
    
return 0;
}

