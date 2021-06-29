#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        char c='A'+n-i;
        int j=1;
        while(j<=i)
        {
            char ch=c+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
