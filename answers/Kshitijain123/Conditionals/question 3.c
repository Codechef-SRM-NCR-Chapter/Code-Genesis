# include <stdio.h>

int main ()

{
    int litre ,rate ,customerid,amount ;

    char name ;
  
  printf("enter your customer ID \n");
  
  scanf("%d",& customerid);
  
  printf("enter your name \n");
   
 scanf("%c",&name);
  
  printf("enter the water consumed in litre \n");
   
 scanf("%d",& litre);
  
  if(litre <=199)
 
   {
        rate=3;
    }
 
   if((litre>=200)&&(litre<400))
  
  {
        rate= 3.35;
    }
  
  if((litre>=400)&&(litre<600))
  
  {
        rate= 4.80;
    }
  
  if(litre >=600)
   
 {
        rate=5.10 ;}
  
      
    amount =litre *rate;
   
 if(amount>=1250)
   
 { 
        amount= amount +0.15*amount;}
   
     printf("the amount of bill is %d",amount);
    
}
