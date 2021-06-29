#include <iostream>

using namespace std;

int main()
{
    int cid,lit;
    string name;
    float unit,total,sumtotal;
    cin>>cid;
    cin>>name;
    cin>>lit;
    if(lit<200)
        unit=3;
    else if(lit>=200 &&  lit<400)
        unit=3.35;
    else if(lit>=400 && lit<600)
        unit=4.80;
    else
        unit=5.10;
    total=unit*lit;
    if(total>1250)
        sumtotal=total+0.15*total;
    cout<<"ID:"<<cid<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Consumption:"<<lit<<endl;
    cout<<"Total Bill:"<<sumtotal;
    return 0;
}
