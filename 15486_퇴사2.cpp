//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//constexpr int MAX_CNT = 1500001;
//
//int workTime[MAX_CNT];
//int workPoint[MAX_CNT];
//int N;
//long dp[MAX_CNT];
//long result = 0;
//
//int main(void)
//{
//	cin >> N;
//
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> workTime[i];
//		cin >> workPoint[i];
//	}
//
//	for (int i = 1; i <= N + 1; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			dp[i] = max(dp[i], dp[j]);
//
//			if (j + workTime[j] == i)
//			{
//				dp[i] = max(dp[i], dp[j] + workPoint[j]);
//			}
//		}
//
//		result = max(result, dp[i]);
//	}
//
//	cout << result << endl;
//}