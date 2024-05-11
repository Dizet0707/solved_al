#include <stdio.h>

int main(void)
{
    short mount;
    scanf("%hd", &mount);
    int a, b;
    
    for(int i = 0; i<mount; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    
    return 0;
}