//#include<iostream>
//using namespace std;
//
//int T, N;
//int dp[11] = {0, 1, 2, 4, };
//
//int main(void)
//{
//	cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		cin >> N;
//		
//		for(int i = 4; i <= N; i++)
//		{
//			if (dp[i] == 0)
//			{
//				dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
//			}
//		}
//
//		cout << dp[N] << endl;
//	}
//
//	return 0;
//}