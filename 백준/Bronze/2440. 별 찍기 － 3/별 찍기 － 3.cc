#include <stdio.h>

int main(void)
{
    int floor;
    scanf("%d", &floor);

    for (int i = 0; i < floor; i++)
    {
        for (int k = floor; k > i; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}