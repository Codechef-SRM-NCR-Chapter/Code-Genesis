//3
#include <iostream>
#include<string>
using namespace std;

int main() {
    
	string a,b;
	float x,c;
	cin>>a>>b>>c;
	
	if (c<200){
	    x=3;
	}
	else if (c<400)
	    x=3.35;
	else if (c<600)
	    x=4.80;
	else 
	    x=5.10;
	
	float z=c*x;
	if (z>1250){
	    z+=0.15* z;
	}
    cout<<a<<'\n'<<b<<'\n'<<z;
	return 0;
}
