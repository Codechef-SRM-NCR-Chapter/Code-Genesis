#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"Enter number of rows :"<<endl;
    cin>>n;
    for(int i=n;i>=1;i--) 
    {
        for(int j=i;j<=n;j++) 
        {
            cout << (char)('A'+j-1) <<" ";
        }
        cout << endl;
    }
    return 0;
}
 