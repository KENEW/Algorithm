//#include<iostream>
//using namespace std;
//
//int N, S;
//int arr[21];
//int sum, result = 0;
//
//void Solution(int start, int total)
//{
//	if (start == N)
//	{
//		return;
//	}
//
//	total += arr[start];
//
//	if (total == S)
//	{
//		sum++;
//	}
//
//	Solution(start + 1, total - arr[start]);
//	Solution(start + 1, total);
//}
//
//int main(void)
//{
//	cin >> N >> S;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//	}
//
//	Solution(0, 0);
//
//	cout << sum;
//
//	return 0;
//}