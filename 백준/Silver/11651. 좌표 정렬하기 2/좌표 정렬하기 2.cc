#include <iostream>
using namespace std;

// ㅅㅂ 다 갖다버려; 구현해도 풀리지 않는데 이게 뭐노;
#include <algorithm>
#include <vector>
// using namespace std;

struct interval
{
    int x, y;
};

bool compare(const interval &a, const interval &b) // const는 하는 게 좋다고 하네; 기억용
{
    if (a.y == b.y)
        return a.x < b.x;
    return a.y < b.y;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); // 조금이라도 빠르게;; 이런 게 있는지도 몰랐노;
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<interval> intervals(n);

    for (int i = 0; i < n; i++)
        cin >> intervals[i].x >> intervals[i].y;

    sort(intervals.begin(), intervals.end(), compare); // compare 자체가 return값이 bool이기에 생기는 일. 근데 어떻게 a랑 b가 넘어가지?

    // for (const auto &p : intervals)
    for (int i = 0; i < n; i++)
        cout << intervals[i].x << ' ' << intervals[i].y << '\n';

    return 0;
}