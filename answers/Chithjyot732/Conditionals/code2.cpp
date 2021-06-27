#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int dd,mm,yyyy;
    string month;
    cout<<"Enter date in dd format\n:";
    cin>>dd;
    cout<<"Enter month in mm format\n:";
    cin>>mm;
    cout<<"Enter year in yyyy format\n:";
    cin>>yyyy;
    switch(mm)
    {
        case 01:
           month="January";
           break;
        case 02:
           month="February";
           break;
        case 03:
           month="March";
           break;
        case 04:
           month="April";
           break;
        case 05:
           month="May";
           break;
        case 06:
           month="June";
           break;
        case 07:
           month="July";
           break;
        case 8:
           month="August";
           break;
        case 9:
           month="September";
           break;
        case 10:
           month="October";
           break; 
        case 11:
           month="November";
           break;
        case 12:
           month="December";
           break; 
        default:
        cout<<"Invalid input";
    }
    cout<<"Date is : "<<month<<" "<<dd<<" "<<yyyy;
    return 0;
}