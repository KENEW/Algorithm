#include<iostream>
using namespace std;

long long dp[1001][10];
long long N;
long long result = 0;

int main(void)
{
	cin >> N;

	for (int i = 0; i < 10; i++)
	{
		dp[1][i] = 1;
	}
	for(int t = 2; t <= N; t++)
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = i; j < 10; j++)
			{
				dp[t][j] += dp[t - 1][i];
				dp[t][j] %= 10007;
			}
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		result += dp[N][i];
	}

	cout << result % 10007;
	
	return 0;
}