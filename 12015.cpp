//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//#define FOR(i, N) for (int i = 0; i < N; i++)
//
//vector<int> v;
//
//int main(void)
//{
//	int N, x;
//	scanf_s("%d", &N);
//
//	FOR(i, N)
//	{
//		scanf_s("%d", &x);
//
//		if (v.empty() || v.back() < x)
//		{
//			v.push_back(x);
//		}
//		else
//		{
//			auto iter = lower_bound(v.begin(), v.end(), x);
//			*iter = x;
//		}
//	}
//
//	printf("%d", int(v.size()));
//	return 0;
//}
