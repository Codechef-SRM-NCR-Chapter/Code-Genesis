#include <stdio.h>
#include <string.h>
int main()
{
    int id, usewater, netamt;
    char name[100];
    float chg;
    scanf("%d%s%d", &id, &name, &usewater);

    if (usewater <= 199)
    {
        chg = 3;
    }
    else if (usewater >= 200 && usewater < 400)
    {
        chg = 3.35;
    }
    else if (usewater >= 400 && usewater < 600)
    {
        chg = 4.80;
    }
    else if (usewater >= 600)
    {
        chg = 5.10;
    }
    printf("\n");
    printf("%d\n",id);
    printf("%s\n",name);

    float subamt = usewater * chg;
    if(subamt>1250)
    {
       int surchg = subamt*.15;
       netamt = subamt + surchg;
       printf("%d\n",netamt);
    }
    else 
    {
        netamt = subamt;
        printf("%d\n",netamt);
    }

    return 0;
}