#include <iostream>
#include <string>
using namespace std;

int main(void)
{
        int len = 0;

        string input;
        cin >> input;

        for(int i = 0; i < input.length(); i++)
        {
                if (input[i] == 'c' && input[i+1] == '=')
                {
                        len++;
                        ++i;
                }
                else if(input[i] == 'c' && input[i+1] == '-')
                {
                        len++;
                        ++i;
                }
                else if(input[i] == 'd' && input[i+1] == 'z' && input[i+2] == '=')
                {
                        len++;
                        i += 2;
                }
                else if(input[i] == 'd' && input[i+1] == '-')
                {
                        len++;
                        ++i;
                }
                else if(input[i] == 'l' && input[i+1] == 'j')
                {
                        len++;
                        ++i;
                }
                else if(input[i] == 'n' && input[i+1] == 'j')
                {
                        len++;
                        ++i;
                }
                else if(input[i] == 's' && input[i+1] == '=')
                {
                        len++;
                        ++i;
                }
                else if(input[i] == 'z' && input[i+1] == '=')
                {
                        len++;
                        ++i;
                }
                else
                        len++;
        }

        cout << len << endl;

        return 0;
}