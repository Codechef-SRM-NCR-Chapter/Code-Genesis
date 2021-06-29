#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int i, j;
    for (i=n; i>=1; i--)
    {
        for (j=i; j<=n; j++) 
        {
            cout << (char)('A' + j - 1) << "";
        }
        cout <<"\n";
    }
    return 0;
}
 