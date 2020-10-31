#include<iostream>
using namespace std;
#define MOD 1007
#define SIZE 1001

int arr[SIZE][SIZE];

int main(void)
{
	int N, K;
	cin >> N >> K;

	arr[0][0] = arr[1][1] = arr[1][0] = 1;

	for (int i = 2; i <= N; i++)
	{
		for (int j = 0; j <= K; j++)
		{
			if ((j == i) || (j == 0))
			{
				arr[i][j] = 1;
			}
			else if ((j == 1) || (j == i - 1))
			{
				arr[i][j] = i;
			}
			else
			{
				arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j]) % MOD;
			}
		}
	}

	cout << arr[N][K] << '\n';

	return 0;
}