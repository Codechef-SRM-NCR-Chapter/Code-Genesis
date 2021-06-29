#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i+=2)
	{
		for (int j = 1; j <= (n-i)/2; j++)
		printf(".");
		for(int j=1; j<=i; j++)
		printf("*");
		printf("\n");
	}
	for (int i=n;i>0;i-=2)
	{
		for (int j=1; j<= (n-i)/2; j++)
		printf(".");
		for(int j= 1; j<=i; j++)
		printf("*");
		printf("\n");
	}
	
}
