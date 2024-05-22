#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n, m;
    int a, b, c;
    int arr[101] = {
        0,
    };
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        for (int j = a; j <= b; j++)
        {
            arr[j] = c;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}