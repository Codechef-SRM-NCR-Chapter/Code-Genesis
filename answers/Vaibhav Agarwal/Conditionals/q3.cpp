#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

void waterbill(ll id,string name,ll litres)
{
	ld bill;
	if(litres>=0 && litres<200)
	{
		bill=litres*3;
	}
	else if(litres>=200 && litres<400)
	{
		bill= litres*3.35;
	}
	else if(litres>=400 && litres<600)
	{
		bill=litres*4.8;
	}
	else if(litres>=600)
	{
		bill= litres*5.1;
	}
	if(bill>1250)
	{
		bill+= (15*bill)/100;
	}
	cout<<id<<"\n"<<name<<"\n"<<litres<<"\n"<<bill<<endl;
    return;
}

int main()
{
	ll id,litres;
	string name;
	cin>>id>>name>>litres;
	waterbill(id,name,litres);
	return 0;
}