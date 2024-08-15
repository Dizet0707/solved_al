#include <stdio.h>
#include <string.h>

int main(void)
{
        int abc[28];
        memset(abc, -1, sizeof(int) * 28);
        char string[101];
        int element;
        scanf("%s", string);

        for(int i = 0; i < strlen(string); i++)
        {
                element = string[i];
                if (abc[(int)element-0x61] < 0)
                        abc[(int)element - 0x61] = i;
        }

        for(int i = 0; i < 26; i++)
        {
                printf("%d ", abc[i]);
        }

        return 0;
}