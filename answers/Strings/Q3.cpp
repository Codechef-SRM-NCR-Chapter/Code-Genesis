#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{

    int i=1,j;
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    
    for(j=0;s[j];j++)
    {
        if(s[j]>=65&&s[j]<=90)
        i++;
    }
    printf("%d",i);
    return (0);
} 


