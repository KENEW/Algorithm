//#include<iostream>
//using namespace std;
//
//int N;
//int arr[15];
//int result = 0;
//
//bool isCheck(int i)
//{
//	for (int j = 0; j < i; j++)
//	{
//		if ((arr[i] == arr[j]) || abs(arr[i] - arr[j]) == (i - j))
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//void Queen(int i)
//{
//	if (i == N)
//	{
//		result += 1;
//	}
//	for (int j = 0; j < N; j++)
//	{
//		arr[i] = j;
//		if (isCheck(i))
//		{
//			Queen(i + 1);
//		}
//	}
//}
//
//int main(void)
//{
//	cin >> N;
//	Queen(0);
//
//	cout << result;
//	return 0;
//}