// 1. 그냥 무지성으로 하면 될 거 같은데
// 2. 라고 생각했는데 안되네; 브포 해야하노
// 3. 이게 왜 안되노:??
// 4. 안되는 이유 분석
// 4.1 내가 생각한 방식은 5와 3으로 먼저 나눠보고, 각 modulus가 0이면 바로 답을 내는 식.
// 4.2 만약 한 쪽이 0으로 나눠지지 않는다면, 나머지 한 쪽을 확인. 둘 다 0이 아니면, 그때부터 애매해짐
// 4.3 왜 else와 같은 로직이 나왔냐면 11을 처리하는 경우 5 5 1(x) 3 3 3 2 와 같은 식이라서 5로도, 3으로도 하기 참 애매하기 때문.
// 3을 끝까지 끌고갈 수도, 5를 끝가지 끌고갈 수도 없음.
// 4.4 그래서 그냥 하나씩 빼가면서 각 뺀 값들을 5나 3으로 나눠보면서 작성하면 되는 거 아닌가란 결론.
// 4.5 근데 왜 작동을 안하냐?
// 4.6 ?? 아니 for문으로 돌리면 전부 제대로 작동하는데? 작동은 하는 거면, 답이 아닌 게 있다고?
// 4.7 내가 너무 복잡하게 생각하는 건가;;; 그냥 tmp_5가 0일 때, tmp3이 0일 때를 무한 반복하면 된다고? 이게 맞아?
// 4.8 아 맞네 어차피 5 5 2보단 3 3 3 3 이 맞다고 주장하는 해당 문제는 어쨋든 최소단위로 나누는 게 유의미할 가능성이 높은 걸 생각하면
// 4.9 그냥 5로 나눠지는지 확인만 하고, 안되면 그냥 전부 3으로 하나씩 빼버리는 게 답인가? 일단 걍 코딩 해봄.

#include <iostream>
using namespace std;

int main(void)
{
    int input;
    cin >> input;

    // int tmp5 = input % 5;
    // int tmp3 = input % 3;
    int tmp = input;
    int count = 0;

    while (tmp >= 0)
    {
        if (tmp % 5 == 0)
        {
            cout << count + tmp / 5 << endl;
            return 0;
        }
        tmp -= 3;
        // tmp5 = tmp % 5;
        count++;
    }

    cout << -1 << endl;
    return 0;
    // // for (int i = 3; i < 5001; i++)
    // // {
    // int input; // = i;
    // cin >> input;
    // // cout << input << endl;

    // int tmp_5 = input % 5;
    // int tmp_3 = input % 3;

    // if (tmp_5 % 3 == 0)
    // {
    //     cout << input / 5 + tmp_5 / 3 << endl;
    // }
    // else if (tmp_3 == 0)
    // {
    //     cout << input / 3 << endl;
    // }
    // else
    // {
    //     // if (tmp_3 % 5 == 0)
    //     // {
    //     //     cout << input / 3 + tmp_3 / 5 << endl;
    //     // }
    //     // else
    //     //     cout << -1 << endl;
    //     char flag = 0;
    //     int tmp = input;
    //     int count = 0;
    //     while (tmp > 0)
    //     {
    //         count++;
    //         tmp -= 3;
    //         if (tmp % 5 == 0 && tmp > 0)
    //         {
    //             cout << count + tmp / 5 << endl;
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     if (flag == 0)
    //     {
    //         tmp = input;
    //         count = 0;
    //         while (tmp > 0)
    //         {
    //             count++;
    //             tmp -= 5;
    //             if (tmp % 3 == 0 && tmp > 0)
    //             {
    //                 cout << count + tmp / 3 << endl;
    //                 flag = 1;
    //                 break;
    //             }
    //         }
    //     }
    //     if (flag == 0)
    //         cout << -1 << endl;
    // }
    // // cout << endl;
    // // }

    // return 0;
}