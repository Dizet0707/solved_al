// 1. x y w h 입력 들어오면 (x,y) 우상단 꼭짓점이 (w, h) (좌하단은 0,0)인 사각형까지의 최소거리를 구하는 문제.
// 2. x랑 w, y랑 h 뺀 절댓값 구해서 min값 구하고 x, y값 자체가 x축과 y축 각각 까지의 거리니까 이거 중에서도 min 구하고.

#include <iostream>
using namespace std;

int main(void)
{
        int min = 10000;
        int x, y, w, h;
        cin >> x >> y >> w >> h;

        if(min > x)
                min = x;
        if(min > y)
                min = y;
        if(min > (w-x))
                min = w-x;
        if(min > (h-y))
                min = h-y;

        cout << min << endl;
        return 0;
}