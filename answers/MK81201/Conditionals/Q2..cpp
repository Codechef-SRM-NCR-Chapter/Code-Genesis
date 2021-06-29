#include <iostream>

using namespace std;

int main()
{
    int dd,m,y;
    cin>>dd>>m>>y;
    int flag=1;
    switch(m)
    {
        case 1: 
            cout<<"January ";
            break;
        case 2:
            cout<<"February ";
            break;
        case 3:
            cout<<"March ";
            break;
        case 4:
            cout<<"April ";
            break;
        case 5:
            cout<<"May ";
            break;
        case 6:
            cout<<"June ";
            break;
        case 7:
            cout<<"July ";
            break;
        case 8:
            cout<<"August ";
            break;
        case 9:
            cout<<"September ";
            break;
        case 10:
            cout<<"October ";
            break;
        case 11:
            cout<<"November ";
            break;
        case 12:
            cout<<"December ";
            break;
        default:
            flag=0;
    }
    if(flag)
        cout<<dd<<" "<<y;
    return 0;
}
