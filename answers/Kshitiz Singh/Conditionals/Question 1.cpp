#include<stdio.h>
int main()
{
	
	int Tsal,basic,all;
	char grade;
	double hra,da,pf;
	
	
	printf("Enter Basic salary and Grade\n");
	scanf("%d%s",&basic,&grade);
	
	
	if(grade =='A')
   {
	   	all=1700;}
	
	else if(grade =='B')
 {
	 	all=1500;}
	
	else
{
		all=1300;}
		
		
    hra= 0.2*basic;
	da= 0.5*basic;
	pf= 0.11*basic;
	
	Tsal=basic+hra+da+all-pf;
	
	printf("Total Salary = %d\n ",Tsal);
	
	
	return 0;
}
