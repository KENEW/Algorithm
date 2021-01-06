#include<iostream>
#include<algorithm>
#define MAX 1001
using namespace std;

int N;
int dp[MAX][3] = {0, };

int main(void)
{
	cin >> N;
	
	for (int i = 1; i <= N; i++)
	{
		cin >> dp[i][0] >> dp[i][1] >> dp[i][2];

		dp[i][0] += min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] += min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] += min(dp[i - 1][0], dp[i - 1][1]);
	}

	cout << min(dp[N][0], min(dp[N][1], dp[N][2]));

	return 0;
}