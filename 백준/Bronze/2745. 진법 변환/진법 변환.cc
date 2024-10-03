#include <iostream>
#include <string>
// #include <cstdlib>
using namespace std;

int main(void)
{
        string input1;
        int input2;
        long sum = 0;

        cin >> input1 >> input2;

        int next = 1;

        for(int i = input1.length()-1; i >= 0; i--)
        {
                if(input1[i] >= 'A' && input1[i] <= 'Z')
                {
                        sum += (input1[i]-55) * next;
                        next *= input2;
                }
                else
                {
                        // sum += atoi(input1[i]) * next;
                        sum += (input1[i]-'0') * next;
                        next *= input2;
                }
        }

        cout << sum << endl;

        return 0;
}