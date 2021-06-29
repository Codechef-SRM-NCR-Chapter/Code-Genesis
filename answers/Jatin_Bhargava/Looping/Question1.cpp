#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans=0,i;
    //ceil(log2(n))==floor(log2(n));
    for(i=1;i*i<=n;i++)
    {
      ans=i;
    }
    cout << ans;
}
