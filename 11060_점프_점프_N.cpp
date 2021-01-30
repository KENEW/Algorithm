//#include<iostream>
//using namespace std;
//
//int dp[1001];
//int N;
//int a[1001];
//int t_num;
//
//int main(void)
//{
//	cin >> N;
//	
//	dp[1] = 1;
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> t_num;
//
//		if (dp[i] == 0)
//		{
//			break;
//		}
//
//		for (int j = 1; j <= t_num; j++)
//		{
//			if (dp[i + j] > (dp[i] + 1) || dp[i + j] == 0)
//			{
//				dp[i + j] = dp[i] + 1;
//			}
//		}
//	}
//
//	if (dp[N] == 0)
//	{
//		cout << "-1" << endl;
//	}
//	else
//	{
//		cout << dp[N] - 1 << endl;
//	}
//
//	return 0;
//}