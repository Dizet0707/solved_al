// 1. "대략적으로"만 파악해도 자신의 코드가 시간 초과가 날 지 아닐지를 어느 정도 예측할 수 있습니다.
// 2. sum = 0, i, j, k전부 1 to n. sum += a[i]+a[j]+a[k]
// 3. 최대는 n의 3승. 횟수는 세제곱하면 되지 않나?

#include <iostream>
using namespace std;

int main(void)
{
    long long a;
    cin >> a;

    cout << a * a * a << endl
         << 3 << endl;

    return 0;
}