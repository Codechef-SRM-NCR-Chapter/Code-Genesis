#include<stdio.h>
int main()
{
    int custId,cuns,am;
    char custn[100];
    float c,s;
    scanf("%d",&custId);
    scanf("%s",&custn);
    scanf("%d",&cuns);
    if (cuns<=199)
    {
        c=3;
    }
    else if(cuns>=200 && cuns<400)
    {
        c=3.35;
    }
    else if(cuns>=400 && cuns<600)
    {
        c=4.8;
    }
    else if(cuns>=600)
    {
        c=5.10;
    }
    printf("%d\n",custId);
    printf("%s\n",custn);
    printf("%d\n",cuns);
    am=c*cuns;
    if (am>1250)
    {
        s=(0.15*am);
        s=s+am;
    }
    else
    {
       s=am;
    }
    printf("%.0f",s);
}
