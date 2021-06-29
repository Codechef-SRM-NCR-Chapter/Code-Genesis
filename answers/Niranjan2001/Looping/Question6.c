#include <stdio.h>

int main() {
int n,t=0, s;
scanf("%d", &n);
s = n / 2;
while(s != t)
{
t = s;
s = ( n/t + t) / 2;
}
printf("%d", s);
    return 0;
}