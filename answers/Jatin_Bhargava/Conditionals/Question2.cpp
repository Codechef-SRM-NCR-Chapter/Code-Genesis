#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d,m,y;
    string month;
    cin >> d >> m >> y;
    switch (m)
    {
    case 01: 
        month="Janauary";
        break;
    case 02: 
        month="Feb";
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
        month="Decemeber";
        break;

        default:
        break;
    }

    cout << month << " " << d << " "<< y << endl;
 }