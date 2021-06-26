#include <iostream>
using namespace std;
#define ll long long
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
    
    int main()
    {
        FIO;
	    OJ;
        int dd,mm,yy;
        cin>>dd>>mm>>yy;
        switch(mm)
        {
            case 01:cout<<"January";break;
            case 02:cout<<"February";break;
            case 03:cout<<"March";break;
            case 04:cout<<"April";break;
            case 05:cout<<"May";break;
            case 06:cout<<"June";break;
            case 07:cout<<"July";break;
            case 8:cout<<"August";break;
            case 9:cout<<"September";break;
            case 10:cout<<"October";break;
            case 11:cout<<"November";break;
            default:cout<<"December";break;

        }
        cout<<" "<<dd<<" "<<yy;
    }
