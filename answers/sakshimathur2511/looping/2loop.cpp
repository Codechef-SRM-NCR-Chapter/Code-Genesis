#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int i = 1;
   while(i <= n)
   {
       char startChar = 'A' + n - i;
       int j = 1;
       while(j<=i)
       {
           char ch=startChar + j -1;
           cout << ch;
           j++;
       }
       cout << endl;
       i++;
   }
}