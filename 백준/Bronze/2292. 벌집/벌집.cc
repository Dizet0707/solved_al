// 1. N번째 방까지 가는데 거치는 모든 방의 개수를 세는 느낌인듯. 가령 13은 1-4-13이라서 1에서 시작하는 나로선 2가 답같지만, 여기에 1을 더해 3을 답으로 해야하는 느낌. 이건 그냥 마지막에 1 더하는 걸로 생각하고 풀자.
// 2. 2-7은 1, 8-19는 2, 20-37은 3, 38-61은 4. 즉, 특정 숫자가 총 몇 번 걸리는지를 생각할 수 있어야... 즉, 육각형의 층이 어떤식으로 개수가 증가하는지를 생각해볼 수 있어야할듯. 근데 이거는 육각형의 변의 개수랑 관련있는 거 아닌가?
// 3. 가령 제일 처음은 1이고, 그 다음 층은 6임. 그 다음 층은 12, 그 다음 층은 18임. 결정났네.
// 4. 6 12 18 24 ... 시작점을 1로 하고 +6 +12 +18 +24.... 해서 해당 수를 넘어가는 지점을 찾으면 될듯.
// 5. 가령 8이 들어오면 count 1은 1 + 6. 답은 7이고, 8 미만이니까 count 2. count 2는 7 + 12고 8 이상이니 8은 2.
// 6. input값은 1,000,000,000까지 들어옴.

#include <iostream>
using namespace std;

int main(void)
{
        int counter = 0, num, count = 1; // counter는 while에서 count를 샐 애. count는 그 숫자(+6, +12 할 애)
        cin >> num;
        if(num == 1)
        {
                cout << 1 << endl;
                return 0;
        }
        do
        {
                counter++;
                count += 6 * counter;
                if(count >= num)
                {
                        cout << counter+1 << endl; // +1해주는 이유는 주석 1번을 보면 될듯.
                        break;
                }
        }while(1);

        return 0;
}