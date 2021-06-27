#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter 1st coordinate : ");
    scanf("%d", &x);
    printf("Enter 2nd coordinate : ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("Quadrant 1");
    else if (x < 0 && y > 0)
        printf("Quadrant 2");
    else if (x < 0 && y < 0)
        printf("Quadrant 3");
    else if (x > 0 && y < 0)
        printf("Quadrant 4");
    else if (x != 0 &&y == 0)
        printf("X - axis");
    else if (x == 0 && y != 0)
        printf("Y - axis");
    else if (x == 0 &&y == 0)
        printf("Origin");
        
    return 0;
}