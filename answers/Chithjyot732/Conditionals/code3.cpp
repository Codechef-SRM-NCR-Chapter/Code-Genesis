#include<iostream>
using namespace std;

int main()
{
    int cusId,unit,amount,Total,Net;
    char name[100];
    cout<<"Input customer ID\n";
    cin>>cusId;
    cout<<"Input customer name\n";
    cin>>name;
    cout<<"Input the litres consumed by the customer\n";
    cin>>unit;
    if(unit<=199)
    {
        amount=3*unit;
    }
    else if(unit>=200 && unit<400)
    {
        amount=(3*199)+(unit-199)*3.35;
    }
    else if(unit>=400 && unit<600)
    {
        amount=(3*199)+(3.35*200)+(unit-399)*4.80;
    }
    else
    {
        amount=(3*199)+(3.35*200)+(4.80*200)+(unit-599)*5.10;
    }
    Total=amount;
    if(Total>1250)
    {
        Net=(Total+ (0.15 * Total));
        cout<<"Net amount to be paid by the customer: "<<Net;
    }
    else
    {
        cout<<"Total amount to be paid by the customer "<<Total;
    }
    return 0;
}
