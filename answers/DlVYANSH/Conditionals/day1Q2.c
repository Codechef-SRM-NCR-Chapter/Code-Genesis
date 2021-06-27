#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the day,month,year\n");
    scanf("%d%d%d",&a,&b,&c);
    switch (b){
        case 1:
        printf("%d January %d\n",a,c);
        break;
        case 2:
        printf("%d February %d\n",a,c);
        break;
        case 3:
        printf("%d March %d\n",a,c);
        break;
        case 4:
        printf("%d April %d\n",a,c);
        break;
        case 5:
        printf("%d May %d\n",a,c);
        break;
        case 6:
        printf("%d June %d\n",a,c);
        break;
        case 7:
        printf("%d July %d\n",a,c);
        break;
        case 8:
        printf("%d August %d\n",a,c);
        break;
        case 9:
        printf("%d September %d\n",a,c);
        break;
        case 10:
        printf("%d October %d\n",a,c);
        break;
        case 11:
        printf("%d November %d\n",a,c);
        break;
        case 12:
        printf("%d December %d\n",a,c);
        break;
    }
    return 0;
}