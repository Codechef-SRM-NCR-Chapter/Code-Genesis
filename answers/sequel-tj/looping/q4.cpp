#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int z = a; z <= b; z++)
    {
        int flag = 0;
        for (int i = 2; i < z; i++)
        {
            if (z % i == 0)
                flag = 1;
        }
        if(flag == 0)
            cout << z << " ";
    }
    return 0;
}
