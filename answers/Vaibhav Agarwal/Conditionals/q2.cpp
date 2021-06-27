#include<bits/stdc++.h>
using namespace std;

void date(int day,string month, int year)
{
	if(month=="01")
	{
		month="January";
	}
	else if(month=="02")
	{
		month="Febuary";
	}
	else if(month=="03")
	{
		month="March";
	}
	else if(month=="04")
	{
		month="April";
	}
	else if(month=="05")
	{
		month="May";
	}
	else if(month=="06")
	{
		month="June";
	}
	else if(month=="07")
	{
		month="July";
	}
	else if(month=="08")
	{
		month="August";
	}
	else if(month=="09")
	{
		month="September";
	}
	else if(month=="10")
	{
		month="October";
	}
	else if(month=="11")
	{
		month="November";
	}
	else if(month=="12")
	{
		month="December";
	}
	cout<<month<<" "<<day<<" "<<year<<endl;
	return;
}

int main()
{
	int d,y;
	string m;
	cin>>d>>m>>y;
	date(d,m,y);
	return 0;
}