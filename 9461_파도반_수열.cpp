#include<iostream>
using namespace std;

int T;
int result;
long long dp[101];
int N;

int main(void)
{
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	dp[5] = 2;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N;

		if (N >= 6)
		{
			for (int j = 6; j <= N; j++)
			{
				dp[j] = dp[j - 1] + dp[j - 5];
			}
		}

		cout << dp[N] << endl;
	}
	
	return 0;
}