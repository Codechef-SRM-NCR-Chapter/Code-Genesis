#include<stdio.h>
void main()
{
    int x, y;
    printf("Enter the coordinates: x y [in this format]\n");
    scanf("%d %d", &x, &y);
    if((x>0) && (y>0))
    {
        printf("Quadrant 1");
        
    }
    else if((x<0) && (y>0))
    {
        printf("Quadrant 2");
        
    }
    else if((x<0) && (y<0))
    {
        printf("Quadrant 3");
        
    }
    else if((x>0) && (y<0))
    {
        printf("Quadrant 4");
        
    }
    else if((x!=0) && (y==0))
    {
        printf("X-axis");
        
    }
    else if((x==0) && (y!=0))
    {
        printf("Y-axis");
        
    }
    else if((x==0) && (y==0))
    {
        printf("Origin");
        
    }


}