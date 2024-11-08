#include <iostream>
using namespace std;

#define X first
#define Y second
#define pii pair<int, int>

int main(void)
{
        int N;
        int x_min = 10000, x_Max = -10000, y_min = 10000, y_Max = -10000;
        cin >> N;

        for (int i = 0; i < N; i++)
        {
                pii tmp;
                cin >> tmp.X >> tmp.Y;

                if (x_min > tmp.X)
                        x_min = tmp.X; // 10
                if (x_Max < tmp.X)
                        x_Max = tmp.X; // 40
                if (y_min > tmp.Y)
                        y_min = tmp.Y; // 12
                if (y_Max < tmp.Y)
                        y_Max = tmp.Y; // 24
        }

        cout << (x_Max - x_min) * (y_Max - y_min) << endl;

        return 0;
}