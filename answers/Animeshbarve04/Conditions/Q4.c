#include <stdio.h>

int main()
{
    int x, y;
    //printf("x and y \n");
    scanf("%d %d", &x, &y);
    if (x == 0)
    {
        y == 0 ? printf("Origin") : printf("Y axis");
    }
    if (y == 0)
    {
        x == 0 ? printf("Origin") : printf("X axis");
    }
    if (x > 0)
    {
        y > 0 ? printf("Quadrant 1") : printf("Quadrant 4");
    }
    if (x < 0)
    {
        y > 0 ? printf("Quadrant 2") : printf("Quadrant 3");
    }

    return 0;
}