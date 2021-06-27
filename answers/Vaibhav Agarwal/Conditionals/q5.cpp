#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll calculator(ll no1,ll no2,char sign)
{
	ll result=0;
	switch(sign)
	{
		case '+':
				 result = no1+no2;
				 break;
		case '-':
				 result = no1-no2;
				 break;
		case '*':
				 result = no1*no2;
				 break;
		case '/':
				 result = no1/no2;
				 break;
		default:
				 cout<<"Invalid Command"<<endl;
				 break;
	}
	return result;
}

int main()
{
	ll no1,no2;
	char sign;
	cin>>no1>>no2>>sign;
	cout<<calculator(no1,no2,sign)<<endl;
	return 0;
}