#include <stdio.h>

char arr[1001];

int main(void)
{
        int idx;
        scanf("%s", arr);
        scanf("%d", &idx);

        printf("%c", arr[idx-1]);

        return 0;
}