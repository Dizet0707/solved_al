#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse(char* input)
{
        char tmp = input[0];
        input[0] = input[2];
        input[2] = tmp;

        return input;
}

int main(void)
{
        char num1[4], num2[4];
        scanf("%s %s", num1, num2);

        reverse(num1);
        reverse(num2);

        int rev_num1 = atoi(num1);
        int rev_num2 = atoi(num2);

        if(rev_num1 < rev_num2)
                printf("%d\n", rev_num2);
        else
                printf("%d\n", rev_num1);

        return 0;
}