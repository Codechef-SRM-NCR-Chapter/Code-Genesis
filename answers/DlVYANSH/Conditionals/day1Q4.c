#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter the coordinates\n");
    scanf("%d %d",&x,&y);
    if(x>0&&y>0)
    printf("The cordinatess lies in first quadrant\n");
    else if(x<0&&y>0)
    printf("The coordinates lies in first qudrant\n");
    else if (x<0&&y<0)
    printf("The coordinates lies in third quadrant\n");
    else if(x>0&&y<0)
    printf("The cordinates lies in fourth quadrant\n");
    else if(x==0)
    printf("The cordinates lies on Y-axis\n");
    else if(y==0)
    printf("The coordinates lies on X-axis\n");
    else
    printf("The coordinates lies on the origin\n");

    return 0;
}