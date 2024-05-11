#include <stdio.h>

int main(void)
{
    long receipt;
    char times; // int 대신 char
    long price, count;
    long summarize = 0;

    scanf("%ld", &receipt);
    scanf("%hhd", &times);

    for (char i = 0; i < times; i++) // int 대신 char
    {
        scanf("%ld %ld", &price, &count);
        long sum = price * count;
        summarize += sum;
    }

    if (summarize == receipt)
        printf("Yes");
    else
        printf("No");

    return 0;
}