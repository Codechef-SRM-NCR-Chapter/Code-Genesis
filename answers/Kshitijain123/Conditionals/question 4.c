# include <stdio.h>

int main ()

{
    int x,y;
  
  printf("enter the value of x coordinate \n");
 
   scanf("%d",& x);
  
  printf("enter the value of y coordinate \n ");
  
  scanf("%d",&y);
 
   if((x>0)&&(y>0))
 
   {
        printf("it belongs to first quadrant");
    }
  
  if((x>0)&&(y<0))
  
  {
        printf("it belongs to fourth quadrant");
    }
  
  if((x<0)&&(y>0))
 
   {
        printf("it belongs to second quadrant");
    }
 
   if((x<0)&&(y<0))
    
{
        printf("it belongs to third quadrant");
    }

}