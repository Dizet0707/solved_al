// 1. M과 N을 입력받아 for문으로 소수 찾기. 이때 소수는 처음부터 나눠서 자기랑 1로만 나눠지면 다이(즉, count를 만들기)
// 2. 근데 생각해봤는데, 굳이 count를 저렇게 만들어야하나? 반대로 만들면 되는 거 아님? 약간 2부터 원래 수-1 까지 돌리면 서 count 1 넘어가면 다이되게 하는 게 수 전체 순환 안해도 되고 훨신 좋을 거 같음.
// 3. 근데 내가 \n로 구분된 입력 2개를 동시에 받는 법을 모르는데... 흐음
// 4. -> 이거 찾아보니까 cin은 \n이든 space든 white space는 전부 자동으로 버리고 value만 해준다네; 엄청 편하잖아 럭키비 키잖아

#include <iostream>
using namespace std;

int main(void)
{
        int m, n, sum = 0, min = 0;
        cin >> m >> n;

        for(int i = m; i < n+1; i++) // m부터 n 까지 돌고
        {
                if(i < 2) continue;

                bool isPrime = true;

                for(int j = 2; j < i; j++) // 그 안에서 2부터 i-1까지 돌면서 소수 탐색.
                {
                        if(i % j == 0) // 만약 0으로 나눠지는 부분이 있으면 그냥 break를 하면 되는 거 아닌가...?
                        {
                                isPrime = false;
                                break;
                        }
                }
                if(isPrime) // 처음에는 count == 0 && j = i-1이면 업데이트
                {
                        sum += i;
                        if(min == 0)
                                min = i;
                }

        }

        if(min != 0)
                cout << sum << '\n' << min << endl;
        else
                cout << min-1 << endl;

        return 0;
}
