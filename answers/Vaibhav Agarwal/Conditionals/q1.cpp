#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll basicsalary(ll n,char s)
{
	ll hra = (20*n)/100;
	ll da = (50*n)/100;
	ll pf = (11*n)/100;
	ll allow;
	if(s=='A')
	{
		allow=1700;
	}
	else if(s=='B')
	{
		allow=1500;
	}
	else
	{
		allow=1300;
	}
	ll totalsalary = n+hra+da+allow-pf;
	return totalsalary;
}

int main()
{
	ll n;
	cin>>n;
	char s;
	cin>>s;
	cout<<basicsalary(n,s)<<endl;
	return 0;
}