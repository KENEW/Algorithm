//#include<iostream>
//#define endl "\n"
//using namespace std;
//
//constexpr int MAX = 10001;
//
//int N, K;
//int DP[MAX];
//int coin[101];
//
//int main(void)
//{
//	cin >> N >> K;
//
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> coin[i];
//	}
//
//	DP[0] = 1;
//
//	for (int i = 1; i <= N; i++)
//	{
//		for(int j = coin[i]; j <= K; j++)
//		{
//			DP[j] = DP[j] + DP[j - coin[i]];
//		}
//	}
//
//	cout << DP[K];
//
//	return 0;
//}