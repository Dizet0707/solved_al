#include <stdio.h>

int main(void)
{
    int a;
    int arr[101];
    int num;
    
    scanf("%d", &a);
    for(int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &num);
    
    int numofnum = 0;
    for(int i = 0; i < a; i++)
    {
        if(arr[i] == num)
            numofnum++;
    }
    
    printf("%d", numofnum);
    
    
    return 0;
}