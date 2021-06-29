#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter a coordinate point in XY coordinate system:\n";
    cin>>x>>y;
    if(x>0 && y>0)
    {
        cout<<"Quadrant 1"<<endl;
    }
    else if(x<0 && y>0)
    {
        cout<<"Quadrant 2"<<endl;
    }
    else if(x<0 && y<0)
    {
        cout<<"Quadrant 3"<<endl;
    }
    else if(x>0 && y<0)
    {
        cout<<"Quadrant 4"<<endl;
    }
    else if(y==0 && x!=0)
    {
        cout<<"X-axis"<<endl;
    }
    else if(x==0 && y!=0)
    {
        cout<<"Y-axis"<<endl;
    }
    else if(x==0 && y==0)
    {
        cout<<"Origin"<<endl;
    }
    else
    cout<<"Wrong input"<<endl;
    return 0;
}