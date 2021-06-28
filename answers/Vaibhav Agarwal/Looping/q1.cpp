#include <bits/stdc++.h>
using namespace std;
int squareroot(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    int start=0,end=n,result;
    while(start<=end)
    {
    int mid=(start+end)/2;
    if(mid*mid==n)
    {
        result=mid;
    }
    if(mid<=n/mid)
    {
        start=mid+1;
        result=mid;
    }
    else
    {
        end=mid-1;
    }
    }
    return result;
}
int main() 
{   
    int n;
    cin>>n;
    cout<<squareroot(n)<<endl;
    return 0;
}