//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int N;
//int arr[40001];
//int lis[40001];
//
////LIS를 유지하기 위해 숫자가 들어갈 위치를 이분탐색으로 찾는 함수
//int BinarySearch(int left, int right, int target)
//{
//	int mid;
//
//	//lis 배열에 들어갈 target == arr[i] 의 위치를 이분탐색으로 찾기
//	while (left < right)
//	{
//		mid = (left + right) / 2;
//
//		if (lis[mid] < target)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid;
//		}
//	}
//
//	return right;
//}
//
//int main(void)
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//	}
//
//	//Lis 배열의 맨 첫번째 값은 arr[0]으로 초기화
//	lis[0] = arr[0];
//
//	int j = 0;
//	int i = 1;
//
//	//arr의 두번째부터 마지막까지 하나씩 Lis와 비교하면서 넣어준다.
//	while (i < N)
//	{
//		//Lis 배열의 맨 뒤의 값보다 arr[i]가 더 크면 그것을 lis배열 맨 뒤에 넣어준다.
//		if (lis[j] < arr[i])
//		{
//			lis[j + 1] = arr[i];
//			j += 1;
//		}
//		//arr[i]값이 더 작으면 arr[i]의 값이 Lis배열 중 어느 곳에 들어갈지 이분탐색한다.
//		else
//		{
//			int index = BinarySearch(0, j, arr[i]);
//			lis[index] = arr[i];
//		}
//		i += 1;
//	}
//
//	cout << j + 1;
//	
//	return 0;
//}