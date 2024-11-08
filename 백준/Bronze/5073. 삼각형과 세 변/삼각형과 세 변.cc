#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main(void)
{
        int a, b, c;
        stack<int> s1;
        cin >> a >> b >> c; // 화이트 스페이스는 알아서 무시할 거임.
        while(a!=0 && b!=0 && c!=0)
        {
                if(a==b && b==c && c==a)
                        cout << "Equilateral" << endl;
                else if(a >= b+c || b >= c+a || c >= a+b)
                        cout << "Invalid" << endl;
                else if(a==b || b==c || c==a)
                        cout << "Isosceles" << endl;
                else
                        cout << "Scalene" << endl;

                cin >> a >> b >> c;
        }
        return 0;
}
