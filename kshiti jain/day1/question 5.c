# include <stdio.h>

int main ()

{
    int a,b,sum,sub,multi,div;
 
   char operator;
 
   printf("enter the numbers a and b");
  
  scanf("%d %d",&a,&b);
 
   printf("enter the operator");
 
   scanf("%c",& operator);
 
   if(operator='+')

{  sum=a+b;

printf("the sum of two numbers is %d \n",sum);


    }
  
  if (operator ='-')
  
  {sub=a-b;

    printf("the difference of two numbers is %d \n",sub);}
  
  if(operator='*')
 
   {
        multi=a*b;
  
      printf("the product of two numbers is %d \n",multi);
    }
 
   if(operator='/')
 
   {
        div=a/b ;
      
  printf("the divide of two numbers is %d \n",div);
        }
    

}