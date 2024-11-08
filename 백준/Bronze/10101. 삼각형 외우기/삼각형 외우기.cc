#include <iostream>
using namespace std;

int main(void)
{
        int a, b, c;
        cin >> a >> b >> c; // 화이트 스페이스는 알아서 무시할 거임.

        if(a+b+c == 180)
        {
                if(a==b && b==c && c==a)
                        cout << "Equilateral" << endl;
                else if(a==b || b==c || c==a)
                        cout << "Isosceles" << endl;
                else
                        cout << "Scalene" << endl;
        }
        else
                cout << "Error" << endl;

        return 0;
}