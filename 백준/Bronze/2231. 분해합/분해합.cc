// 1. 자연수 N의 분해합은 N과 N을 이루는 각 자리수의 합. 자연수 M의 분해합이 N인 경우, M을 N의 생성자
// 2. 처음에는 1 000 000을 배열로 만들어서 모든 숫자 iota로 전부 채워넣고, 미리 분해합 전부 구한다음에
// 3. for문으로 처음부터 비교 돌릴까 싶었는데, 그건 좀 그렇고
// 4. 어차피 분해합이면 답은 무조건 input보단 작을테니, input 받아서 그거보다 작아지면서 하나씩 해보지뭐
// 5. 1초에 1억개.
// 6. br 31하면 symbol 남을 때 해당 줄에 bp 가능
// 7. layout src 하면 src만 볼 수 있음. tui disable하면 꺼진다. (그냥 ctrl x ctrl a 순서대로 하면 됨)
// 8. 그리고 이거보다 훨신 그냥 vscode 봐라. 이거 줄이 조금 안맞아서 이렇게 하려고 했는데, layout으로 보면 vscode랑 같다.

#include <iostream>
#include <numeric>
using namespace std;

int main(void)
{
    int64_t input;
    cin >> input;
    int64_t input_real = input;
    int64_t tmp;
    int64_t min = 1000000;

    do
    {
        tmp = input;
        int64_t tmp2 = input;

        while (tmp > 0)
        {
            tmp2 += tmp % 10;
            tmp /= 10;
        }

        if (min > input && tmp2 == input_real)
            min = input;

        input--;
    } while (input > 0);

    if (min == 1000000)
        cout << 0 << endl;
    else
        cout << min << endl;

    return 0;
}