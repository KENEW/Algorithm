//#include<iostream>
//using namespace std;
//
//constexpr int DIV = 1000000009;
//constexpr int MAX = 1000001;
//
//int T, N;
//long long dp[MAX] = {0, 1, 2, 4, 0, };
//
//int main(void)
//{
//	cin >> T;
//
//	for (int t = 0; t < T; t++)
//	{
//		cin >> N;
//
//		for (int i = 4; i <= N; i++)
//		{
//			dp[i] = (dp[i - 3] + dp[i - 2] + dp[i - 1]) % DIV;
//		}
//
//		cout << dp[N] % DIV << endl;
//	}
//
//	return 0;
//}