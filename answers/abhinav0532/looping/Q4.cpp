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
        int x=0,y=0;
        cin>>x>>y;
       while(x<y)
       {
           int flag=0;
           for(int i=2;i<=x/2;++i)
           {   if(x%i==0)
               {   flag=1;
                   break;
                }
            }
           if (flag==0)
           cout <<x<<" ";
           ++x;
        }
cout << endl;
return 0;
}