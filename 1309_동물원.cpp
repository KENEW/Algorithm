#include<iostream>
using namespace std;

constexpr int MAX = 100001;
constexpr int DIV = 9901;

int N;
int dp[3][MAX];

int main(void)
{
	cin >> N;

	dp[0][1] = dp[1][1] = dp[2][1] = 1;

	for (int i = 2; i <= N; i++)
	{
		dp[0][i] = (dp[0][i - 1] + dp[1][i - 1] + dp[2][i - 1]) % DIV;
		dp[1][i] = (dp[0][i - 1] + dp[2][i - 1]) % DIV;
		dp[2][i] = (dp[0][i - 1] + dp[1][i - 1]) % DIV;
	}

	cout << (dp[0][N] + dp[1][N] + dp[2][N]) % DIV;

	return 0;
}