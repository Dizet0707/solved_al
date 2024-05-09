#include <stdio.h>

int max(int a, int b, int c)
{
    int max = a;
    if (b > a && b > c)
        max = b;
    if (c > b && c > a)
        max = c;

    return max;
}

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        printf("%d", 10000 + a * 1000);
    else if (a == b || a == c)
        printf("%d", 1000 + a * 100);
    else if (b == c)
        printf("%d", 1000 + b * 100);
    else
        printf("%d", max(a, b, c) * 100);

    return 0;
}