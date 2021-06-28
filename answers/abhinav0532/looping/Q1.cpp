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
        int a;
        cin>>a;
    int ans=0;
    for(int i=1;i*i<=a;i++)
    {
      ans=i;
    }
    cout << ans;
}
