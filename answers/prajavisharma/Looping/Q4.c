/* C Program to Calculate Square root of a Number */
 
#include<stdio.h>
#include<math.h>
 
int main()
{
	int number, result;
 
  	printf(" \n Please Enter any Number to find Square root : ");
  	scanf("%d", &number);
  
  	result = pow(number, 0.5);
  
  	printf("\n Square Root a given number %d =  %d", number, result);
 
  	return 0;
}
//not able to understand how to use while loop here