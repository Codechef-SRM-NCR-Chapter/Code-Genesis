#include <iostream>

using namespace std;

double SqrtNum(double num)
{
    double lower_bound=0; 
    double upper_bound=num;
    double temp=0;                    
    int nCount = 50;
    while(nCount != 0)
    {
        temp=(lower_bound+upper_bound)/2;
        if(temp*temp==num) 
        {
            return temp;
        }
        else if(temp*temp > num)
        {
            upper_bound = temp;
        }
        else
        {
            lower_bound = temp;
        }
        nCount--;
     }
    return temp;
}

int main()
{
    double num;
    cout<<"Enter the number\n";
    cin>>num;
    int root;
    if(num < 0)
    {
        cout<<"Error: Negative number!";
     
    }
    else
    {
        root=SqrtNum(num);   
        cout<<"Square root is:"<<int(root);
    } 
    return 0;
}