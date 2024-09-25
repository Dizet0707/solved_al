#include <iostream>
#include <string>
using namespace std;

int main(void)
{
        string input;
        cin >> input;
        int count = 0;

        for(int i = 0; i < (input.size())/2; i++)          // 만약 5글자가 들어오면 2번만 실행. 즉 중간 글자는 신경 안씀. 물론 짝수 글자가 들어오면 신경 씀.
        {
                if(input[0+i] == input[input.size()-1-i])  // reference는 2순위, 뺄셈은 4순위
                        count++;                           // 같으면 count ++
                else
                        count--;                           // 다르면 count -- 를 해서 count == 0이면
        }

        if(count == input.size()/2)
                cout << 1;
        else
                cout << 0;
        cout << endl;

        return 0;
}