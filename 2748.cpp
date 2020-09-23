//#include<iostream>
//using namespace std;
//
//long long  fiboarr[100] = {0, 1, };
//
//long long Solution(int N)
//{
//	if (N == 0 || N == 1)
//	{
//		return fiboarr[N];
//	}
//	else if (fiboarr[N] == 0)
//	{
//		fiboarr[N] = Solution(N - 2) + Solution(N -1);
//	}
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
//	cout << Solution(N);
//	return 0;
//}