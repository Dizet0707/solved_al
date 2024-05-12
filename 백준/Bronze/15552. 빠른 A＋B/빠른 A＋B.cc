#include <stdio.h>

int main(void)
{
    int a, b;
    int mount;
    
    scanf("%d", &mount);
    
    for(int i = 0; i < mount; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }

    return 0;
}
