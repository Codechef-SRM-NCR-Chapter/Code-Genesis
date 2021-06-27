#include<bits/stdc++.h>

using namespace std;

int main()
{
                            /** Arjun Prasad **/
                        /** arjunblog009@gmail.com**/


    float Total_Sal = 0;
    float Basic;
    char Grade;

    //totalSalary = basic + hra + da + allow – pf

    cin>>Basic>>Grade;

    //hra = 20% of basic
    Total_Sal += Basic + 0.2*Basic;

    //da = 50% of basic
    Total_Sal += 0.5*Basic;

    //pf    = 11% of basic
    Total_Sal -= 0.11*Basic;

    //grade
    if(Grade=='A')
        Total_Sal+=1700;
    else
    if(Grade=='B')
        Total_Sal+=1500;
    else
        Total_Sal+=1300;


    cout<<(int)Total_Sal;









return 0;
}
