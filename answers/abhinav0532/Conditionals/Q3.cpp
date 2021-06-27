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
        int cid;
        string nm;
        float ltres,rt=0;
        cin>>cid>>nm>>ltres;
        if(ltres<=199)
        rt=3.0;
        else if (ltres>=200&&ltres<400)
        rt=3.35;
        else if(ltres>=400&&ltres<600)
        rt=4.80;
        else 
        rt=5.10;
        float bill=ltres*rt;
        if(bill>1250)
        {
            bill+=bill*0.15;
        }
        cout<<cid<<endl;
        cout<<nm<<endl;
        cout<<"Litres Consumed: "<<ltres<<endl;
        cout<<"Bill: Rs."<<bill<<endl;
    }
