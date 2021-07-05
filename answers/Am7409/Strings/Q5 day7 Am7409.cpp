/*#include<iostream>
using namespace std;

int main()
{
    cout << "\n";
    return 0;
}*/
#include<iostream>

#include<string>

using namespace std;
int main()
{
  ios_base:: sync_with_stdio (false) ;
   cin.tie(NULL);
   string str;

   int t;
   cin>>t;

   while (t>0){

     cin>>str;

    int k= str.size() ;
     int i=0;
    while (i<=k){

    if(str. substr (i, 5) =="party ")

       str.replace (i, 5, "pawri ");

         i++;
        }

      cout<<str<<endl;

     t--;
 }

    return 0;
 }

