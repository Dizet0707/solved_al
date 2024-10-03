#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
        vector<vector<unsigned int>> mat(9, vector<unsigned int>(9));
        int max = 0;
        vector<int> result(2);

        for(int i = 0; i < 9; i++)
        {
                for(int j = 0; j < 9; j++)
                {
                        cin >> mat[i][j];
                }
        }

        for(int i = 0; i < 9; i++)
        {
                for(int j = 0; j < 9; j++)
                {
                        if(mat[i][j] > max)
                        {
                                max = mat[i][j];
                                result = {i, j};
                        }
                }
        }

        cout << max << endl;
        cout << result[0] + 1 << ' ' << result[1] + 1 << endl;

        return 0;
}