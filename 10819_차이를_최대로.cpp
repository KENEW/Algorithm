//#include<iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//
//int N;
//int arr[9];
//int sum = 0, result = 0;
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
//	sort(arr, arr + N);
//
//	do
//	{
//		sum = 0;
//		for (int i = 1; i < N; i++)
//		{
//			sum += abs(arr[i] - arr[i - 1]);
//		}
//		result = max(sum, result);
//		
//	} while (next_permutation(arr, arr + N));
//
//	cout << result;
//	return 0;
//}
