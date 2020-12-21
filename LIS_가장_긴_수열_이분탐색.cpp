//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int N;
//int arr[40001];
//int lis[40001];
//
////LIS�� �����ϱ� ���� ���ڰ� �� ��ġ�� �̺�Ž������ ã�� �Լ�
//int BinarySearch(int left, int right, int target)
//{
//	int mid;
//
//	//lis �迭�� �� target == arr[i] �� ��ġ�� �̺�Ž������ ã��
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
//	//Lis �迭�� �� ù��° ���� arr[0]���� �ʱ�ȭ
//	lis[0] = arr[0];
//
//	int j = 0;
//	int i = 1;
//
//	//arr�� �ι�°���� ���������� �ϳ��� Lis�� ���ϸ鼭 �־��ش�.
//	while (i < N)
//	{
//		//Lis �迭�� �� ���� ������ arr[i]�� �� ũ�� �װ��� lis�迭 �� �ڿ� �־��ش�.
//		if (lis[j] < arr[i])
//		{
//			lis[j + 1] = arr[i];
//			j += 1;
//		}
//		//arr[i]���� �� ������ arr[i]�� ���� Lis�迭 �� ��� ���� ���� �̺�Ž���Ѵ�.
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