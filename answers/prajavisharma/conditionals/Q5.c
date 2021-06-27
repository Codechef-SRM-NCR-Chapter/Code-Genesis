#include <stdio.h> 
 void main() 
{  
 int a, b; 
 typedef char String; 
	String operator;  
	typedef int bool;  
	bool condition = 1;   
	 
	while(condition) 
	{  
		printf("Enter first number: "); 
		scanf("%d",&a); 
		printf("\n"); 
		printf("Enter second number: "); 
		scanf("%d",&b); 
		printf("Now enter commands to use on these numbers. \n"); 
		printf("You can use '+' , '-' , '*', '/' \n");  
		printf("You can use Q or N to quit \n"); 
		do /* an inner loop */ 
		{ 
			printf(">>");
		 scanf("%c", &operator); 
		 switch(operator) 
		 { 
		 	case '*' : printf("%d * %d = %d \n",a,b, a*b); 
		 	 break; 
		 	case '+' : printf("%d + %d = %d \n",a,b, a+b); 
		 	 break; 
		 	case '-' : printf("%d - %d = %d \n",a,b, a-b); 
		 	 break; 
		 	case '/' : if(b == 0) 
		 	 printf("cannot divide by 0\n"); 
		 	 else 
				 printf("%d / %d = %d \n",a,b, a/b); 
		 	 break;  
				case 'Q' : condition = 0; break;  
			} 
			if(operator == 'Q' || operator == 'N')  
			 break; 
		}while(1); 
	} 
	printf("Finished...."); 
}