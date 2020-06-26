//#include<iostream>
//#define N 10001
//using namespace std;
//
//bool arr[N];
//int selfNumber(int n)
//{
//	int num = n;
//	while (n != 0)
//	{
//		num += n%10;
//		n /= 10;
//	}
//	return num;
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios::sync_with_stdio(false);
//
//	for (int i = 1; i <= N; i++)
//	{
//		int index = selfNumber(i);
//
//		if (index <= N)
//		{
//			arr[index] = true;
//		}
//	}
//
//	for (int i = 1; i < N; i++)
//	{
//		if(!arr[i])
//			printf("%d\n", i);
//	}
//
//	return 0;
//}