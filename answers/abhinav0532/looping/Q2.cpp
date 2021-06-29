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
        int n;
        cin>>n;
        
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<(char)(j+64);
        }
         cout<<endl;
    }
    } 