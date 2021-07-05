#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int testcases,n;
    cin>>testcases;
    while(testcases--){
        char c[100000];
        cin>>c;
        int i=0,d=0;
        d=strlen(c);
        for(i=0;i<d;i++){
            if(c[i]=='p' && c[i+1]=='a' && c[i+2]=='r' && c[i+3]=='t' && c[i+4]=='y'){
                c[i+2]='w';
                c[i+3]='r';
                c[i+4]='i';
            }
        }
        cout<<c<<endl;
    }
    return 0;
}