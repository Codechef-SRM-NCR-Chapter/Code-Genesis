#include<iostream>
using namespace std;

int main()
{ 
    int d,m,y;
    cout << "Enter the Day \n";
    cin>>d;
    cout<<"Enter the Month \n";
    cin>>m;
    cout<<"Enter the Year \n";
    cin>>y;
 if(d>=1 && d<=31)
 {  switch(m)
    {
      case 1:
       { cout<<"\n January / "<<d<<" / "<<y;
          break;
       }
     case 2:
      { cout<<"\n February / "<<d<<" / "<<y;
         break;
      }
    case 3:
      { cout<<"\n March / "<<d<<" / "<<y;
         break;
      }
    case 4:
      { cout<<"\n April / "<<d<<" / "<<y;
         break;
      }
    case 5:
      { cout<<"\n May / "<<d<<" / "<<y;
         break;
      }
    case 6:
      { cout<<"\n June / "<<d<<" / "<<y;
         break;
      }
    case 7:
      { cout<<"\n July / "<<d<<" / "<<y;
         break;
      }
    case 8:
      { cout<<"\n August / "<<d<<" / "<<y;
         break;
      }
    case 9:
      { cout<<"\n September / "<<d<<" / "<<y;
         break;
      }
    case 10:
      { cout<<"\n October / "<<d<<" / "<<y;
         break;
      }
    case 11:
      { cout<<"\n November / "<<d<<" / "<<y;
         break;
      }
    case 12:
      { cout<<"\n December / "<<d<<" / "<<y;
         break;
      }
    default :
     cout<<"Wrong month is entered";
   
    }
 }
 else
    cout<<"Please correct your Day " ;
    return 0;
}