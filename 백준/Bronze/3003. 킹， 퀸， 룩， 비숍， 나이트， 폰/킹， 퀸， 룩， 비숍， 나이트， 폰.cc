#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
        int input;
        for(int i = 0; i < 2; i++)
        {
                scanf("%d", &input);

                if(input == 1)
                        cout << 0 <<  ' ';
                else
                        cout << 1 - input << ' ';
        }
        for(int i = 0; i < 3; i++)
        {
                scanf("%d", &input);
                if(input == 2)
                        cout << 0 <<  ' ';
                else
                        cout << 2 - input << ' ';
        }

        scanf("%d", &input);
        if(input == 8)
                cout << 0 << ' ';
        else
                cout << 8 - input << ' ';


        return 0;
}