//day1 q4
#include<iostream>
using namespace std;

int main()
{ 
    int x, y;
    cout<<"Enter the coordinates : \n";
    cin>>x>>y;
    if(x==0 && y>0)
    cout<<"Positive Y-axis";
    else
        if(x==0 && y<0)
          cout<<"Negative Y-axis";
        else
            if(x>0 && y==0)
               cout<<"Positive X-axis";
            else
                if(x<0 && y==0)
                  cout<<"Negative X-axis";
                else
                  if(x==0 && y==0)
                    cout<<"Origin";
                  else
                      if(x>0 && y>0)
                       cout<<"First Quadrant";
                      else
                           if(x<0 && y>0)
                            cout<<"Second Quadrant";
                            else
                                if(x<0 && y<0)
                            cout<<"Third Quadrant";
                            else
                                if(x>0 && y<0)
                                cout<<"Forth Quadrant";
                           
    return 0;
}