#include<iostream>
#include<string>
using namespace std;

int main()
{ 
    int id, l, netchrg;
    string ch1,ch2;
    float grdt, surchg=0;
    cout << "Enter the customer ID Number: \n";
    cin>>id;
    cout<<"Enter the customer First Name and Last Name: \n";
    cin>>ch1>>ch2;
    cout<<"Enter the liters of water consumed by customer: \n";
    cin>>l;
    cout <<"\nThe customer ID Number: \n"<<id;
    cout <<"\nCustomer Name: \n"<<ch1<<" "<<ch2;
    cout <<"\nLiters of water consumed by customer :\n"<<l;
   {  if(l>=0 && l<=199)
         {
           grdt= 3*l;
         }
      else
          if(l>=200 && l<=400)
               {
                  grdt= 3.35*l;
                }
           else
               if(l>=400 && l<=600)
                  {
                    grdt= 4.80*l;
                  }
                else
                    if(l>=600)
                       {
                          grdt= 5.10*l;
                       }
     } 
    if(grdt>=1250)
      {
         surchg= grdt* 0.15;
        netchrg= grdt + surchg;
        cout<<"\nPayable surcharge is : \n"<<surchg;
        cout<<"\nThe total Bill is : \n"<<netchrg;
      }  
    else
      { 
        cout<<"\nPayable surcharge is : \n"<<surchg;
        cout<<"\nThe total Bill is : \n"<<grdt;
      } 
     
    return 0;
}