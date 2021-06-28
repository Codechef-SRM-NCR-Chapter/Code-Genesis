# include <stdio.h>
int main ()
 (
{
    int basic,hra,da,pf,allow,totalsalary;

    char grade ;
   
 printf(" enter your basic salary \n");

    scanf("%d",& basic);
 
   printf("enter your grade \n");
 
   scanf("%c",& grade);
    
hra=(20/100)*basic;
 
   da=(50/100)*basic;
    pf=(11/100)*basic;
 
   if(grade=='A')
  
  {
        allow= 1700;
    }
   
 if(grade=='B')
   
 {
        allow=1500;
    }
  
  if(grade=='C')
  
  {
        allow=1300 ;
        
    }
 
   else
    { allow = 1300 ;
    }
  
  totalsalary=basic +hra+da+allow-pf;
  
  printf("your total salary is %d\n",totalsalary);
}

}