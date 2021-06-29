//day1 q2
#include<iostream>
using namespace std;

int main()
{ 
    int d,m,y;
    cout <<"Enter the Date: ";
    cin>>d;
    cout<<"Enter the Month: ";
    cin>>m;
    cout<<"Enter the Year: ";
    cin>>y;
 if(d>=1 && d<=31)
 {  switch(m)
    {
      case 1:
       { cout<<"\nJanuary "<<d<<" "<<y;
          break;
       }
     case 2:
      { cout<<"\nFebruary "<<d<<" "<<y;
         break;
      }
    case 3:
      { cout<<"\nMarch "<<d<<" "<<y;
         break;
      }
    case 4:
      { cout<<"\nApril "<<d<<" "<<y;
         break;
      }
    case 5:
      { cout<<"\nMay "<<d<<" "<<y;
         break;
      }
    case 6:
      { cout<<"\nJune "<<d<<" "<<y;
         break;
      }
    case 7:
      { cout<<"\nJuly "<<d<<" "<<y;
         break;
      }
    case 8:
      { cout<<"\nAugust "<<d<<" "<<y;
         break;
      }
    case 9:
      { cout<<"\nSeptember "<<d<<" "<<y;
         break;
      }
    case 10:
      { cout<<"\nOctober "<<d<<" "<<y;
         break;
      }
    case 11:
      { cout<<"\nNovember "<<d<<" "<<y;
         break;
      }
    case 12:
      { cout<<"\nDecember "<<d<<" "<<y;
         break;
      }
    default :
     cout<<"Wrong month is entered!";
   
    }
 }
 else
    cout<<"Please correct your Date. " ;
    return 0;
}