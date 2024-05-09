#include <stdio.h>

int main(void)
{
    int one, two;
    scanf("%d %d", &one, &two);
    
    int first, sec, thrd;
    
    first = two / 100;
    sec = (two%100) / 10;
    thrd = two%10;
    
    printf("%d\n%d\n%d\n%d\n", one*thrd, one*sec, one*first, one*two);
    
    return 0;
}