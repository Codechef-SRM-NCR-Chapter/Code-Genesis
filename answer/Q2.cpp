#include <iostream>
using namespace std;

int main()
{
    int date,month,year;
    cin>>date;
    cin>>month;
    cin>>year;
    if(month==1 ||month==01)
    cout<<"January";
    else if(month==2 || month==02)
    cout<<"Febuary";
    if(month==3)
    cout<<"March";
    if(month==4)
    cout<<"April";
    if(month==5)
    cout<<"May";
    if(month==6)
    cout<<"June";
    if(month==7)
    cout<<"July";
    if(month==8)
    cout<<"August";
    if(month==9)
    cout<<"September";
    if(month==10)
    cout<<"October";
    if(month==11)
    cout<<"November";
    if(month==12)
    cout<<"December";
    cout<<" "<<date;
    cout<<" "<<year;
    return 0;
}
