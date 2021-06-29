#include<stdio.h>
int main()
{
	int x,y;
	
	printf("Enter two  coordinates\n");
	scanf("%d%d",&x,&y);
	
	
	if(x>0 && y>0)
	printf("Quadrant 1");

    	
else if(x<0 && y>0)
	printf("Quadrant 2");


    	
	if(x<0 && y<0)
	printf("Quadrant 3");

	
		
	if(x>0 && y<0)
	printf("Quadrant 4");

		
	if(x == 0 && y == 0)
	printf("Origin");

	
	
	return 0;
}
