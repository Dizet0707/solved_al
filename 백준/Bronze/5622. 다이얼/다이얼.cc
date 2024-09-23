#include <iostream>
#include <string>
using namespace std;

int main(void)
{
        string str;
        cin >> str;

        int sec = 0;

        for(int i = 0; i < str.length(); i++)
        {
                if (str[i] >= 65 && str[i] <= 67)
                        sec += 3;
                else if (str[i] >= 68 && str[i] <= 70)
                        sec += 4;
                else if (str[i] >= 71 && str[i] <= 73)
                        sec += 5;
                else if (str[i] >= 74 && str[i] <= 76)
                        sec += 6;
                else if (str[i] >= 77 && str[i] <= 79)
                        sec += 7;
                else if (str[i] >= 80 && str[i] <= 83)
                        sec += 8;
                else if (str[i] >= 84 && str[i] <= 86)
                        sec += 9;
                else if (str[i] >= 87 && str[i] <= 90)
                        sec += 10;
        }
        cout << sec << endl;

        return 0;
}