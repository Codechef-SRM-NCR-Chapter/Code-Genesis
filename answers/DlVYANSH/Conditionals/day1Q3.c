#include <stdio.h>
int main()
{
    int id,ltr,total;
    char name[20];
    printf("Enter costomer ID\n");
    scanf("%d",&id);
    printf("Enter the name of the costomer\n");
    scanf("%s",&name);
    printf("Enter the litres consumed by the costomer\n");
    scanf("%d",&ltr);
    if(ltr<200)
    total=ltr*3;
    else if(ltr>199&&ltr<400)
    total=ltr*3.35;
    else if(ltr>399&&ltr<600)
    total=ltr*4.8;
    else if(ltr>599)
    total=ltr*5.1;
    if(total>1250)
    total+= 0.15*total;
    printf("Customer Id: %d\nName of the customer:%s\nLitres of water used: %d\nTotal amount paid by the user: %d\n",id,name,ltr,total);
    return 0;
}