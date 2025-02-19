// 1. sum = 0, 1 to n 반복, 1 to n 재반복(제곱)
// 2. sum += A[i] * A[j]
// 3. 아마 첫 번째줄은 총 실행 횟수니까 cin값의 제곱이고, 둘째줄은 cin값 아닐까?
// 4. 아닌듯.(예시로 나온 애가 아님) 최대가 제곱이니까 2로 함.
// 5. 어 왜 틀렸지?

// ❯ g++ -o prob24264 prob24264.cpp
// ❯ ./prob24264
// 500000
// 891896832
// 2
// ❯ g++ -o prob24264 prob24264.cpp
// ❯ ./prob24264
// 500000
// 250000000000
// 2

#include <iostream>
// #include <math.h>
using namespace std;

#define ll long long
#define X first
#define Y second
#define pii pair<int, int>
#define pll pair<ll, ll>

int main(void)
{
    ll a;
    cin >> a;

    cout << a * a << endl
         << 2 << endl;

    return 0;
}