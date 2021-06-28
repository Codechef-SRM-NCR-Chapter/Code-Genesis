#include <stdio.h>
int main()
{
    int i, j;

// printf("enter the coordinates x,y on xy axis: ");
    scanf("%d %d", &i, &j);

    if (i > 0 && j > 0)
    {
        printf("the coordinates (%d,%d) are in Quadrant 1\n", i, j);
    }

    else if (i < 0 && j > 0)
    {
        printf("the coordinates (%d,%d) are in Quadrant 2\n", i, j);
    }
    else if (i < 0 && j < 0)
    {
        printf("the coordinates (%d,%d) are in Quadrant 3\n", i, j);
    }
    else if (i > 0 && j < 0)
    {
        printf("the coordinates (%d,%d) are in Quadrant 4\n", i, j);
    }
    else if (i && j == 0)
    {
        printf("the coordinates (%d,%d) lies on X axis\n", i, j);
    }
    else if (i == 0 && j)
    {
        printf("the coordinates (%d,%d) lies on Y axis\n", i, j);
    }
    else
    {
        printf("the coordinates (0,0) lies on origin\n");
    }

    return 0;
}