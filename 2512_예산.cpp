//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int N, M;
//int arr[10001];
//
//int maxNum = 0;
//
//int BinarySearch()
//{
//	int left = 0;
//	int right = maxNum;
//	int mid;
//
//	int sum, result;
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		sum = 0;
//
//		for (int i = 0; i < N; i++)
//		{
//			if (mid < arr[i])
//			{
//				sum += mid;
//			}
//			else
//			{
//				sum += arr[i];
//			}
//		}
//		
//		if (sum == mid)
//		{
//			result = mid;
//			break;
//		}
//		
//		if (sum <= M)
//		{
//			result = mid;
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//
//	return result;
//}
//
//int main(void)
//{
//	cin >> N;
//	
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//
//		maxNum = max(arr[i], maxNum);
//	}
//
//	cin >> M;
//
//	cout << BinarySearch();
//
//	return 0;
//}