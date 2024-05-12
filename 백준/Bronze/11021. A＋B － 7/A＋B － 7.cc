#include <stdio.h>

int main(void)
{
    int mount;
    
    scanf("%d", &mount);
    
    for(int i = 1; i <= mount; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        
        printf("Case #%d: %d\n", i, a+b);
    }
    
    return 0;
}
