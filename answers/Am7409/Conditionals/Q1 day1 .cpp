#include<iostream>
using namespace std;

int main()
{ int b;
  char grade;
    cout << "Enter your Basic Salary \n";
    cin>>b;
    cout<<"Enter your Grade \n ";
    cin>>grade;
    double hra= b* 0.2, da= b*0.5, pf= b*0.11;
     int allow, ts;
    if(grade=='A')
    { 
      allow= 1700;
       ts= (b+ hra+ da+ allow) - pf;
     cout<<"\n For Grade A "<<ts;
    }
    else
         if(grade=='B')
          {
          
             allow= 1500;
             ts= (b+ hra+ da+ allow) - pf; 
            cout<<"\n For Grade B "<<ts;
          }
        else
             {
                allow= 1300;
                ts= (b+ hra+ da+ allow) - pf;
                 cout<<"\n For Other "<<ts;
             }
     return 0;
}