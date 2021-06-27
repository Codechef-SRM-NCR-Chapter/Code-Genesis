#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    if(x>0 && y>0) //+x,+y
    cout << "Quadrant 1";
    else if(x<0 && y<0) //-x,-y
    cout << "Quadrant 3";
    else if(x>0 && y<0) // +x,-y
    cout << "Quadrant 4";
    else if(x<0 && y>0) //-x,+y
    cout << "Quadrant 3";
    else if(x==0 && y==0)
    cout << "Origin";
    else if(x==0 && (y>0 || y<0))
    cout << "Y-axis";
    else if((x>0 || x<0) && y==0)
    cout << "X-asix";
} 