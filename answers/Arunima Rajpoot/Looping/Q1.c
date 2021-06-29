#include<stdio.h>
 

int main() 
{
    
	int number;
    
	int root = 1;
    
	int i = 0;
    
    
	printf("Enter a Number : ");
    
	scanf("%d",&number);
    
    
	while (1)
    
	{
        
		i = i + 1;
        
		root = (number / root + root) / 2;
        
		if (i == number + 1) 
		{ break; }
    
	}
    
     
	printf("%.d",root);

	getch();
}