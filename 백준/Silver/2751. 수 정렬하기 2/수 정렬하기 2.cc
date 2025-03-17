// 보나마나 또 ^^ㅣㅋ빨 2시간동안 개ㅈㄹ할 거 같아서 그냥 풀이 보고 시작함. 어차피 나 알고리즘 모름 ㅇㅇ 하나도 모른다고;;
// https://www.acmicpc.net/board/view/31887
// 1. 버블 정렬, 선택 정렬, 삽입 정렬, 퀵정렬(최악의 경우) 은 n제곱 시간복잡도이기에 tle.
// 2. 사용해야하는 건 nlogn.(제일 효율적인 거). 있는 게 merge sort, 힙정렬, stl sort(이건 뭔지 몰루. 걍 sort)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int arr[1000001];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << '\n';

    return 0;
}