#include <iostream>
using namespace std;

int main(void)
{
        int floor;
        cin >> floor;

        for(int i = floor; i > 0; i--) // 총 n번 출력; 층을 만들 것.
        {
                for(int j = 0; j < i-1; j++) // 0층일 때 floor-1, 1층일 때 floor-2
                        cout << ' ';

                for(int k = 1; k <= 2*(floor-(i-1))-1; k++)
                        cout << '*';
                cout << endl;
        }

        for(int i = floor-1; i > 0; i--)
        {
                for(int j = floor-1; j >= i; j--)
                        cout << ' ';
                for(int k = 0; k < 2*(i)-1; k++)
                        cout << '*';
                cout << endl;
        }

        return 0;
}