#include <stdio.h>

int main(void)
{
    int a;
    int arr[1000001];
    int max = -1000000, min = 1000000;

    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("%d %d", min, max);

    return 0;
}