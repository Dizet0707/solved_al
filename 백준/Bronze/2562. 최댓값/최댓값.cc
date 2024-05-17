#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int max = 0;
    int idx;
    int arr[9];

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            idx = i;
        }
    }

    printf("%d\n%d", max, idx+1);

    return 0;
}