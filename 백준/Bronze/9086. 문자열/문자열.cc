#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int leng;
        scanf("%d", &leng);

        for (int j = 0; j < leng; j++)
        {
                int i = 0;
                char *arr = (char*)malloc(sizeof(char) * 1001);
                scanf("%s", arr);
                while(arr[i] != '\0')
                {
                        i++;
                }

                printf("%c%c\n", arr[0], arr[i-1]);

                free(arr);
        }
        return 0;
}