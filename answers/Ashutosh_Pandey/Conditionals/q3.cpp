#include<iostream>
#include<string.h>
using namespace std;

int main() {
    int custid,cons;
    float chg,surchg=0,gramt,netamt;
    char name[30];
    cout << "Input Customer ID : " << endl;
    cin >> custid ;
    cout << "Input the name of the customer : " <<endl;
    cin >> name ;
    cout << "Input the unit consumed by the customer : " << endl;
    cin >> cons ;

    if(cons < 200)
    chg = 3.00 ;
    else if (cons>=200 && cons<400)
    chg = 3.35;
    else if (cons>=400 && cons<600)
    chg = 4.80;
    else
    chg = 5.10;
     
    gramt = cons * chg;
    if(gramt>1250)
    surchg = gramt * 0.15;
    netamt = gramt +surchg;
    cout <<"Electricity Bill" << endl; 
   cout << "Customer IDNO                       :"<<custid << endl; 
   cout <<"Customer Name                        :" << name << endl;
   cout << "unit Consumed                       :" << cons<< endl;
   cout <<"Amount Charge  per unit :" <<chg<<gramt << endl;
   cout <<"Surchage Amount                     :" <<surchg << endl;
  cout << "Net Amount Paid By the Customer     :" << netamt << endl;

   return 0;
}