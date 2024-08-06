#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int *arr = (int *)malloc(sizeof(int) * n+1);
    for(int i = 1; i <= n; i++)
        arr[i] = i;

    for(int i = 0; i < m; i++)
    {
        int tmp1, tmp2;
        scanf("%d %d", &tmp1, &tmp2);

        int tmp = arr[tmp1];
        arr[tmp1] = arr[tmp2];
        arr[tmp2] = tmp;
    }

    for(int i = 1; i <= n; i++)
        printf("%d ", arr[i]);

    return 0;
}

