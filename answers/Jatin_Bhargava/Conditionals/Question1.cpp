#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ts,basic;
    double hra,da,allow,pf;
    char grade;
    cin >> basic >> grade;

    //ts=basic+hra+da+allow-pf

    hra=.2*basic;
    da=.5*basic;
    pf=.11*basic;

    if(grade=='A')
    allow=1700;
    else if(grade=='B')
    allow=1500;
    else
    allow=1300;

    ts=basic+hra+da+allow-pf;
    cout << ts << endl;
}