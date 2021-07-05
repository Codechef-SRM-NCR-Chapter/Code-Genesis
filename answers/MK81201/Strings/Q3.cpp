#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char string[25], reverse_string[25] = {'\0'};
    int i, length = 0, flag = 0;
 
    cout<<"Enter a string:";
    cin>>string;
    /*  keep going through each character of the string till its end */
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    cout<<"The length of the string is:"<<length<<endl;
    for (i = length - 1; i >= 0 ; i--)
    {
        reverse_string[length - i - 1] = string[i];
    }
   /*  Check if the string is a Palindrome */
 
    for (flag = 1, i = 0; i < length ; i++)
    {
        if (reverse_string[i] != string[i])
            flag = 0;
    }
    if (flag == 1)
       cout<<string<<" is a palindrome"<<endl;
    else
       cout<<string<<"is not a palindrome"<<endl;
    return 0;
}