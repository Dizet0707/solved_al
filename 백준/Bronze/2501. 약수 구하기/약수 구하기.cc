// 1. 두 개의 자연수 N과 K가 주어졌을 때, N의 약수들 중 K번째로 작은 수를 출력하는 프로그램
// 2. 6 2면 6의 약수 1 2 3 6 중에서 3번째인 3 출력.
// 3. counter 사용하자.

#include <iostream>
using namespace std;

int main(void)
{
        int counter = 0, a, b, count = 1; // counter는 약수의 "번째" 이고, count는 다음 턴에서 나눌 숫자이다.
        cin >> a >> b;

        while(count <= a) // 25 4같은 input 들어오면 1 5 25뿐인 25는 무한루프를 돈다.
        {
                if(a % count == 0)
                {
                        counter++;
                        if(counter == b)
                        {
                                cout << count << endl; // 가령, 6 3 에서 1 2까지 해서 counter = 2라고 할 때, 3을 하면 counter = 3이 되고, count가 높아져서 4가 된다. 이후에 counter != b니까 바로 break되는데, 그렇게 생각하면 count가 1 높아져 서 나온다.
                                return 0;
                        }
                }
                count++;
        }

        cout << 0 << endl;
        return 0;
}