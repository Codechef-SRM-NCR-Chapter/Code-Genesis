#include <iostream>
#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    ll TC;
    cin>>TC;
    while(TC--)
    {
        string s; 
        cin>>s;
        for(ll i=0;i+4<s.length();i++)
        {
            if(s.substr(i,5)=="party")
            {
                s[i+2]='w';
                s[i+3]='r';
                s[i+4]='i';
            }
        }
        cout<<s<<"\n";
    }

    return 0;
}
