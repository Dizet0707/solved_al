// 1. 해는 유일하다. (예외처리 필요 x)
// 2. -999 - 999
// 3. 수학공식을 인터넷에 찾아보자. 수학공식만 알면 금방 푼다. 그냥 계산도 되잖아.

#include <iostream>
using namespace std;

int main(void)
{
    int64_t a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    long double x = (c * e - b * f) / (a * e - b * d);
    long double y = (c * d - a * f) / (b * d - a * e);

    cout << x << ' ' << y << endl;

    return 0;
}