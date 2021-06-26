#include <stdio.h>

int main()
{
    int bs, allow;
    char gr;
    float hra, da, pf, ts;
    //printf("Basic salary and Grade \n");
    scanf("%d %c", &bs, &gr);
    hra = 0.2 * (float)bs;
    da = 0.5 * (float)bs;
    pf = 0.11 * (float)bs;

    if (gr == 'A')
    {
        allow = 1700;
    }
    if (gr == 'B')
    {
        allow = 1500;
    }
    if (gr == 'C')
    {
        allow = 1300;
    }

    ts = (float)bs + hra + da + (float)allow - pf;
    printf("%d", (int)ts);
    return 0;
}