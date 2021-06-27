Q4).
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter x and y\n";
    cin>>x>>y;
    if(x>0 && y>0)
    cout<<"Quadrant 1";
    if(x<0 && y>0)
    cout<<"Quadrant 2";
    if(x<0 && y<0)
    cout<<"Quadrant 3";
    if(x>0 && y<0)
    cout<<"Quadrant 4";
    if(x==0)
    cout<<"Y axis";
     if(y==0)
    cout<<"Z axis";
     if(x==0 && y==0)
    cout<<"Origin";
    return 0;
}


