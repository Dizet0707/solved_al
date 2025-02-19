// 1. sum = 0, i는 1 ~ n-1. j는 i+1 ~ n
// 2. sum은 여전히 a[i] * a[j]
// 3. 1이면 n-1번, 2면 n-2번, 3이면 n-3번. n-1이면 1까지, 즉 1 ~ n-1까지 더한 값이 실행횟수
// 4. 최대항은 n(n-1) 이면 n^2이니까 2인가?
// 5. 근데 1 - 7까지 합은 28인데 정작 답은 21이네 흐음. 아 7을 안더해야하노

#include <iostream>
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
    cout << a * (a - 1) / 2 << endl
         << 2 << endl;

    return 0;
}