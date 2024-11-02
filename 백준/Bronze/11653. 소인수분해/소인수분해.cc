// 1. 정수 N을 소인수분해하는 문제. N은 input. input은 1개. input 때문에 while 돌릴 필요 없을듯.
// 2. 그냥 for로 약수 찾아서 tmp에 그 약수로 나눈 몫 담고... 굳이 담을 필요 있나 그냥 바로 출력하면 되는 거 아님?
// 3. 근데 정수 input이 너무 큰데 흐음... 근데 생각해보면 기하급수적으로 떨어지려나... 소수 소수 곱이면 pnp 되는 거 아닌가... 흐음. 일단 생각한 걸 짜보겠음.

#include <iostream>
using namespace std;

int main(void)
{
        int input;
        cin >> input;

        while(input != 1)
        {
                for(int i = 2; i <= input; i++)
                {
                        if(input % i == 0)
                        {
                                input = input / i;
                                cout << i << endl;
                                break;
                        }
                }
        }
        return 0;
}