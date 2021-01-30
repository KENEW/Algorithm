//#include<iostream>
//using namespace std;
//
//int dp[41] = {1, 1, };
//int vip[41];
//int N, M;
//int t_num;
//
//int result = 1;
//
//int f(int num)
//{
//	if (dp[num] != 0)
//	{
//		return dp[num];
//	}
//	else
//	{
//		dp[num] = f(num - 2) + f(num - 1);
//		return dp[num];
//	}
//}
//int main(void)
//{
//	cin >> N >> M;
//
//	for(int i = 1; i <= M; i++)
//	{
//		cin >> t_num;
//		vip[i] = t_num;
//	}
//
//	f(N);
//	
//	for (int i = 1; i <= M; i++)
//	{
//		result *= dp[vip[i] - vip[i - 1] - 1];
//	}
//
//	result *= dp[N - vip[M]];
//
//	cout << result;
//
//	return 0;
//}