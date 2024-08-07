#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr = (int *)malloc(sizeof(int) * 30);
    if (arr == NULL)
	{
        return 1;
    }

	for (int i = 0; i < 30; i++)
	{
		arr[i] = i+1;
	}	

	for(int i = 0; i < 28; i++)
	{
		int inputValue;
		scanf("%d", &inputValue);

		arr[inputValue-1] = 0;
	}

    for (int i = 0; i < 30; i++) 
	{
        if (arr[i] != 0) 
		{
            printf("%d\n", arr[i]);
        }
    }

    free(arr);
    return 0;
}
