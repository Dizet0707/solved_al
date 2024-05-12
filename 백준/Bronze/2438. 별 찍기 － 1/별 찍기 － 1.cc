#include <stdio.h>

int main(void)
{
    int floor;
    scanf("%d", &floor);

    for (int i = 1; i <= floor; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}