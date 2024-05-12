#include <stdio.h>

int main(void)
{
    int floor;
    scanf("%d", &floor);

    for (int i = 1; i <= floor; i++)
    {
        for (int j = 1; j <= floor - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}