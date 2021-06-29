Q1).
#include<iostream>
 using namespace std;
int main() {
    int n;
    double sq_root = 1;
    int t = 0;
    
    cin>>n;
    
    while (1)
    {
        t = t + 1;
        sq_root = (n/ sq_root + sq_root) / 2;
        if (t == n + 1)
        { break; }
    }
    
     cout<<sq_root;
}