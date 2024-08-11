#include <stdio.h>

char arr[100];

int main(void)
{
        int i = 0;
        scanf("%s", arr);

        while(arr[i] != '\0')
        {
                i++;
        }

        printf("%d", i);

        return 0;
}