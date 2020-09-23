//#include<iostream>
//using namespace std;
//
//int input[100] = {0, };
//int N = 0, M = 0;
//int result = 0;
//
//int Solution()
//{
//	for(int i = 0; i < N - 2; i++)
//	{
//		for (int j = 1 + i; j < N - 1; j++)
//		{
//			for (int k = 1 + j; k < N; k++)
//			{
//				int temp = input[i] + input[j] + input[k];
//				
//				if ((temp <= M) && (temp > result))
//				{
//					result = temp;
//				}
//			}
//		}
//	}
//
//	return result;
//}
//
//int main(void)
//{
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> input[i];
//	}
//
//	cout << Solution();
//
//	return 0;
//}
//
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int N, M;
//	int Input[100];
//	int Result = 0;
//
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) 
//	cin >> Input[i];
//
//	for (int i = 0; i < N - 2; i++)
//	{
//		for (int j = i + 1; j < N - 1; j++)
//		{
//			for (int k = j + 1; k < N; k++)
//			{
//				if (Input[i] + Input[j] + Input[k] <= M && M - (Input[i] + Input[j] + Input[k]) < M - Result)
//				{
//					Result = Input[i] + Input[j] + Input[k];
//				}
//			}
//		}
//	}
//	cout << Result;
//}
