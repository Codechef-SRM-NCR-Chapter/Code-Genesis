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
         int i, j, r, s;
        cin>>r;
    s = r-1;
    r=r/2+1;
    
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=s; j++)
            cout<<" ";
        s--;
        for(j=1; j<=(2*i-1); j++)
            cout<<"*";
        cout<<endl;
    }
    s=2;
    for(i=1; i<=(r-1); i++)
    {
        for(j=0; j<=s; j++)
            cout<<" ";
        s++;
        for(j=1; j<=(2*(r-i)-1); j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}