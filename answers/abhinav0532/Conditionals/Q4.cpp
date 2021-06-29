#include <iostream>
using namespace std;
#define ll long long
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
    
    int main()
    {
        FIO;
	    OJ;
        float a,b;
        cin>>a>>b;
      
        if(a>0 && b==0||a<0 && b==0)
        cout<<"X-Axis"<<endl;
        else if(b>0&&a==0||b<0&&a==0)
        cout<<"Y-Axis"<<endl;
        else if(a>0 && b>0)
        cout<<"Quadrant 1"<<endl;
        else if(a>0&&b<0)
        cout<<"Quadrant 4"<<endl;
        else if(a<0&&b>0)
        cout<<"Quadrant 2"<<endl;
        else if(a<0&&b<0)
        cout<<"Quadrant 3"<<endl;
        else
        cout<<"Origin"<<endl;
    }
