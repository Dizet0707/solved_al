// 1. 특정한 규칙성이 존재할 것으로 예상된다. 이거 그냥 윗뚜껑이랑 바닥을 따로 생각하면 된다.
// 2. 일단 첫 번재 상자(1)는 반드시 4이다. 즉, 위에 뚜껑 3 + 바닥 1이다.
// 3. 두 번째는 뚜껑 3에다가 원래 있던 바닥이 옆으로 벌어져 + 1이다. 거기다가 새로 생긴 바닥 2개 + 벽 2개 해서 총 8개이다.
// 4. 세 번째는 뚜껑 3에다가 아까 그 벌어진 바닥 + 1 벽 + 2 + 또 벌어진 바닥 + 1 새벽 생긴 벽 +2 새로 생긴 바닥 + 3 해서 12이다.
// 5. 즉, 1은 4, 2는 4+2+2, 3은 4+3+2+3, 4는 4+3+3+2+3, 5는 4+3+3+3+2+3이다.

#include <iostream>
// #include <chrono>
using namespace std;

void func(long long tmp)
{
        long long top = 3;
        long long kabe = 0; // 벽
        long long badak = tmp;
        long long busanmul = 0;

        for(long long i = 1; i < tmp; i++)
        {
                kabe += 2;
                busanmul++;
        }

        cout << top + kabe + badak + busanmul;
}

int main(void)
{
        long long tmp;
        cin >> tmp;
        // auto start = std::chrono::high_resolution_clock::now();
        func(tmp);

        // auto end = std::chrono::high_resolution_clock::now();
        // auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

        // std::cout << "경과 시간: " << duration << " 마이크로초" << std::endl;

        return 0;
}