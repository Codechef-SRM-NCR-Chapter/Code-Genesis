#include<stdio.h>

int main(){
int i,j,n;
printf("enter the no.: ");
scanf("%d",&n);

for(i=n ;i>=1;i--){

    for(j=i;j<=n;j++){
        printf(" %c",j+64);
    }
    printf("\n");
}


    return 0;
}