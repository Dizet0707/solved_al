#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
        vector<string> arr(5);
        for(int i = 0; i < 5; i++)
        {
                getline(cin, arr[i]);
        }

        for(int i = 0; i < 15; i++)
        {
                for(int j = 0; j < 5; j++)
                {
                        if(i < arr[j].length())
                                cout << arr[j][i];
                }
        }

        cout << endl;

        return 0;
}