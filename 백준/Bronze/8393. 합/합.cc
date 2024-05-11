#include <stdio.h>

int main(void)
{
    int sum;
    scanf("%d", &sum);
    int sum_end = 0;
    
    for(int i = 1; i <= sum; i++)
    {
        sum_end += i;
    }
    printf("%d", sum_end);
    
    return 0;
}