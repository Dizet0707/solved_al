#include <stdio.h>

int main(void)
{
    int a,b;
    int arr[10001] = {0, };
    
    scanf("%d %d", &a, &b);
    
    for(int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < a; i++)
    {
        if(arr[i] < b)
            printf("%d ", arr[i]);
    }
    
    return 0;
}