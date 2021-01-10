//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int dp[101];
//int N;
//int result = 0;
//
//int main() 
//{
//	cin >> N;
//
//	vector<pair<int, int>> v;
//
//	v.emplace_back(0, 0);
//
//	for (int i = 0; i < N; i++) 
//	{
//		int inputNum1, inputNum2;
//		cin >> inputNum1 >> inputNum2;
//
//		v.emplace_back(inputNum1, inputNum2);
//	}
//
//	sort(v.begin(), v.end());
//
//
//	for (int i = 1; i <= N; i++) 
//	{
//		for (int j = 0; j < i; j++) 
//		{
//			if (v[i].second > v[j].second)
//			{
//				if (dp[j] >= dp[i]) 
//				{
//					dp[i] = dp[j] + 1;
//				}
//			}
//		}
//		result = max(result, dp[i]);
//	}
//
//	cout << N - result << endl;
//
//	return 0;
//}