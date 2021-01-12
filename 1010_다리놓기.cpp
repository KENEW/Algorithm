#include<iostream>
using namespace std;

int N, M, T;
int dp[31][31] = {0, };

int main(void)
{
	cin >> T;

	for (int t = 0; t < T; t++)
	{
		cin >> N >> M;

		for (int i = 1; i <= M; i++)
		{
			dp[1][i] = i;
		}

		for (int i = 2; i <= N; i++)
		{
			for (int j = 2; j <= M; j++)
			{
				dp[i][j] = dp[i][j - 1] + dp[i- 1][j - 1];
			}
		}

		cout << dp[N][M] << endl;
	}

	return 0;
}