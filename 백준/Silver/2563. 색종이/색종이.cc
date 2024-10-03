#include <iostream>
#include <vector>
using namespace std;


// 생각을 해봤는데, 좌표를 입력받으면 그거에서 x축 + 10, y축 +10만큼 해당 1*1칸에(배열에) ++을 하는 식으로 만들어야겠다. 마지막에 for문으로 1 이상이면 넒이 +1로 하면 되잖아.

int main(void)
{
        int howMany;
        cin >> howMany;
        int x, y;
        int result = 0;

        vector<vector<int>> arr(100, vector<int>(100, 0));

        for(int i = 0; i < howMany; i++)
        {
                cin >> x >> y;
                for(int j = 0; j < 10; j++)
                {
                        for(int k = 0; k < 10; k++)
                        {
                                arr[x+j][y+k]++;
                        }
                }
        }


        for(int i = 0; i < 100; i++)
        {
                for(int j = 0; j < 100; j++)
                {
                        if(arr[i][j] > 0)
                                result++;
                }
        }

        cout << result << endl;

        return 0;
}