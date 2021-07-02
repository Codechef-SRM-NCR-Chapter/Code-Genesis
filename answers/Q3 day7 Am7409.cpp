#include<iostream>
using namespace std;

int main()  
{  
    char string[] = "acbdbca";  
    bool flag = true;  
       
    for(int i = 0; i < strlen(string); i++){  
        string[i] = toupper(string[i]);  
    }  
      
  
    for(int i = 0; i < strlen(string)/2; i++){  
        if(string[i] != string[strlen(string)-i-1]){  
            flag = false;  
            break;  
        }  
    }  
      
    if(flag)  
        printf("Given string is palindrome");  
    else  
        printf("Given string is not a palindrome");  
          
    return 0;  
}  