#include <iostream>
#include <string>
using namespace std;

string input;
int arr[26] = { 0, };

int main(void)
{
        int max = 0;
        char ans;

        cin >> input;

        for(int i = 0; i < input.length(); i++)
                if(input[i] >= 'a') arr[input[i]-'a']++;
                else arr[input[i] - 'A']++;

        for(int i = 0; i < 26; i++)
                if(arr[i] == max)
                {
                        ans = '?';
                }
                else if(arr[i] > max)
                {
                        max = arr[i];
                        ans = 'A' + i;
                }
                else
                        continue;

        cout << ans << endl;

        return 0;
}