#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
        int leng;
        char *arr = (char *)malloc(sizeof(char) * 101);
        int sum = 0;

        scanf("%d", &leng);
        scanf("%s", arr);

        for (int i = 0; i < leng; i++)
        {
                sum += (int)arr[i] - 48;
        }

        printf("%d", sum);

        return 0;
}