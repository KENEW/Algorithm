//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//
//int N;
//int triAngle[501][501];
//int cache[501][501];
//
//int maxSum(int stage, int index)
//{
//	int& result = cache[stage][index];
//
//	if (result != -1)
//	{
//		return result;
//	}
//	if (stage == N - 1)
//	{
//		return result = triAngle[stage][index];
//	}
//
//	return result = max(maxSum(stage + 1, index), maxSum(stage + 1, index + 1))
//	+ triAngle[stage][index];
//}
//int main(void)
//{
//	cin >> N;
//
//	memset(cache, -1, sizeof(cache));
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			cin >> triAngle[i][j];
//		}
//	}
//
//	cout << maxSum(0, 0) << endl;
//	return 0;
//}
