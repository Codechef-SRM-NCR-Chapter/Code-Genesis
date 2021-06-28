#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    bool flag = false;
    cin >> num1; 
    cin >> num2; 

    cout << "Prime numbers from "<< num1 << " and " << num2 << " are: ";
    for (int i = num1; i <= num2; i++) 
    {
        if (i == 1 || i == 0)
        continue;
        flag = true;
        for (int j = 2; j <= i / 2; j++) 
        {
            if (i % j == 0) 
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
            cout << i << " ";
    }
    return 0;
} 