//day1 q1
#include<iostream>
using namespace std;

int main()
{ int b;
  char grade;
    cout << "Enter your Basic Salary: ";
    cin>>b;
    cout<<"Enter your Grade: ";
    cin>>grade;
    double hra= b* 0.2, da= b*0.5, pf= b*0.11;
     int allow, ts;
    if(grade=='A')
    { 
      allow= 1700;
       ts= (b+ hra+ da+ allow) - pf;
     cout<<"\nTotal Salary: "<<ts;
    }
    else
         if(grade=='B')
          {
          
             allow= 1500;
             ts= (b+ hra+ da+ allow) - pf; 
            cout<<"\nTotal Salary: "<<ts;
          }
        else
             {
                allow= 1300;
                ts= (b+ hra+ da+ allow) - pf;
                 cout<<"\nTotal Salary: "<<ts;
             }
     return 0;
}  
