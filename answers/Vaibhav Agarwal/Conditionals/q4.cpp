#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string quadrant(ll x,ll y)
{
	string s;
	if(x==0 && y!=0)
	{
		s="Y axis";
	}
	else if(x!=0 && y==0)
	{
		s="X axis";
	}
	else if(x==0 && y==0)
	{
		s="Origin";
	}
	else if(x>0 && y>0)
	{
		s="Quadrant 1";
	}
	else if(x>0 && y<0)
	{
		s="Quadrant 4";
	}
	else if(x<0 && y>0)
	{
		s="Quadrant 2";
	}
	else if(x<0 && y<0)
	{
		s="Quadrant 3";
	}
	return s;
}

int main()
{
	ll x,y;
	cin>>x>>y;
	cout<<quadrant(x,y)<<endl;
	return 0;
}