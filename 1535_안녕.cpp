#include<iostream>
#include<algorithm>
using namespace std;

constexpr int MAX = 100;

int arr[101][2];
int dp[101][101];
int N, K;

int main(void)
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i][0];
	}

	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i][1];
	}

	for (int i = 1; i <= MAX; i++)
	{
		if(i >= arr[1][0])
		dp[1][i] = arr[1][1];
	}

	for (int i = 2; i <= N; i++)
	{
		for (int j = 1; j < MAX; j++)
		{
			if (j - arr[i][0] >= 0)
			{
				dp[i][j] = max(arr[i][1] + dp[i - 1][j - arr[i][0]], dp[i - 1][j]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	cout << dp[N][MAX - 1];

	return 0;
}