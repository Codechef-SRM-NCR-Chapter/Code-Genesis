#include<stdio.h>
int main()
{
    int basic,tsal;
    int hra,da,allow,pf;
    char grade;
    scanf("%d %ch",&basic,&grade);
    hra=(0.20*basic);
    da=(0.50*basic);
    pf=(0.11*basic);
    if(grade=='A')
    {
        allow=1700;
        tsal=basic+hra+da+allow-pf;
    }
    if(grade=='B')
    {
        allow=1500;
        tsal=basic+hra+da+allow-pf;
    }

    else
    {
        allow=1300;
        tsal=basic+hra+da+allow-pf;
    }
    printf("%d",tsal);
}
