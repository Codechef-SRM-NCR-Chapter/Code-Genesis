#include<bits/stdc++.h>
using namespace std;

int main()
{
    int id,amount;
    string name;
    cin >> id >> name >> amount;
    
    /*
    a<=199=*3
    a>=200 && a<400=*3.35
    a>=400 && a<=600=*4.80
    >600=*5.10
    amount >1250+800*.15; 
    */

   int total;
   if(amount>=199 && amount<200)
   total=amount*3;
   else if(amount>=200 && amount<400)
   total=amount*3.35;
   else if(amount>=400 && amount<600)
   total=amount*4.80;
   else if(amount>=600)
   total=amount*5.10;

   if(total>=1250)
   total=total+total*.15;

   cout << total << endl;
}