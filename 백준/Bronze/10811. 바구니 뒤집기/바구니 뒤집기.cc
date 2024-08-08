#include <stdio.h>
#include <stdlib.h>

int arr[101];

int main(void)
{
    int hell, length;
    scanf("%d %d", &hell, &length);

    for(int i = 1; i <= hell+1; i++)
        arr[i] = i;

    for (int i = 0; i < length; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        while(1)
        {
            if(b<=a)
                break;
            int tmp = arr[a];
            arr[a] = arr[b];
            arr[b] = tmp;
            ++a;
            --b;
        }
    }

    for(int i = 0; i < hell; i++)
        printf("%d ", arr[i+1]);

    return 0;
}