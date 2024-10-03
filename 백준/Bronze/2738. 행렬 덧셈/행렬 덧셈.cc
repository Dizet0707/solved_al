#include <iostream>
using namespace std;

int main(void)
{
	int mat1[100][100];
	int mat2[100][100];
	int result[100][100] = {
		0,
	};
	int count[2];

	cin >> count[0] >> count[1];

	for (int i = 0; i < count[0]; i++) // mat1
	{
		for (int j = 0; j < count[1]; j++)
			cin >> mat1[i][j];
	}
	for (int i = 0; i < count[0]; i++) // mat2
	{
		for (int j = 0; j < count[1]; j++)
			cin >> mat2[i][j];
	}

	for (int i = 0; i < count[0]; i++) // mat1
	{
		for (int j = 0; j < count[1]; j++)
			mat1[i][j] += mat2[i][j];
	}

	for (int i = 0; i < count[0]; i++) // mat1
	{
		for (int j = 0; j < count[1]; j++)
			cout << mat1[i][j] << ' ';
		cout << endl;
	}

	return 0;
}
