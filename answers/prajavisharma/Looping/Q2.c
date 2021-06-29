/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

    int i, j, n = 8;

    for (i = n; i >= 1; i--) {

        for (j = i; j <= n; j++) {

            printf("%c ", 'A' + j - 1);

        }

        printf("\n");

    }

    return 0;
}