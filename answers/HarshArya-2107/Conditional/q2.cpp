#include<iostream>
using namespace std;

int main()
{ 
    int dd,mm,yy;
    cout << " Enter the Day/ \n"<<"Enter the Month/ \n"<<"Enter the Year \n"; 
    cin>>dd>>mm>>yy;
    
 if(dd>=1 && dd<=31)
 {  switch(mm)
    {
      case 1:
       { cout<<"\n January / "<<dd<<" / "<<yy;
          break;
       }
     case 2:
      { cout<<"\n February / "<<dd<<" / "<<yy;
         break;
      }
    case 3:
      { cout<<"\n March / "<<dd<<" / "<<yy;
         break;
      }
    case 4:
      { cout<<"\n April / "<<dd<<" / "<<yy;
         break;
      }
    case 5:
      { cout<<"\n May / "<<dd<<" / "<<yy;
         break;
      }
    case 6:
      { cout<<"\n June / "<<dd<<" / "<<yy;
         break;
      }
    case 7:
      { cout<<"\n July / "<<dd<<" / "<<yy;
         break;
      }
    case 8:
      { cout<<"\n August / "<<dd<<" / "<<yy;
         break;
      }
    case 9:
      { cout<<"\n September / "<<dd<<" / "<<yy;
         break;
      }
    case 10:
      { cout<<"\n October / "<<dd<<" / "<<yy;
         break;
      }
    case 11:
      { cout<<"\n November / "<<dd<<" / "<<yy;
         break;
      }
    case 12:
      { cout<<"\n December / "<<dd<<" / "<<yy;
         break;
      }
    default :
     cout<<"\n Month is incorrect ";
   
    }
 }
 else
    cout<<"Day is incorrect " ;
    return 0;
