#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int max=INT_MIN, secondmax=INT_MIN;
    int num;
    int i=1;
    while(i<=n)
    {
        cin>>num;
        if(num>max)
        {
            secondmax=max;
            max=num;
            
        }
        else if(num>secondmax && num!=max)
        {
            secondmax=num;
        }
        i++;
    }
    return 0;
}
