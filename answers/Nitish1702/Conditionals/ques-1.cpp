//1
#include <iostream>
using namespace std;

int main() {
	int a;
	char b;
	cin>>a>>b;
	int c;
	if (b=='A')
	    c=1700;
	else if (b=='B')
	    c=1500;
	else c=1300;
	
	int f=a+0.2*a+0.5*a+c-0.11*a;
	cout<<f;
	return 0;
}
