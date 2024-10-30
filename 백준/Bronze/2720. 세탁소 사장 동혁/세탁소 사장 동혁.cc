#include <iostream>
#include <cmath>
using namespace std;

// 문제에서 1-500 사이의 값을 주기에
#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

int tmp; // 임시변수(나머지 저장 용도)

int calc(int value, int dividend)
{
	cout << value / dividend << " ";
	tmp = fmod(value, dividend);

	return 0;
}

int main(void)
{
	int count; // 반복 횟수
	int value; // input되는 거스름돈 값
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> value;

		calc(value, QUARTER);
		calc(tmp, DIME);
		calc(tmp, NICKEL);
		calc(tmp, PENNY);
		cout << endl;
	}

	return 0;
}