#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
        char *str = (char *)malloc(sizeof(char) * 1000001);
        memset(str, 0, 1000001);
        int count = 0;
        int j = 0;
        scanf("%[^\n]", str);

        for(int i = 0; i < strlen(str); i++)
        {
                if(str[i] == 0x20)
                {
                        count++;
                }
        }

        if (strlen(str) == 1 && str[0] == ' ') {
                printf("0");
                return 0;
        }

        if(str[0] == 0x20)
        {
                count--;
        }

        if(str[strlen(str)-1] == 0x20)
        {
                count--;
        }

        count++;
        printf("%d", count);

        return 0;
}