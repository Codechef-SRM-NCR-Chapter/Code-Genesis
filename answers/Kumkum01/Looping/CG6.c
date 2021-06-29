#include <stdio.h>
#include<conio.h>
int main()
{
    int n;
    float temp,sqrt;
    clrscr();
    printf("Enter the number:\n");
    scanf("%d", &n);
    sqrt=n/2;
    temp = 0;
    while(sqrt!=temp)
    {
    temp=sqrt;
    sqrt=(n/temp+temp)/2;
    }
    printf("%f",sqrt);
getch();
return 0;
}