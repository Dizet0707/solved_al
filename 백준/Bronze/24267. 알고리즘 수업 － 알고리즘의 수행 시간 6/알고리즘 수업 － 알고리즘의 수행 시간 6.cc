// 그 역할을 하는 것이 바로 시간 복잡도입니다.
// 1. sum = 0; i는 1 to n-2, j는 i+1 to n-1, k는 j+1 to n
// 2. sum은 a의 idx 값 전부 곱한 값
// 3. 최대는 i=1, j=2~n-1, k=3~n;; i=n-2, j=1, k=1
// 4. 따라서 n-2 * n-2 가 최대 아님? 횟수는 그냥 3개 전부 곱하면 될듯.
// 가 아닌데;;;
// 5. k는 j+1 to n. 따라서 (n+k)/2 * (n-k+1) 인데 k=j+1이니,
// 6. 도저히 모르겠어서 풀이 봤는데 왜 시그마를 쓰고 있냐? 하;; 시그마로 해봄
// 7. 아몰라 그냥 해
// (n-2)(n-1)n / 6

#include <iostream>
using namespace std;

int main(void)
{
    long long a;
    cin >> a;
    cout << (a - 2) * (a - 1) * a / 6 << endl
         << 3 << endl;
    return 0;
}