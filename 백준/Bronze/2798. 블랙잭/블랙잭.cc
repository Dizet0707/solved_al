// 세 장의 카드를 고르는 모든 경우를 고려하는 문제
// 1.  카드의 합이 21을 넘지 않는 한도 내에서, 카드의 합을 최대한 크게 만드는 게임
// 2. 각 카드에는 양의 정수, N장의 카드를 모두 숫자가 보이도록 바닥, 딜러는 숫자 M을 제공
// 3. N장의 카드 중에서 3장 고르기. 고른 카드의 합은 M을 넘지 않으면서 M과 최대한 유사하게.
// 4. N장의 카드에 써져 있는 숫자가 주어졌을 때, M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 구해 출력;;
// 5. 이걸 먼저 말해줄 수는 없나;;
// 6. 음 이걸 해결하려면 구조체 쓰는 게 빠르지 않나.

#include <iostream>
using namespace std;

int main(void)
{
    int64_t howManyCards, Max_num;
    int64_t Max = 0;
    int64_t input[100];
    int64_t tmp;

    cin >> howManyCards >> Max_num;

    for (int i = 0; i < howManyCards; i++)
        cin >> input[i];

    for (int i = 0; i < howManyCards; i++)
    {
        for (int j = i + 1; j < howManyCards; j++)
        {
            for (int k = j + 1; k < howManyCards; k++)
            {
                tmp = input[i] + input[j] + input[k];
                if (tmp <= Max_num && tmp > Max)
                    Max = tmp;
            }
        }
    }

    cout << Max << endl;

    return 0;
}
