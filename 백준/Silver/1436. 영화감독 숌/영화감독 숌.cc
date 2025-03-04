// 1. 그냥 무한으로 브포 돌리면서
// 2. itoa로 6 3개 이상이면 넘기는 식으로 작성하면 될 거 같은데;;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
// using namespace std;

int main(void)
{
    int number;
    scanf("%d", &number);
    int64_t base = 665; // 어차피 최소는 666이니까.
    int base_count = 0; // 몇 번째로 작은 수인지 확인하기 위해서
    char buf[40];

    while (1)
    {
        // 어차피 입력은 하나니까 일회용으로 만든다고 생각하고
        sprintf(buf, "%ld", base);

        int idx = strlen(buf);
        int countOf6_flag = 0;
        for (int i = 0; i < idx; i++)
        {
            if (buf[i] == '6')
            {
                // char tmp[40];
                // strncpy(tmp, buf + i, 3);
                if (buf[i + 1] == '6' && buf[i + 2] == '6')
                {
                    countOf6_flag++;
                    break;
                }
            }
        }
        if (countOf6_flag == 1)
            base_count++;

        if (base_count == number)
        {
            printf("%ld\n", base);
            break;
        }
        base++;
    }

    return 0;
}