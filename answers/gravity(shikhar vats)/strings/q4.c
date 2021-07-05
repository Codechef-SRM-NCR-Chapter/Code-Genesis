#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
scanf("%c",&str);
    int temp = 0, k;
    scanf("%d", &k);
    for (int i = 0; i < strlen(str) && temp < k; i++)
    {
        printf("%s\n", str);
        if (str[i] == ' ')
        {
            temp++;
        }
    }

    return 0;
}