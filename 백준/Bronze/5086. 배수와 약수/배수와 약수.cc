// 1. a % b == 0, b % a == 0, else, if a==0, b==0 return

#include <iostream>
using namespace std;

int main(void)
{
        int a, b;

        while(cin >> a >> b && a != 0 && b != 0) // 만약 || 로 처리를 한다면 &&가 우선순위기에 오류가 난다.
                                                 // 또한 || 부분을 괄호로 묶어 처리하면 0 1, 1 0을 대처할 수 없다. 1 0은 factor로 나오며, 0 1은 divide by zero 오류가 뜬다. 어차파 문제는 0 0으로 마치지 그냥 &&로 작성하겠다.
        {
                if(b%a == 0)
                        cout << "factor" << endl;
                else if(a%b == 0)
                        cout << "multiple" << endl;
                else
                        cout << "neither" << endl;
        }

        return 0;
}