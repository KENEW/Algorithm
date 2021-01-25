//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int N, maxNum = 0;
//int arr[10001];
//int dp[10001];
//
//int main(void)
//{
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//		dp[i] = arr[i];
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				dp[i] = max(dp[j] + arr[i], dp[i]);
//			}
//		}
//		maxNum = max(maxNum, dp[i]);
//	}
//
//	cout << maxNum;
//
//	return 0;
//}