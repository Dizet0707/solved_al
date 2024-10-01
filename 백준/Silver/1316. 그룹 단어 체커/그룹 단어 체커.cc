#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    short num;
    cin >> num;
    
    short allnum = 0;  // 그룹 단어의 개수를 저장하는 변수

    for (int c = 0; c < num; c++)
    {
        string input;
        cin >> input;
        
        bool isGroupWord = true;
        char count[26] = { 0 };  // 각 알파벳의 사용 여부를 체크하는 배열

        for (int i = 0; i < input.length(); i++)
        {
            if (count[input[i] - 'a'] > 0)  // 이전에 사용한 문자가 다시 나왔는지 확인
            {
                if (input[i] != input[i - 1])  // 연속되지 않은 경우 그룹 단어가 아님
                {
                    isGroupWord = false;
                    break;
                }
            }
            count[input[i] - 'a']++;
        }

        if (isGroupWord)  // 그룹 단어일 때만 카운트 증가
        {
            allnum++;
        }
    }

    cout << allnum << endl;  // 그룹 단어의 개수 출력
    return 0;
}
