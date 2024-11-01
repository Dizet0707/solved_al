// 1. 그냥 소수 찾는 문제라서 for으로 전부 돌리면 된다. 만약 소수면 sum++ 해주면 될듯.

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
        int input, sum = 0; // sum은 전체 소수의 개수
        vector<int> v;
        cin >> input;

        for(int i = 0; i < input; i++)
        {
                int tmp_input;
                cin >> tmp_input;
                v.push_back(tmp_input);
        }

        for(int i : v)
        {
                int sum_tmp = 0; // sum_tmp는
                for(int j = 1; j < i + 1; j++)
                {
                        if(i % j == 0)
                                sum_tmp++;
                }

                if(sum_tmp == 2) // 자기랑 1 총 2개면
                        sum++;
        }

        cout << sum << endl;
        return 0;
}