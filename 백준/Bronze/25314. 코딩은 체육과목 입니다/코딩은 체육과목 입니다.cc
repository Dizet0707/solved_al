#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    int q = a/4;
    int r = a%4;
    int sum = 0;
    
    for(int i = 0; i < q; i++)
    {
        printf("long ");
    }
    if(r > 0)
    {
        printf("long ");
    }
    printf("int");
    
    return 0;
}