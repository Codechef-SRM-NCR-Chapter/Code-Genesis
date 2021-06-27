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

	int bas=0;
    char ch;
    cin>>bas>>ch;
    int tsal=0,hra=0,da=0,allw=0,pf=0;
    if(ch=='A')
        allw=1700;
    else if(ch=='B')
        allw=1500;
    else
        allw=1300;
    tsal=bas+bas*0.2+bas*0.5+allw-bas*0.11;
    cout<<tsal<<endl;
                return 0;
    }
