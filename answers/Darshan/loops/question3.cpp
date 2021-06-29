#include <iostream>
using namespace std;

int main() {
  int sp, n;
  cin >> n;
  sp = n - 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= sp; j++)
      cout << " ";

    sp--;
    for (int k = 1; k <= 2*i-1; k+=1)
      cout << "*"; 
    cout << endl;
  }

  sp = 1;
  for (int i = 1; i <= n - 1; i++) {
    for (int j = 1; j <= sp; j++)
      cout << " ";
    
    sp++;
    for (int k = 1; k <= 2 * (n - i) - 1; k++)
      cout << "*";
    cout << endl;
  }

    return 0;
}