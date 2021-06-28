#include <stdio.h>

int main()
{
    int basic;
	int allow;
	char grade;
	float hra,da,pf;
	int totalsalary;
	printf("Enter the basic");
	scanf('%d\t',&basic);
	printf("Enter the grade");
	scanf("%c" , &grade);
    
    hra=0.2 *basic;
    da=0.5 *basic;
    pf=0.11*basic;
    
    if(grade='A')
    {
    	allow=1700;
	}
	else if(grade='B')
	{
		allow=1500;
	}
	else
	{
		allow=1300;
	}
	totalsalary=basic+hra+da+allow-pf;
    printf("totalsalary");

    return 0;
}

