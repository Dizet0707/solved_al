#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
        int count;
        scanf("%d", &count);

        for(int i = 0; i < count; i++)
        {
                int time;
                char *string = (char *)malloc(sizeof(char) * 1000);
                char newstring[1001];
                scanf("%d %s", &time, string);

                for(int j = 0; j < strlen(string); j++)
                {
                        for(int k = 0; k < time; k++)
                                printf("%c", string[j]);
                }
                printf("\n");
                free(string);
        }
        return 0;
}