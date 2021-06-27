//4
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if (a==0 && b==0)
        cout<<"Origin";
    else if (a*b==0){
        
        if (a==0)
            cout<<"Y-axis";
        else
            cout<<"X-axis";
            
    }
    else if (a<0 && b<0)
        cout<<"Quadrant 3";
    else if(a>0 && b>0 )
        cout<<"Quadrant 1";
    else if (a<0 && b>0)
        cout<<"Quadrant 2";
    else cout<<"Quadrant 4";
        
	return 0;
}
