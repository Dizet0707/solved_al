// 1. 사각형이 되려면 똑같은 좌표가 짝수번 와야함.
// 2. 가령 (0, 0) (1, 1) (0, 1) (1, 0). 즉, 좌하단과 우상단만 정해지면 나머지 점의 x와 y는 다른 것을 따라간다.
// 3. 그냥 x좌표 min값, max값이랑, y좌표 min값 max값 구해서... 하면 너무 리소스가 많이 들 거 같다.
// 4. 그냥 count 하자... 라고 생각하고 코드를 짜는데... 특정 숫자에 대한 count를 하기 위해서는 struct를 만들어야 하고, 또한 좌우를 구분해야하기에 그럼 총 숫자 4개에 대한 struct를 만들어야한다.
// 5. 만약 해당 숫자가 Node에 없으면 그 숫자를 기준으로 한 Node가 만들어져야하며, count++이 되어야한다.
// 6. 만약 해당 숫자가 이미 있으면, 해당 숫자의 count가 ++되어야한다.
// 7. 결국 traverse하면서 각 num을 접근해야할 필요성이 존재하며, 이는 필연적으로 list나 vector가 필요해진다.
// 8. -> 그러면 결국 struct를 따로 만들 필요가 없지.
// 9. 근데 내가 따로 Node를 만들어서 하는 거 아닌이상 #include <list>는 일종의 vector와 비슷하게 작동하며, 이는 pair로 저장이 불가능하다. 따라서 utility 라이브러리도 사용해보겟다.

#include <iostream>
#include <list>
#include <utility> // std::pair
using namespace std;

void addOrUpdate(list<pair<int, int>>& a, int value)
{
        for(auto& item : a)
        {
                if(item.first == value)
                {
                        item.second++;
                        return;
                }
        }

        a.emplace_back(value, 1);
}

void print(list<pair<int, int>>& a)
{
        for(auto& item : a)
        {
                if(item.second % 2 == 1)
                        cout << item.first;
        }

        return;
}

int main(void)
{
        list<pair<int, int>> right, left;
        int tmp1, tmp2;

        for(int i = 0; i < 3; i++)
        {
                cin >> tmp1 >> tmp2;

                addOrUpdate(left, tmp1);
                addOrUpdate(right, tmp2);
        }

        print(left);
        cout << ' ';
        print(right);
        cout << endl;

        return 0;
}