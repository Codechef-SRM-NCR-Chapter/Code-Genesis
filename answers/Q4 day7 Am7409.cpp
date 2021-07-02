#include<iostream>
using namespace std;

int main()
{ 
   int k,i,n;
   string str;
   cout<<"Enter the string\n";
   getline(cin,str);
    cout << "Enter the number \n";
    cin>>n;
    int count=0;
    for(i=0;i<str.size();i++)
    { 
        if(str[i]==' ')
          {  
            count++;
            if(k==count)
                break;
          }
    }
    cout<<str.substr(0,i);
    return 0;
}