#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	long N; // 10진법 수
	int B;	// 변환할 진법
	cin >> N >> B;

	vector<char> result;

	// N을 B진법으로 변환
	while (N > 0)
	{
		int remainder = N % B;
		N /= B;

		// 나머지가 10 이상일 때 알파벳으로 변환
		if (remainder >= 10)
		{
			result.push_back('A' + (remainder - 10));
		}
		else
		{
			result.push_back('0' + remainder);
		}
	}

	// 결과를 역순으로 출력
	for (int i = result.size() - 1; i >= 0; i--)
	{
		cout << result[i];
	}

	cout << endl;
	return 0;
}

// int main(void)
// {
// 	long input1;
// 	int input2;
// 	long sum = 0;

// 	cin >> input1 >> input2;
// 	long cost = input1;		// input1에서 감해서 0으로 만들 것.
// 	long next = input2 - 1; // input2에서 늘려서 마지막 진법까지 늘릴 것.
// 	vector<int> vec;

// 	while (cost >= 0)
// 	{
// 		if ((cost - next) >= 0)
// 		{
// 			cost -= next;
// 			vec.push_back(input2 - 1);
// 			next += (input2 - 1) * input2;
// 		}
// 		else
// 		{
// 			int tmp = input2 - 1;
// 			while ((cost - tmp) < 0)
// 			{
// 				if ((cost - tmp) < 0)
// 				{
// 					tmp--;
// 					continue;
// 				}
// 			}
// 			vec.push_back(tmp);
// 			break;
// 		}
// 	}

// 	for (int i = vec.size() - 1; i >= 0; i--)
// 		cout << vec[i];

// 	cout << endl;

// 	return 0;
// }
