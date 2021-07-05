#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char a[500];
        int l, i;
        scanf("%s", &a);
        l = strlen(a);
        for (i = 0; i < l - 4; i++)
        {
            if (a[i] == 'p' && a[i + 1] == 'a' && a[i + 2] == 'r' && a[i + 3] == 't' && a[i + 4] == 'y')

            {
                a[i + 2] = 'w';
                a[i + 3] = 'r';
                a[i + 4] = 'i';
            }
        }
        for (i = 0; i < l; i++)
        {
            printf("%c", a[i]);
        }
        printf("\n");
    }

    return 0;
}