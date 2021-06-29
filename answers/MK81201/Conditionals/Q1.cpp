#include <iostream>

using namespace std;

int main()
{
    double totsal,hra,da,basic,allow,pf;
    char grade;
    cin>>basic;
    cin>>grade;
    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
    if(grade='A')
        allow=1700;
    else if(grade='B')
        allow=1500;
    else
        allow=1300;
    totsal=basic+allow+da+hra-pf;
    cout<<int(totsal);
    return 0;
}
