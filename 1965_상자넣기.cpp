//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//constexpr int MAX = 1001;
//
//int N;
//int dp[MAX];
//int arr[MAX];
//int result = 0;
//
//int main(void)
//{
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		dp[i] = 1;
//
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[j] < arr[i])
//			{
//				dp[i] = max(dp[j] + 1, dp[i]);
//			}
//		}
//
//		result = max(dp[i], result);
//	}
//
//	cout << result;
//
//	return 0;
//}