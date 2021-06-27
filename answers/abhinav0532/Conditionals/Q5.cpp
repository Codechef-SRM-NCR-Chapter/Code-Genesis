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
        int a,b;
        
        char c;
        cin>>a>>b>>c;
        if(c=='+')
        cout<<a+b<<endl;
        else if(c=='-')
        cout<<a-b<<endl;
        else if(c=='*')
        cout<<a*b<<endl;
        else if(c=='/')
        cout<<a/b<<endl;
        else
        cout<<a%b<<endl;
    }
