//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int N;
//int arr[100001];
//int dp[100001];
//int result;
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
//	dp[0] = arr[0];
//	result = dp[0];
//
//	for(int i = 1; i < N; i++)
//	{
//		dp[i] = max(arr[i], arr[i] + dp[i - 1]);
//		result = max(result, dp[i]);
//	}
//
//	cout << result;
//	return 0;
//}