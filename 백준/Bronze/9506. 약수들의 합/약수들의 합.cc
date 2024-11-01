// 1. while 내에 무한 걸어놓고 if 입력값이 -1이면 out되게 설정. 이는 &&로 구현.
// 2. for문으로 1부터 input+1값(개구간)까지 돌면서 modular값 == 0이면 sum에 더하기
// 3. 마지막if sum == input이면 cout.

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
        int input;
        while(cin >> input && input != -1)
        {
                int sum = 0;
                vector<int> v;
                for(int i = 1; i < input; i++)
                {
                        if(input % i == 0)
                        {
                                v.push_back(i);
                                sum += i;
                        }
                }

                if(sum == input)
                {
                        cout << input   << " = ";
                        for(int t : v)
                        {
                                cout << t;
                                if(t != v.back())
                                        cout << " + ";
                        }
                } else
                {
                        cout << input << " is NOT perfect.";
                }
                cout << endl;
        }

        return 0;
}