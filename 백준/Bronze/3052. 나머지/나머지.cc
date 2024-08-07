#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *arr = (int *)malloc(sizeof(int) * 42);
    int answer = 0;

    for (int i = 0; i < 10; i++)
    {
        int input, tmp;
        scanf("%d", &input);
        tmp = input % 42;

        arr[tmp] = 1;
    }

    for (int i = 0; i < 42; i++)
    {
        if (arr[i] == 1)
            answer++;
    }

    printf("%d", answer);


    free(arr);
    return 0;
}