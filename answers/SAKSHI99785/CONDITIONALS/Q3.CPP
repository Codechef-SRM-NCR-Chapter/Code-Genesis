Q3).
#include<iostream>
using namespace std;
int main()
{
   int customer_id,litre,Amount_Paid;
   string Cname;
   float charge,g;
   cout<<"Enter Customer ID\n";
   cin>>customer_id;
   cout<<"Enter Customer Name\n";
   cin>>Cname;
   cout<<"Litres consumed by customer\n";
   cin>>litre;
   
   cout<<customer_id<<endl;
   cout<<Cname<<endl;
   cout<<litre<<endl;

   if(litre<=199)
   charge=3;
   else if(litre<=600 && litre<=600)
   charge=3.35;
   else if(litre>600)
   charge=5.10;
   g=(charge*litre);
   if(g>1250)
   g=(g*.15)+g;
   cout<<g;

    return 0;
}