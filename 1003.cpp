//#include<iostream>
//using namespace std;
//
//long long fiboarr[100] = { 0, 1, };
//
//int count0 = 0;
//int count1 = 0;
//
//long long Solution(int N)
//{
//	if (N == 0)
//	{
//		count0++;
//		return fiboarr[N];
//	}
//	if (N == 1)
//	{
//		count1++;
//		return fiboarr[N];
//	}
//	else if (fiboarr[N] == 0)
//	{
//		fiboarr[N] = Solution(N - 2) + Solution(N - 1);
//	}
//	
//	return fiboarr[N];
//}
//int main(void)
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		int temp;
//		cin >> temp;
//
//		count0 = 0;
//		count1 = 0;
//
//	
//			Solution(temp);
//			cout << count0 << ' ' << count1 << '\n';
//	}
//	return 0;
//}