//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//constexpr int MAX_CNT = 17;
//
//int N;
//int workTime[MAX_CNT];
//int workPoint[MAX_CNT];
//int dp[MAX_CNT];
//int result;
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
//	for (int i = 1; i <= N; i++)
//	{
//		if (i + workTime[i] <= N + 1)
//		{
//			dp[i + workTime[i]] = max(dp[i + workTime[i]], dp[i] + workPoint[i]);
//
//			result = max(result, dp[i + workTime[i]]);
//		}
//
//		dp[i + 1] = max(dp[i + 1], dp[i]);
//		result = max(result, dp[i + 1]);
//	}
//
//	cout << result;
//
//	return 0;
//}
