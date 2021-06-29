#include<iostream>
using namespace std;
int main()
{
    int dd, mm, yy;
    cin >> dd >> mm >> yy;
    if(dd>31 && dd<1){
        cout<< "invalid date";
    }else if(mm>12 && mm<1){
        cout<< "Invalid monthe";
    }else{
    switch(mm){
        case 1:
        {
        cout<< "January "<< dd<<" "<<yy;
        break;
        }
        case 2:{
            cout<< "February "<< dd<<" "<<yy;
            break;
        }
        case 3:{
            cout<< "March "<< dd<<" "<<yy;
            break;
        }
        case 4:{
            cout<< "April "<< dd<<" "<<yy;
            break;
        }
        case 5:{
            cout<< "May "<< dd<<" "<<yy;
            break;
        }
        case 6:{
            cout<< "June "<< dd<<" "<<yy;
            break;
        }
        case 7:{
            cout<< "July "<< dd<<" "<<yy;
            break;
        }
        case 8:{
            cout<< "August "<< dd<<" "<<yy;
            break;
        }
        case 9:{
            cout<< "September "<< dd<<" "<<yy;
            break;
        }
        case 10:{
            cout<< "October "<< dd<<" "<<yy;
            break;
        }
        case 11:{
            cout<< "November "<< dd<<" "<<yy;
            break;
        }
        case 12:{
            cout<< "December "<< dd<<" "<<yy;
            break;
        }
    }
    }
    return 0;
}