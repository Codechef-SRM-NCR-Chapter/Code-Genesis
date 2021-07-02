#include<stdio.h>
#include<string.h>

int main(){
char str[100];
scanf("%s",&str);

int count=1;
 for(int i=0;i<strlen(str);i++){
     if(str[i]>=65 && str[i]<=90){
         count++;
     }
 }
 printf("%d\n",count);
    return 0;
}